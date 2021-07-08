#include<iostream>

using namespace std;

int main(){
	
	/*
	Em C++ também é possível criar referências para os valores de outras variáveis.
	O operador utilizado para fazer referências é o "&" e será muito importante para a utilização de ponteiros, que também serão vistos nesse arquivo
	*/
	
	string st1 = "Joao";
	string &st2 = st1; // Aqui, a variável std2 faz uma referência, representada pelo "&" ao valor da variável std1, que é "Joao"
	
	cout << st2 << endl;
	
	cout << "Endereco de st1 " << &st1 << endl; // também é possível utilizarmos o "&" para representarmos o espaço da memória em que uma variável está armazenando o seu valor
	
	cout << "Endereco de st2 " << &st2 << endl; // Como std2 faz referência ao valor armazenado em std1, o espaço da memória ao qual ele referencia será o mesmo que o de st1
	
	
	cout << "\nPonteiros\n" << endl;
	
	/*
	Ponteiros são variáveis que fazem referência a uma variável de mesmo tipo. Eles armazenam o endereço de memória da variável em questão e são criados usando o operador "*"
	*/
	
	string* refSt1 = &st1; // Veja que criamos um ponteiro para o tipo string usando o operador "*" e que armazena na variável refSt1 o endereço de memória de st1
	
	cout << "Valor do ponteiro: " << *refSt1 << endl;
	
	cout << "Endereco em refSt1: " << refSt1 << endl;
	
	//Note que sem o operador "*" a variável retorna o endereço da memória, que é o que está sendo armazenado. No entanto, se utilizarmos o "*" ele retorna o valor armazenado nesse endereço
	
	//Também é possível alterar o valor de um ponteiro, mas como ele está vinculado ao endereço da memória, ele irá alterar o valor da variável a qual está referenciando
	
	*refSt1 = "Marcos";
	
	cout << "Valor de st1: " << st1 << endl;
	cout << "Valor de st2: " << st2 << endl;// Lembre-se que st2 faz referência ao valor de st1
	cout << "Valor de st1: " << *refSt1 << endl;

	
	
	return 0;
}
