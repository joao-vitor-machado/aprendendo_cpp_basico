#include<iostream>

using namespace std;

	/*
	Fun��es s�o blocos de c�digo que s�o executados apenas quando chamados. O C++ fornece algumas fun��es j� pr�-definidas. Um exemplo dessas fun��es � a main().
	A main() � a fun��o principal do programa, que � a primeira a ser executada
	*/
	
	/*
	Fun��es devem ser sempre delcaradas antes da fun��o main(), para que possam ser chamadas.
	Note que h� diferen�a entre declarar e definir. Portanto, podemos declarar e definir a fun��o antes da main ou podemos apenas declarar a fun��o antes da main e definir depois
	*/
	
	void imprimir1() { //declarando a fun��o e definindo sua execu��o
		cout<< "Declara e definida antes da main" << endl;
	}
	
	void imprimir2(); //Declarando a fun��o


int main(){
	
	imprimir1();
	imprimir2();
	
	return 0;
}


	void imprimir2 (){ //definindo a fun��o
		cout << "Declarada antes de main e definida depois de main" << endl;
	}
