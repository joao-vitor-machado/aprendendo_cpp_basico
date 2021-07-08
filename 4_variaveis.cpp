#include <iostream>

using namespace std;

int main(){
	
	/*
	C++ possui basicamente 5 tipos variáveis:
	
	int - números inteiros
	double - números reais
	char - carcteres da tabela ASCII
	string - conjunto de caracteres
	bool - valores de sim/não, na linguagem: true/false
	*/
	
	//Criar variáveis em C++ é simples. Como na maioria das linguagens, devemos declarar da seguinte forma:
	
	int var = 3; // tipo da variável, nome da variável e o valor a ser atribuído para a variável
	
	// Note que a variável pode receber valores de outras variáveis
	
	cout << var << endl;
	
	// também é possível criar uma variável e atribuir um valor só mais tarde
	
	double var2;
	var2 = 2.5; // Note que os valores double tem separação das casas decimais feita por ponto, e não vírgula
	
	cout << var2 << endl;
	
	//E claro. também podemos alterar o valor das variáveis
	
	string var3 = "Hello";
	cout << var3 << endl;
	
	var3 = "World";
	cout << var3 << endl;
	
	/*
	Nota: Já é possível, mesmo vendo o básico da linguagem, que ela tem muitas facilidades que o C não tem. A maior delas vista até agora é não precisar declarar todas as suas
	variáveis no começo da função
	*/
	
	//Também podemos somar ou imprimir variáveis juntas
	
	double sum = var + var2;
	
	cout << "A soma de " << var << " e " << var2 << " eh " << sum << endl;
	
	/*note que sum teria que ser double de todo modo pois os inteiros estão contidos no conjuntos dos reais, mas o contrário não é verdade.
	Ou seja, se tentássemos atribuir o valor da soma entre um int e um double a um int, estaríamos estrapolando os limites do conjunto ao qual declaramos que a sum seria
	*/
	
	//Assim como em C, podemos declarar varias variáveis juntas
	
	int x = 5, y = 6, z = 7;
	
	cout << "Soma das variaveis x, y e z: " << x + y + z << endl;
	
	//Outro recurso incrível oferecido pelo C++ é a constante 
	
	const int var4 = 3;
	
	//quando declarmaos uma constante estamos criando uma variável ou valor imutável
	
	cout << "Nossa constante: " << var4 << endl;
	
	return 0;
}
