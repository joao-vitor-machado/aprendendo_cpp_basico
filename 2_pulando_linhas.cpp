#include <iostream>

using namespace std;

int main(){
	
	cout << "Estou aprendendo C++";
	
	cout << "\nEstou \naprendendo \nC++"; //Como é possível ver, "\n" faz com que você pule uma linha
	
	cout << "\nEstou aprendendo \n\nC++"; // dois \n seguidos criam uma nova linha
	
	cout << "\nEstou aprendendo" << endl << "C++"; // o endl também é uma forma de pular linhas, mas é menos utilizado
	
	//Nota: o caracter \ é usado em strings para identificar caracteres especiais, que não seriam reconhecidos ou quebrariam o nosso print sem essa referência
		
	return 0;
}
