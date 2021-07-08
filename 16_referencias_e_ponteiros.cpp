#include<iostream>

using namespace std;

int main(){
	
	/*
	Em C++ tamb�m � poss�vel criar refer�ncias para os valores de outras vari�veis.
	O operador utilizado para fazer refer�ncias � o "&" e ser� muito importante para a utiliza��o de ponteiros, que tamb�m ser�o vistos nesse arquivo
	*/
	
	string st1 = "Joao";
	string &st2 = st1; // Aqui, a vari�vel std2 faz uma refer�ncia, representada pelo "&" ao valor da vari�vel std1, que � "Joao"
	
	cout << st2 << endl;
	
	cout << "Endereco de st1 " << &st1 << endl; // tamb�m � poss�vel utilizarmos o "&" para representarmos o espa�o da mem�ria em que uma vari�vel est� armazenando o seu valor
	
	cout << "Endereco de st2 " << &st2 << endl; // Como std2 faz refer�ncia ao valor armazenado em std1, o espa�o da mem�ria ao qual ele referencia ser� o mesmo que o de st1
	
	
	cout << "\nPonteiros\n" << endl;
	
	/*
	Ponteiros s�o vari�veis que fazem refer�ncia a uma vari�vel de mesmo tipo. Eles armazenam o endere�o de mem�ria da vari�vel em quest�o e s�o criados usando o operador "*"
	*/
	
	string* refSt1 = &st1; // Veja que criamos um ponteiro para o tipo string usando o operador "*" e que armazena na vari�vel refSt1 o endere�o de mem�ria de st1
	
	cout << "Valor do ponteiro: " << *refSt1 << endl;
	
	cout << "Endereco em refSt1: " << refSt1 << endl;
	
	//Note que sem o operador "*" a vari�vel retorna o endere�o da mem�ria, que � o que est� sendo armazenado. No entanto, se utilizarmos o "*" ele retorna o valor armazenado nesse endere�o
	
	//Tamb�m � poss�vel alterar o valor de um ponteiro, mas como ele est� vinculado ao endere�o da mem�ria, ele ir� alterar o valor da vari�vel a qual est� referenciando
	
	*refSt1 = "Marcos";
	
	cout << "Valor de st1: " << st1 << endl;
	cout << "Valor de st2: " << st2 << endl;// Lembre-se que st2 faz refer�ncia ao valor de st1
	cout << "Valor de st1: " << *refSt1 << endl;

	
	
	return 0;
}
