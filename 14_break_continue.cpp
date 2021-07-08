#include<iostream>

using namespace std;

int main(){
	
	/*
	Como j� vimos no t�pico de condicionais, o break � utilizado para pular fora da linha de execu��o de uma parte do programa.
	Al�m dele, temos uma outra forma de manipular a execu��o de trechos de c�digo, o continue
	*/
	
	/* Imagine que voc� deseja pular um for do c�digo se uma vari�vel atingir algum valor que voc� sabe que quebrar� o prograna, podemos usar o break para
	sair da execu��o desse for, por exemplo*/
	
	cout << "Break;" << endl;
	
	int x;
	
	for(x = 0; x < 9; ++x){
		
		if(x == 6)
			break;		
	
		
		cout << x << endl;
		
		/*O que acontece nesse c�digo � que quando chegamos no valor 6 o nosso break encerra o for e j� segue para o resto da execu��o do programa*/
		
}

	cout << "\nContinue\n" << endl;


	for(x = 0; x < 9; ++x){
		
		if(x == 6)
			continue;		
	
		
		cout << x << endl;
		
		/* O que acontece aqui � que ao encontrar o valor 6 o continue do nosso programa ignora a execu��o para x = 6 e pula para o pr�ximo valor de x no loop*/
		
}
	
	return 0;
}
