#include<iostream>
#include <locale.h>

#include<cmath>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s

	
	// Um outro recurso excelente oferecido pelo C++ � uma lib cheia de fun��es matem�ticas prontas para serem usadas
	//Essas fun��es s�o muitas e algumas bem complexas. Aqui irei mostrar algumas das que mais usamos no dia a dia e, mais abaixo, as outras mais voltadas para os amantes de matem�tica.
	
	//Primeiro, fa�a o include "#include<cmath>" para poder chamar a lib
	
	int x = 100, y = 5, z = 34;

//Mais comuns:

cout << "Valor absoluto de x: " <<	abs(x) << endl;	//Retorna o valor absoluto de X
cout << "Raiz quadrada de x: " <<	cbrt(x) << endl;	//Retorna a raiz quadrada de X
cout << "Valor arrendondado, para cima, de x: " <<	ceil(x) << endl;	//Retorna o valor de x arredondado para cima, para o seu inteiro mais pr�ximo
cout << "Valor absoluto de x ponto flutuante: " <<	fabs(x) << endl;	//Retorna o valor absoluto de um n�mero de ponto flutuante
cout << "Diferen�a positiva entre x e y: " <<	fdim(x, y) << endl;	//Retorna a diferen�a positiva entre x e y
cout << "Valor arredondado de x, para baixo: " <<	floor(x) << endl;	//Retorna o valor de x arredondado para baixo, para seu inteiro mais pr�ximo
cout << "Hipotenusa dos catetos x e y: " <<	hypot(x, y) << endl;	//Retorna a hipotenusa a partir dos catetos x e y
cout << "x * y + z sem perda de precis�o: " <<	fma(x, y, z) << endl;	//Retorna x*y+z sem perda de precis�o
cout << "Valor de x elevado a y: " <<	pow(x, y) << endl;	//Retorna o valor de x elevado a y

	
//Para os amantes de matem�tica

cout << "Arco cosseno de x: " << acos(x) << endl; //Retorna o valor do arco cosseno de X
cout << "Arco seno de x: " <<	asin(x) << endl;	//Retorna o valor do arco seno de X
cout << "Arco tangente de x: " <<	atan(x) << endl;	//Retorna a arco tangente de X
cout << "Valor do cosseno de x: " << cos(x) << endl;//Retorna o valor do cosseno de X
cout << "Cosseno Hiperb�lico de x: " <<	cosh(x) << endl;	//Retorna o cosseno Hiberb�lico de X
cout << "e elevado a x: " <<	exp(x) << endl;	//Retorna o valor de "e" elevado a X
cout << "e elevado a x -1: " <<	expm1(x) << endl;	//Retorna "e" elevado a x -1
cout << "Seno de x (x em radianos): " <<	sin(x) << endl;	//Retorna o valor do seno de x (x em radianos)
cout << "Seno hiperb�lico de x: " <<	sinh(x) << endl;	//Retorna o seno hiperb�lico de um valor double
cout << "Tangente de x: " <<	tan(x) << endl;	//Retorna a tangente de um �ngulo
cout << "Tangente hiperb�lica de x: " <<	tanh(x) << endl;	//Retorna a tangente hiperb�lica de um valor double

	return 0;
}
