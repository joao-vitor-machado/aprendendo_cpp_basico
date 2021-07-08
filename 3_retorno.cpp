#include<iostream>

using namespace std;

/*
Note que a função main é do tipo int. Logo nota-se então que funções, assim como variáveis, possuem um tipo de retorno.
A função void é do tipo vazio, então não possui retorno. Funções de outros tipos, no entanto, possuem um retorno, representado pela palavra chave "return", como é o caso da nossa main()
*/

int sumDeInteiros(int x, int y){
	
	int sum;
	
	sum = x + y;
	
	return sum;
}

double sumDeReais(double x, int y){
	
	double sum;
	
	sum = x + y;
	
	return sum;
}

string nomeInteiro(string fName, string Lname){
	
	return fName + " " + Lname;
}

void printY(int* x){
	
	cout << *x << endl;
}

int main(){
	
	int x;
	string fn = "Joao", ln = "Vitor";
	
	x = sumDeInteiros(2, 3);
	
	cout << "sumDeInteiros: " << x << endl;
	
	cout << "sumDeReais: " << sumDeReais(3.1, 3) << endl;
	
	cout << "nomeInteiro: " << nomeInteiro(fn, ln) << endl;
	
	int y = 3;
	
	/*
	Uma solução muito utilizada para a otimização de um programa é o uso de ponteiros, que já foram vistos.
	Para isso nossa função deve receber um ponteiro de um tipo de variável e, ao chamar a função, devemos passar o endereço de memória dessa variável
	*/	
	
	printY(&y);
	
	return 0;
}
