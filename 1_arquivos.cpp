#include<iostream>

//A biblioteca usada para manipulação de arquivos é a fstream
//Para utilizar a fstream basta fazer o include de lib:

#include<fstream>

using namespace std;

int main(){
	
	/*
	Na fstream há 3 classes as serem utilizadas:
	- ofstream: cria e escreve em arquivos
	- ifstream: lê dados de arquivos
	- fstream: é a combinação das duas anteriores. Essa classe lê, cria e escreve em arquivos 
	*/
	
	//Criando um arquivo
	ofstream meuArquivo("exemplo.txt");
	
	//Para escrever no arquivo devemos usar o "<<". E não se esqueça de inserir o \n
	meuArquivo << "Esse eh um arquivo meu\n";
	
	
	for(int i = 0; i < 9; ++i){
		meuArquivo << i << "\n";
	}
	
	meuArquivo.close();// Fechar os arquivos é uma boa prática porque você elimina gastos desnecessários de memória

	
	// Para lermos os valores em um arquivo precisamos antes de uma variável para receber o valor
	string valores;
	
	//Agora precisamos abrir novamente nosso arquivo
	ifstream meuArquivoLeitura("exemplo.txt");
	
	//Usamos um while para fazermos a leitura de todos os valores presentes no arquivo
	while(getline(meuArquivoLeitura, valores))
		cout << valores << endl;
		
	meuArquivoLeitura.close();
	return 0;
}
