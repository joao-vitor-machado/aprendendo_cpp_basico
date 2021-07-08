//Comentários em C++ são feitos em linhas precedidas de "//"
//C++ não reconhece acentos, cuidado!

#include <iostream>
//a linha acima chama a biblioteca principal

using namespace std; //aqui estamos declarando que podemos usar funções da lib standart. Podemos não colocar isso, mas aí todas as funções da lib standart deverão ser precedidas de std::

int main(){ //Essa função é a principal do programa. É dela que tudo começa a ser executado
	cout << "Hello World!"; //cout é o print de c++. Note que se não tivessemos chamado o std lá em cima, deveríamos usar std::cout
	return 0;//Nossa main sempre retorna 0 para encerrar o programa
	
	//Nota 1: todas as linhas em C++ devem ser finalizadas por um ";"
	//Nota 2: Como foi possível ver, main é uma função. Elas são extremamente importantes para a linguagem e serão melhor estudadas mais adiante
	
}
