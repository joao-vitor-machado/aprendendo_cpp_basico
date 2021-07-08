#include<iostream>

//A biblioteca usada para manipula��o de arquivos � a fstream
//Para utilizar a fstream basta fazer o include de lib:

#include<fstream>

using namespace std;

int main(){
	
	/*
	Na fstream h� 3 classes as serem utilizadas:
	- ofstream: cria e escreve em arquivos
	- ifstream: l� dados de arquivos
	- fstream: � a combina��o das duas anteriores. Essa classe l�, cria e escreve em arquivos 
	*/
	
	//Criando um arquivo
	ofstream meuArquivo("exemplo.txt");
	
	//Para escrever no arquivo devemos usar o "<<". E n�o se esque�a de inserir o \n
	meuArquivo << "Esse eh um arquivo meu\n";
	
	
	for(int i = 0; i < 9; ++i){
		meuArquivo << i << "\n";
	}
	
	meuArquivo.close();// Fechar os arquivos � uma boa pr�tica porque voc� elimina gastos desnecess�rios de mem�ria

	
	// Para lermos os valores em um arquivo precisamos antes de uma vari�vel para receber o valor
	string valores;
	
	//Agora precisamos abrir novamente nosso arquivo
	ifstream meuArquivoLeitura("exemplo.txt");
	
	//Usamos um while para fazermos a leitura de todos os valores presentes no arquivo
	while(getline(meuArquivoLeitura, valores))
		cout << valores << endl;
		
	meuArquivoLeitura.close();
	return 0;
}
