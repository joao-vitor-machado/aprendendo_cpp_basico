//Coment�rios em C++ s�o feitos em linhas precedidas de "//"
//C++ n�o reconhece acentos, cuidado!

#include <iostream>
//a linha acima chama a biblioteca principal

using namespace std; //aqui estamos declarando que podemos usar fun��es da lib standart. Podemos n�o colocar isso, mas a� todas as fun��es da lib standart dever�o ser precedidas de std::

int main(){ //Essa fun��o � a principal do programa. � dela que tudo come�a a ser executado
	cout << "Hello World!"; //cout � o print de c++. Note que se n�o tivessemos chamado o std l� em cima, dever�amos usar std::cout
	return 0;//Nossa main sempre retorna 0 para encerrar o programa
	
	//Nota 1: todas as linhas em C++ devem ser finalizadas por um ";"
	//Nota 2: Como foi poss�vel ver, main � uma fun��o. Elas s�o extremamente importantes para a linguagem e ser�o melhor estudadas mais adiante
	
}
