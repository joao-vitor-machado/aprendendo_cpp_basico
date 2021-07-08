#include<iostream>

using namespace std;

int main(){
	
	int x = 4, y = 2;
	
	cout << x; // esses couts antes da execução dos comandos é para visualizar o valor da variável antes da operação
	x += 3; // lembre-se que essa operação irá alterar o valor da variável. Não podemos usar ela para simular uam operação em um cout, por exemplo
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
