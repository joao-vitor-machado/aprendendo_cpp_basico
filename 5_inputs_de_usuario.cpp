#include <iostream>

using namespace std;

int main(){
	
	/*
	Já vimos que para printar um valor devemos usar o cout <<. 
	agora, para recebermos valores, devemos usar o cin >>.
	Percebeu a relação de out e in, né?
	*/
	
	int varInput; //As variáveis em C++ mais são case sensitive. portanto, varinput e varInput são variáveis diferentes
	
	//Nota: Não use variáveis começando com números ou letras maiúsculas. Muito menos caracteres especiais
	
	cout << "Digite um numero inteiro:" << endl;
	
	cin >> varInput;
	
	cout << "Voce digitou " << varInput << endl;
	
	return 0;
}
