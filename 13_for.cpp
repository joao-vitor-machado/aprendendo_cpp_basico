#include<iostream>

using namespace std;

int main(){
	
	/*
	Além do do while e while existe ainda um outro tipo de loop, o for.
	O for utiliza uma variável de referência para o número de vezes que deve executar um código dentro dele:
	*/
	
	int x;
	
	for(x = 0; x < 3; ++x){
		
		cout << "X eh igual a " << x << endl;
		
	}
	
	/*
	O que acontece nessa estrutura é que a variável x foi iniciada com o valor 0.
	Enquanto o nosso x fosse menor que 3 o programa deveria executar o código definido dentro do for, bem como adicionar um ao nosso x, representado pelo
	terceiro elemento, o ++x.
	Uma vez que x atingiu o valor 3 o for irá parar de executar o código, por esse motivo o x só é impresso até o número 2. Se quisessemos imprimir até o 3 deveríamos usar o 
	comparador <= entre x e o 3
	*/
	
	/*
	É importante deixar claro que qualquer varíavel pode ser passada para ser o contador, bem como podemos fazer qualquer comparação para validar a execução do for.
	E também, podemos usar qualquer tipo de equação para o terceiro argumento do nosso for:
	*/
	
	for(double y = 0.2; y <= 0.8; y = y + 0.1){
		cout << "y eh " << y << endl;
	}
	
	return 0;
}
