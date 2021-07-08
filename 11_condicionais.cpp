#include<iostream>

using namespace std;

int main(){
	
	/*
	C++ suporta alguns tipos de comparações (que retornam true e false):
	
	- a < b (a menor que b)
	- a <= b (a menor igual a b)
	- a == b (a igual a b)
	- a != b (a diferente de b)
	- a > b (a maior que b)
	- a >= b (a maior igual a b)
	*/
	
	/*
	Podemos usar as comparações apresentadas acima para criarmos execuções condicionais nos nossos códigos.
	C++ suporta os seguintes tipos de condicionais:
	
	- if (se -, então -)
	- else (senão, -)
	- else if (senão, se - então -)
	- switch (recebe um valor e executa uma tarefa de acordo com o valor correspondendte no domínio definido)
	*/
	
	// Vamos para alguns exemplos
	
	int x = 2, y = 3, z = 4;
	
	if(x < y){
		cout << "X eh maior que y" << endl;
	}
	
	if(x >= y){
		cout << "y eh menor que y" << endl;
	}else{
		cout << "y nao eh menor que x" << endl;
	}
	
	
	if( x == z){
		cout << "x eh igual a z" << endl;
		
	}else if(x < z){
		cout << "x eh menor que z" << endl;
	}else{
		cout << "x nao eh maior nem igual a z" << endl;
	}
	
	switch(x){
		case 1:
			cout << "x eh 1" << endl;
			break;// O break é utilizado para pular para fora do nosso switch e continuar a execução do programa
		case 2:
			cout << "x eh 2" << endl;
			break;
		case 3:
			cout << "x eh 3" << endl;
			break;
			
		default:
			cout << "x eh " << x << endl; // o default é a execução que será feita caso o valor da variavel não coincida com nenhum dos cases. Ele é o padrão
			break;
	}
	
	// Também é possível combinar algumas operações nas validações condicionais
	
	if(((x+1) == y) && (y == (z - 1))){
		cout << "x + 1 eh igual a y e y eh igual a z - 1" << endl;
	}
	
	//Também é possível encurtarmos comparações simples de ifs, para deixarmos nosso código mais enxuto
	
	(x < y) ? cout << "x eh menor que y" << endl : cout << "x nao eh menor que y" << endl;
	
	/*
	Basicamente, o que o programa faz é representar de forma mais curta a seguinte expressao:
	if(x < y){
	cout << "x eh menor que y" << endl;
	}else{
	cout << "x nao eh menor que y" << endl;
	}
	
	Ou seja, se a condição que vem antes do "?" for verdadeira, execute o que vem logo após o "?"
	senão, execute o que vem após o ":"
	*/
	
	return 0;
}
