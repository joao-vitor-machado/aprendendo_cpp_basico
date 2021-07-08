#include <iostream>

using namespace std;

int main(){
	
	int n1 = 4, n2 = 2;
	
	//Como em todo bom programador, precisamos realizar cálculos. Obviamente o C++ suporta alguns operadores
	
	// +	
	cout << "Soma: " << n1 + n2 << endl;
	
	// -
	cout << "Subtracao: " << n1 - n2 << endl;
	
	// * (multiplicação)
	cout << "Multiplicacao: " << n1 * n2 << endl;
	
	// / (divisão)
	cout << "Divisao: " << n1 / n2 << endl;
	
	// % (Módulo)
	//Nota: O módulo é o resto da divisão entre dois números
	cout << "Modulo: " << n1 % n2 << endl;
	
	// ++ (Incremento)
	cout << "Incremento de n1: " << ++n1 << endl;
	
	// -- (Decremento)
	cout << "Decremento de n1: " << --n2 << endl;
	
	return 0;
}
