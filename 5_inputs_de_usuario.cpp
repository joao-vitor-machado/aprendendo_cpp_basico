#include <iostream>

using namespace std;

int main(){
	
	/*
	J� vimos que para printar um valor devemos usar o cout <<. 
	agora, para recebermos valores, devemos usar o cin >>.
	Percebeu a rela��o de out e in, n�?
	*/
	
	int varInput; //As vari�veis em C++ mais s�o case sensitive. portanto, varinput e varInput s�o vari�veis diferentes
	
	//Nota: N�o use vari�veis come�ando com n�meros ou letras mai�sculas. Muito menos caracteres especiais
	
	cout << "Digite um numero inteiro:" << endl;
	
	cin >> varInput;
	
	cout << "Voce digitou " << varInput << endl;
	
	return 0;
}
