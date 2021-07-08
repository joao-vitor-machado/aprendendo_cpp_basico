#include<iostream>

using namespace std;


int main(){
	
	/*
	Quando estamos programando em C++ � muito comum ocorrerem erros, sejam eles causados pelo programador ou por um input errado do usu�rio, por exemplo.
	Para resolver esse tipo de problema temos o try-catch
	
	Para utilizarmos esse recurso vamos precisar de 3 palavras chave:
	
	- try: um bloco de c�digo tentar� ser executado
	- throw: caso ocorra um erro na execu��o do c�digo ele retornar� o que for definido nesse elemento
	- catch: permite executar um bloco de c�digo no caso da ocorr�ncia de um erro 
	*/
	
	try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw (age);
  }
}
catch (int myNum) {
  cout << "Access denied - You must be at least 18 years old.\n";
  cout << "Age is: " << myNum;
}
	
	return 0;
}
