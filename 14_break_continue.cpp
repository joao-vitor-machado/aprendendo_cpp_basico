#include<iostream>

using namespace std;

int main(){
	
	/*
	Como já vimos no tópico de condicionais, o break é utilizado para pular fora da linha de execução de uma parte do programa.
	Além dele, temos uma outra forma de manipular a execução de trechos de código, o continue
	*/
	
	/* Imagine que você deseja pular um for do código se uma variável atingir algum valor que você sabe que quebrará o prograna, podemos usar o break para
	sair da execução desse for, por exemplo*/
	
	cout << "Break;" << endl;
	
	int x;
	
	for(x = 0; x < 9; ++x){
		
		if(x == 6)
			break;		
	
		
		cout << x << endl;
		
		/*O que acontece nesse código é que quando chegamos no valor 6 o nosso break encerra o for e já segue para o resto da execução do programa*/
		
}

	cout << "\nContinue\n" << endl;


	for(x = 0; x < 9; ++x){
		
		if(x == 6)
			continue;		
	
		
		cout << x << endl;
		
		/* O que acontece aqui é que ao encontrar o valor 6 o continue do nosso programa ignora a execução para x = 6 e pula para o próximo valor de x no loop*/
		
}
	
	return 0;
}
