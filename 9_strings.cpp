#include <iostream>
#include <locale.h>
using namespace std;

// Strings, basicamente, s�o conjuntos de caracteres que s�o delimitados por duas aspas duplas
// O hello world que fizemos no helloWorld.cpp utiliza o cout para imprimir a string "Hello World"

int main(){
	
	string var = "joao"; // Para declarar uma string s� precisamos seguir o mesmo esquema que foi apresentado sobre cria��o de vari�veis
	
	cout << var << endl;

	// Concatena��o � o processo de unir duas strings em uma s�
	//Existem duas formas de concatenarmos strings
	
	//jeito 1
	string primeiroNome = "Joao", segundoNome = "Vitor";
	
	cout << "Primeiro nome: " << primeiroNome << endl;
	cout << "Segundo nome: " << segundoNome << endl;
	
	cout << "Nome completo: " << primeiroNome + segundoNome << endl; // Desse jeito temos o problema de juntar duas strings sem espa�o
	
	// para resolver o problema das strings grudadas s� precisamos concatenar uma terceira string, que � o nosso espa�o
	
	cout << "Nome completo sem espaco: " << primeiroNome + " " + segundoNome << endl;
	
	//jeito 2
	// Podemos tamb�m utilizar o append
	
	cout << "Nome completo sem espaco 2: " << primeiroNome.append((" " + segundoNome)) << endl;
	
	//Nota: Preste bastante aten��o se tentar somar uma string com um n�mero. Isso pode e VAI te causar problemas. um erro ocorrer�
	
	// Um dado que muitas vezes precisamos para fazer um for, por exemplo, � o comprimento da string. Ao contr�rio de C, que precisa que voc� se vire pra conseguir o dado, C++ j� te d� uma fun��o para isso
	
	cout << "O comprimento da string \"joao\" eh: " << var.length() << endl; // A fun��o length() te retorna o comprimento de uma string
		cout << "O comprimento da string \"joao\" eh: " << var.size() << endl; // A fun��o size() tamb�m te retorna o comprimento de uma string. Voc� que escolhe a que mais te agrada

	
	/*
	Ah, outra coisa. Lembra que em "pulando_linhas.cpp" falamos sobre o "\". Pois �. Voc� pode ver que
	as aspas s�o caracteres especiais. Se n�o us�ssemos o \ para explicitar para o compilador que as nossas aspsas
	eram parte da string, e n�o as aspas limitadoras da string, o C++ n�o entenderia e pensaria que "O comprimento da string" era uma string,
	"joao" uma vari�vel, e "", uma outra string
	*/
	
	// Voc� tamb�m pode desejar acessar um caractere espec�fico da sua string. H� uma maneira muito simples de se fazer isso
	
	cout << "O primeiro caractere de \"Joao\" eh: " << primeiroNome[0] << endl; // Escolha o �ndice da sua string que deseja acessar e coloque ele entre colchetes logo ap�s o nome da vari�vel
	
	// Lembre-se que em linguagens de programa��o sempre come�amos a acessar os �ndices pelo �ndice 0
	
	/*
	Tamb�m � poss�vel receber uma string escrita pelo usu�rio. Podemos fazer isso usando o cin >>.
	Por�m, imagino que voc� j� tenha entendido que lidamos com muitos problemas ao trabalhar com strings, certo? Ent�o vou pular de uma vez 
	a demonstra��o disso e te dizer que, ao usar o cin >>, ele n�o considera o que vem depois de um espa�amento, por exemplo. Para lidarmos com 
	esse problema temos o getline(), que recebe uma linha inteira, s� parando ao receber um ENTER
	*/
	
	string mensagem;
	
	cout << "Digite sua mensagem: ";
	getline(cin, mensagem); // O getline ir� receber a string de uma linha, s� parando ao encontrar um ENTER. Ele recebe a maneira como o dado ir� chegar (cin) e a vari�vel onde vai ser armazenada a string
	
	cout << "Sua mensagem eh: " << mensagem << endl;
	
	//Nota: Lembre-se que n�o podemos receber caracteres especiais
	
	//Agora vem a cereja do bolo. Provavelmente o motivo de muitos entrarem aqui. A maneira de aceitar caracteres especiais na sua aplica��o. Para isso:
	// - inclua a lib locale atrav�s do "#include<locale>" no topo da sua aplica��o. logo abaixo do include da iostream
	// - Insira na sua main() o seguinte trecho de c�digo:"
	
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	cout << "Pronto. Agora nossa aplica��o recebe caracteres especiais sem problemas!!!" << endl;
		
	return 0;
}
