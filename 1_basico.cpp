#include<iostream>

using namespace std;

	/*
	Funções são blocos de código que são executados apenas quando chamados. O C++ fornece algumas funções já pré-definidas. Um exemplo dessas funções é a main().
	A main() é a função principal do programa, que é a primeira a ser executada
	*/
	
	/*
	Funções devem ser sempre delcaradas antes da função main(), para que possam ser chamadas.
	Note que há diferença entre declarar e definir. Portanto, podemos declarar e definir a função antes da main ou podemos apenas declarar a função antes da main e definir depois
	*/
	
	void imprimir1() { //declarando a função e definindo sua execução
		cout<< "Declara e definida antes da main" << endl;
	}
	
	void imprimir2(); //Declarando a função


int main(){
	
	imprimir1();
	imprimir2();
	
	return 0;
}


	void imprimir2 (){ //definindo a função
		cout << "Declarada antes de main e definida depois de main" << endl;
	}
