#include<iostream>

using namespace std;

int main(){
	
	/*
	C++ suporta alguns tipos de compara��es (que retornam true e false):
	
	- a < b (a menor que b)
	- a <= b (a menor igual a b)
	- a == b (a igual a b)
	- a != b (a diferente de b)
	- a > b (a maior que b)
	- a >= b (a maior igual a b)
	*/
	
	/*
	Podemos usar as compara��es apresentadas acima para criarmos execu��es condicionais nos nossos c�digos.
	C++ suporta os seguintes tipos de condicionais:
	
	- if (se -, ent�o -)
	- else (sen�o, -)
	- else if (sen�o, se - ent�o -)
	- switch (recebe um valor e executa uma tarefa de acordo com o valor correspondendte no dom�nio definido)
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
			break;// O break � utilizado para pular para fora do nosso switch e continuar a execu��o do programa
		case 2:
			cout << "x eh 2" << endl;
			break;
		case 3:
			cout << "x eh 3" << endl;
			break;
			
		default:
			cout << "x eh " << x << endl; // o default � a execu��o que ser� feita caso o valor da variavel n�o coincida com nenhum dos cases. Ele � o padr�o
			break;
	}
	
	// Tamb�m � poss�vel combinar algumas opera��es nas valida��es condicionais
	
	if(((x+1) == y) && (y == (z - 1))){
		cout << "x + 1 eh igual a y e y eh igual a z - 1" << endl;
	}
	
	//Tamb�m � poss�vel encurtarmos compara��es simples de ifs, para deixarmos nosso c�digo mais enxuto
	
	(x < y) ? cout << "x eh menor que y" << endl : cout << "x nao eh menor que y" << endl;
	
	/*
	Basicamente, o que o programa faz � representar de forma mais curta a seguinte expressao:
	if(x < y){
	cout << "x eh menor que y" << endl;
	}else{
	cout << "x nao eh menor que y" << endl;
	}
	
	Ou seja, se a condi��o que vem antes do "?" for verdadeira, execute o que vem logo ap�s o "?"
	sen�o, execute o que vem ap�s o ":"
	*/
	
	return 0;
}
