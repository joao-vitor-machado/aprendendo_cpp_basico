#include <iostream>

using namespace std;

int main(){
	
	cout << "Estou aprendendo C++";
	
	cout << "\nEstou \naprendendo \nC++"; //Como � poss�vel ver, "\n" faz com que voc� pule uma linha
	
	cout << "\nEstou aprendendo \n\nC++"; // dois \n seguidos criam uma nova linha
	
	cout << "\nEstou aprendendo" << endl << "C++"; // o endl tamb�m � uma forma de pular linhas, mas � menos utilizado
	
	//Nota: o caracter \ � usado em strings para identificar caracteres especiais, que n�o seriam reconhecidos ou quebrariam o nosso print sem essa refer�ncia
		
	return 0;
}
