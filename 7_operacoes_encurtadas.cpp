#include<iostream>

using namespace std;

int main(){
	
	int x = 4, y = 2;
	
	cout << x; // esses couts antes da execu��o dos comandos � para visualizar o valor da vari�vel antes da opera��o
	x += 3; // lembre-se que essa opera��o ir� alterar o valor da vari�vel. N�o podemos usar ela para simular uam opera��o em um cout, por exemplo
	cout << " + 3 = " << x << endl; // esse operador faz o mesmo que x = x + 3
	
	cout << x;
	 x -= 3;
	cout << " - 3 = " << x << endl; // esse operador faz o mesmo que x = x - 3
	
	cout << x;
	x *= 3;
	cout << " * 3 = " << x << endl; // esse operador faz o mesmo que x = x * 3
	
	cout << x;
	x /= 3;
	cout << " / 3 = " << x << endl; // esse operador faz o mesmo que x = x / 3
	
	cout << x;
	x %= 3;
	cout << " % 3 = " << x << endl; // esse operador faz o mesmo que x = x % 3
		
	
	return 0;
}
