#include<iostream>

using namespace std;

int main(){
	
	/*
	Al�m do do while e while existe ainda um outro tipo de loop, o for.
	O for utiliza uma vari�vel de refer�ncia para o n�mero de vezes que deve executar um c�digo dentro dele:
	*/
	
	int x;
	
	for(x = 0; x < 3; ++x){
		
		cout << "X eh igual a " << x << endl;
		
	}
	
	/*
	O que acontece nessa estrutura � que a vari�vel x foi iniciada com o valor 0.
	Enquanto o nosso x fosse menor que 3 o programa deveria executar o c�digo definido dentro do for, bem como adicionar um ao nosso x, representado pelo
	terceiro elemento, o ++x.
	Uma vez que x atingiu o valor 3 o for ir� parar de executar o c�digo, por esse motivo o x s� � impresso at� o n�mero 2. Se quisessemos imprimir at� o 3 dever�amos usar o 
	comparador <= entre x e o 3
	*/
	
	/*
	� importante deixar claro que qualquer var�avel pode ser passada para ser o contador, bem como podemos fazer qualquer compara��o para validar a execu��o do for.
	E tamb�m, podemos usar qualquer tipo de equa��o para o terceiro argumento do nosso for:
	*/
	
	for(double y = 0.2; y <= 0.8; y = y + 0.1){
		cout << "y eh " << y << endl;
	}
	
	return 0;
}
