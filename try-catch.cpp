#include<iostream>

using namespace std;


int main(){
	
	/*
	Quando estamos programando em C++ é muito comum ocorrerem erros, sejam eles causados pelo programador ou por um input errado do usuário, por exemplo.
	Para resolver esse tipo de problema temos o try-catch
	
	Para utilizarmos esse recurso vamos precisar de 3 palavras chave:
	
	- try: um bloco de código tentará ser executado
	- throw: caso ocorra um erro na execução do código ele retornará o que for definido nesse elemento
	- catch: permite executar um bloco de código no caso da ocorrência de um erro 
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
