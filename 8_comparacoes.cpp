#include <iostream>

using namespace std;

int main(){
	
	//C++ também nos oferece a possibilidade de realizar comaparações entre valores
	
	int x = 2, y = 3;
	
	cout << "x == y: " << (x == y) << endl; // Esse comparador é utilizado para verfiicar se um valor é igual ao um outro número .Note que as comparações retornam valores booleanos
	
	cout << "x != y: " << (x != y) << endl; // Esse comparador é utilizado para verficar se um valor é diferente de outro valor
	
	cout << "x > y: " << (x > y) << endl; // Esse comparador é utilizado para verficar se um valor é maior que outro valor
	
	cout << "x < y: " << (x < y) << endl; // Esse comparador é utilizado para verficar se um valor é menor que outro valor
	
	cout << "x >= y: " << (x >= y) << endl; // Esse comparador é utilizado para verficar se um valor é maior igual a outro valor
	
	cout << "x <= y && x >= y: " << ((x <= y) && (x >= y)) << endl; // O comparador && é utilizado para verficar se duas condições são verdadeiras ao mesmo tempo (dois booleanos)

	cout << "x <= y || x >= y: " << ((x <= y) || (x >= y)) << endl; // O comparador || é utilizado para verficar se uma outra condição é  verdadeiras ao mesmo tempo (dois booleanos)

	cout << "!(x <= y && x >= y): " << !((x <= y) && (x >= y)) << endl; // O operador ! é utilizado para negar um valor booleano


	
	return 0;
}
