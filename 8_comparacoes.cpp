#include <iostream>

using namespace std;

int main(){
	
	//C++ tamb�m nos oferece a possibilidade de realizar comapara��es entre valores
	
	int x = 2, y = 3;
	
	cout << "x == y: " << (x == y) << endl; // Esse comparador � utilizado para verfiicar se um valor � igual ao um outro n�mero .Note que as compara��es retornam valores booleanos
	
	cout << "x != y: " << (x != y) << endl; // Esse comparador � utilizado para verficar se um valor � diferente de outro valor
	
	cout << "x > y: " << (x > y) << endl; // Esse comparador � utilizado para verficar se um valor � maior que outro valor
	
	cout << "x < y: " << (x < y) << endl; // Esse comparador � utilizado para verficar se um valor � menor que outro valor
	
	cout << "x >= y: " << (x >= y) << endl; // Esse comparador � utilizado para verficar se um valor � maior igual a outro valor
	
	cout << "x <= y && x >= y: " << ((x <= y) && (x >= y)) << endl; // O comparador && � utilizado para verficar se duas condi��es s�o verdadeiras ao mesmo tempo (dois booleanos)

	cout << "x <= y || x >= y: " << ((x <= y) || (x >= y)) << endl; // O comparador || � utilizado para verficar se uma outra condi��o �  verdadeiras ao mesmo tempo (dois booleanos)

	cout << "!(x <= y && x >= y): " << !((x <= y) && (x >= y)) << endl; // O operador ! � utilizado para negar um valor booleano


	
	return 0;
}
