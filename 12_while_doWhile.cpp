#include<iostream>

using namespace std;

int main(){
	/*
	Um recurso muito utilizado em C++ s�o os loops. Os loops que podemos encontrar s�o o While e o Do While
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
	A diferen�a entre as duas estruturas � que a primeira verfica a condi��o antes de executar o c�dio. J� a segunda executa antes de verificar a condicional. 
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
	Voc� pode perceber que a execu��o do c�digo acima s� imprime o a linha com o valor de y. No entanto, ambos j� tem o valor igual a zero, que � a condi��o para o encerramento do loop.
	O motivo disso � que no while ele verifica que x � igual a zero e j� encerra o loop sem nem mesmo imprimir nada.
	O Do while, por outro lado, executa o cout e s� depois percebe que y n�o � menor que 0, parando a execu��o
	*/
	
	return 0;
}
