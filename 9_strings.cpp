#include <iostream>
#include <locale.h>
using namespace std;

// Strings, basicamente, são conjuntos de caracteres que são delimitados por duas aspas duplas
// O hello world que fizemos no helloWorld.cpp utiliza o cout para imprimir a string "Hello World"

int main(){
	
	string var = "joao"; // Para declarar uma string só precisamos seguir o mesmo esquema que foi apresentado sobre criação de variáveis
	
	cout << var << endl;

	// Concatenação é o processo de unir duas strings em uma só
	//Existem duas formas de concatenarmos strings
	
	//jeito 1
	string primeiroNome = "Joao", segundoNome = "Vitor";
	
	cout << "Primeiro nome: " << primeiroNome << endl;
	cout << "Segundo nome: " << segundoNome << endl;
	
	cout << "Nome completo: " << primeiroNome + segundoNome << endl; // Desse jeito temos o problema de juntar duas strings sem espaço
	
	// para resolver o problema das strings grudadas só precisamos concatenar uma terceira string, que é o nosso espaço
	
	cout << "Nome completo sem espaco: " << primeiroNome + " " + segundoNome << endl;
	
	//jeito 2
	// Podemos também utilizar o append
	
	cout << "Nome completo sem espaco 2: " << primeiroNome.append((" " + segundoNome)) << endl;
	
	//Nota: Preste bastante atenção se tentar somar uma string com um número. Isso pode e VAI te causar problemas. um erro ocorrerá
	
	// Um dado que muitas vezes precisamos para fazer um for, por exemplo, é o comprimento da string. Ao contrário de C, que precisa que você se vire pra conseguir o dado, C++ já te dá uma função para isso
	
	cout << "O comprimento da string \"joao\" eh: " << var.length() << endl; // A função length() te retorna o comprimento de uma string
		cout << "O comprimento da string \"joao\" eh: " << var.size() << endl; // A função size() também te retorna o comprimento de uma string. Você que escolhe a que mais te agrada

	
	/*
	Ah, outra coisa. Lembra que em "pulando_linhas.cpp" falamos sobre o "\". Pois é. Você pode ver que
	as aspas são caracteres especiais. Se não usássemos o \ para explicitar para o compilador que as nossas aspsas
	eram parte da string, e não as aspas limitadoras da string, o C++ não entenderia e pensaria que "O comprimento da string" era uma string,
	"joao" uma variável, e "", uma outra string
	*/
	
	// Você também pode desejar acessar um caractere específico da sua string. Há uma maneira muito simples de se fazer isso
	
	cout << "O primeiro caractere de \"Joao\" eh: " << primeiroNome[0] << endl; // Escolha o índice da sua string que deseja acessar e coloque ele entre colchetes logo após o nome da variável
	
	// Lembre-se que em linguagens de programação sempre começamos a acessar os índices pelo índice 0
	
	/*
	Também é possível receber uma string escrita pelo usuário. Podemos fazer isso usando o cin >>.
	Porém, imagino que você já tenha entendido que lidamos com muitos problemas ao trabalhar com strings, certo? Então vou pular de uma vez 
	a demonstração disso e te dizer que, ao usar o cin >>, ele não considera o que vem depois de um espaçamento, por exemplo. Para lidarmos com 
	esse problema temos o getline(), que recebe uma linha inteira, só parando ao receber um ENTER
	*/
	
	string mensagem;
	
	cout << "Digite sua mensagem: ";
	getline(cin, mensagem); // O getline irá receber a string de uma linha, só parando ao encontrar um ENTER. Ele recebe a maneira como o dado irá chegar (cin) e a variável onde vai ser armazenada a string
	
	cout << "Sua mensagem eh: " << mensagem << endl;
	
	//Nota: Lembre-se que não podemos receber caracteres especiais
	
	//Agora vem a cereja do bolo. Provavelmente o motivo de muitos entrarem aqui. A maneira de aceitar caracteres especiais na sua aplicação. Para isso:
	// - inclua a lib locale através do "#include<locale>" no topo da sua aplicação. logo abaixo do include da iostream
	// - Insira na sua main() o seguinte trecho de código:"
	
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	cout << "Pronto. Agora nossa aplicação recebe caracteres especiais sem problemas!!!" << endl;
		
	return 0;
}
