#include <iostream>

using namespace std;

int main(){
	
	/*
	C++ possui basicamente 5 tipos vari�veis:
	
	int - n�meros inteiros
	double - n�meros reais
	char - carcteres da tabela ASCII
	string - conjunto de caracteres
	bool - valores de sim/n�o, na linguagem: true/false
	*/
	
	//Criar vari�veis em C++ � simples. Como na maioria das linguagens, devemos declarar da seguinte forma:
	
	int var = 3; // tipo da vari�vel, nome da vari�vel e o valor a ser atribu�do para a vari�vel
	
	// Note que a vari�vel pode receber valores de outras vari�veis
	
	cout << var << endl;
	
	// tamb�m � poss�vel criar uma vari�vel e atribuir um valor s� mais tarde
	
	double var2;
	var2 = 2.5; // Note que os valores double tem separa��o das casas decimais feita por ponto, e n�o v�rgula
	
	cout << var2 << endl;
	
	//E claro. tamb�m podemos alterar o valor das vari�veis
	
	string var3 = "Hello";
	cout << var3 << endl;
	
	var3 = "World";
	cout << var3 << endl;
	
	/*
	Nota: J� � poss�vel, mesmo vendo o b�sico da linguagem, que ela tem muitas facilidades que o C n�o tem. A maior delas vista at� agora � n�o precisar declarar todas as suas
	vari�veis no come�o da fun��o
	*/
	
	//Tamb�m podemos somar ou imprimir vari�veis juntas
	
	double sum = var + var2;
	
	cout << "A soma de " << var << " e " << var2 << " eh " << sum << endl;
	
	/*note que sum teria que ser double de todo modo pois os inteiros est�o contidos no conjuntos dos reais, mas o contr�rio n�o � verdade.
	Ou seja, se tent�ssemos atribuir o valor da soma entre um int e um double a um int, estar�amos estrapolando os limites do conjunto ao qual declaramos que a sum seria
	*/
	
	//Assim como em C, podemos declarar varias vari�veis juntas
	
	int x = 5, y = 6, z = 7;
	
	cout << "Soma das variaveis x, y e z: " << x + y + z << endl;
	
	//Outro recurso incr�vel oferecido pelo C++ � a constante 
	
	const int var4 = 3;
	
	//quando declarmaos uma constante estamos criando uma vari�vel ou valor imut�vel
	
	cout << "Nossa constante: " << var4 << endl;
	
	return 0;
}
