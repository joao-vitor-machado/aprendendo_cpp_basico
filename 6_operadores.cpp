#include <iostream>

using namespace std;

int main(){
	
	int n1 = 4, n2 = 2;
	
	//Como em todo bom programador, precisamos realizar c�lculos. Obviamente o C++ suporta alguns operadores
	
	// +	
	cout << "Soma: " << n1 + n2 << endl;
	
	// -
	cout << "Subtracao: " << n1 - n2 << endl;
	
	// * (multiplica��o)
	cout << "Multiplicacao: " << n1 * n2 << endl;
	
	// / (divis�o)
	cout << "Divisao: " << n1 / n2 << endl;
	
	// % (M�dulo)
	//Nota: O m�dulo � o resto da divis�o entre dois n�meros
	cout << "Modulo: " << n1 % n2 << endl;
	
	// ++ (Incremento)
	cout << "Incremento de n1: " << ++n1 << endl;
	
	// -- (Decremento)
	cout << "Decremento de n1: " << --n2 << endl;
	
	return 0;
}
