#include<iostream>

using namespace std;

void soma(int x, int y); // declarando a função
void meuNome(string x);
void seuPais(string pais = "Brasil");
void printY(int* x){
	
	cout << *x << endl;
}

int main(){
	
	/*
	Funções podem receber parametros que servirão como valores para que possam executar seu código
	
	Note que C++ é uma linguagem fortemente e estaticamente tipada. Nn se esqueça de passar o tipo de variável que seus argumentos devem receber
	*/
	
	//Também é possível definir um valor padrão para o seu parâmetro, caso não seja passado nenhum valor para ele
	
	
	soma(2, 4);
	meuNome("Joao");
	seuPais();
	seuPais("Jamaica");
	
	int y = 3;
	
	/*
	Uma solução muito utilizada para a otimização de um programa é o uso de ponteiros, que já foram vistos.
	Para isso nossa função deve receber um ponteiro de um tipo de variável e, ao chamar a função, devemos passar o endereço de memória dessa variável
	*/	
	
	printY(&y);
	
	return 0;
}

void soma(int x, int y){
	
	cout << "Soma de x e y = " << x + y << endl;
}

void meuNome(string x) {
	cout << "Meu nome eh " << x << endl;
}

void seuPais(string pais){
	
	cout << pais << endl;
}
