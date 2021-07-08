#include<iostream>

using namespace std;

void soma(int x, int y); // declarando a fun��o
void meuNome(string x);
void seuPais(string pais = "Brasil");
void printY(int* x){
	
	cout << *x << endl;
}

int main(){
	
	/*
	Fun��es podem receber parametros que servir�o como valores para que possam executar seu c�digo
	
	Note que C++ � uma linguagem fortemente e estaticamente tipada. Nn se esque�a de passar o tipo de vari�vel que seus argumentos devem receber
	*/
	
	//Tamb�m � poss�vel definir um valor padr�o para o seu par�metro, caso n�o seja passado nenhum valor para ele
	
	
	soma(2, 4);
	meuNome("Joao");
	seuPais();
	seuPais("Jamaica");
	
	int y = 3;
	
	/*
	Uma solu��o muito utilizada para a otimiza��o de um programa � o uso de ponteiros, que j� foram vistos.
	Para isso nossa fun��o deve receber um ponteiro de um tipo de vari�vel e, ao chamar a fun��o, devemos passar o endere�o de mem�ria dessa vari�vel
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
