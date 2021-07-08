#include<iostream>

using namespace std;

/*
Note que a fun��o main � do tipo int. Logo nota-se ent�o que fun��es, assim como vari�veis, possuem um tipo de retorno.
A fun��o void � do tipo vazio, ent�o n�o possui retorno. Fun��es de outros tipos, no entanto, possuem um retorno, representado pela palavra chave "return", como � o caso da nossa main()
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
	Uma solu��o muito utilizada para a otimiza��o de um programa � o uso de ponteiros, que j� foram vistos.
	Para isso nossa fun��o deve receber um ponteiro de um tipo de vari�vel e, ao chamar a fun��o, devemos passar o endere�o de mem�ria dessa vari�vel
	*/	
	
	printY(&y);
	
	return 0;
}
