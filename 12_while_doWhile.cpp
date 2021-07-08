#include<iostream>

using namespace std;

int main(){
	/*
	Um recurso muito utilizado em C++ são os loops. Os loops que podemos encontrar são o While e o Do While
	*/
	
	int x = 0;
	
	while(x < 2){
		cout << "Aqui o x eh igual a " << x << endl;
		x+=1;
	}
	
	int	y = 0;
	
	do{
		cout << "Aqui o y eh igual a " << y << endl;
		y+=1;
	}while(y < 2);
	
	/*
	A diferença entre as duas estruturas é que a primeira verfica a condição antes de executar o códio. Já a segunda executa antes de verificar a condicional. 
	Vamos ver isso no seguinte exemplo
	*/
	
	cout << "\nEntendendo o While e o Do While\n" << endl;
	
	 
	 x = 0;
	
	while(x < 0){
		cout << "Aqui o x eh igual a " << x << endl;
	}
	
	y = 0;
	
	do{
		cout << "Aqui o y eh igual a " << y << endl;
	}while(y < 0);
	
	/*
	Você pode perceber que a execução do código acima só imprime o a linha com o valor de y. No entanto, ambos já tem o valor igual a zero, que é a condição para o encerramento do loop.
	O motivo disso é que no while ele verifica que x é igual a zero e já encerra o loop sem nem mesmo imprimir nada.
	O Do while, por outro lado, executa o cout e só depois percebe que y não é menor que 0, parando a execução
	*/
	
	return 0;
}
