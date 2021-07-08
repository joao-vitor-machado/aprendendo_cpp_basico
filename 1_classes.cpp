#include<iostream>

using namespace std;

/*
Classes são abstrações para elementos do seu projeto. Objetos são instanciações dessas abstrações.
*/

class minhaClasse { //Para definir uma classe, devemos usar a palavra chave "class" e o nome dessa classe vem em seguida
	
	public: // A palavra chave public define quais atributos da classe podem ser acessados por qualquer um. No entanto, isso será visto em outro arquivo
		string nome;
		int idade;
		string universidade;
};

int main(){
	
	minhaClasse eu; // Para criar uma instância da sua classe (um objeto) devemos escrever o nome da classe, que define o tipo da variável, e logo em seguida o nome da variável em si
	
	eu.nome = "Joao";// Para acessarmos um atributo do nosso objeto devemos escrever "<o nome do objeto>.<nome do atributo>"
	eu.idade = 18;
	eu.universidade = "UNICAMP";
	
	cout << "Meu nome eh " << eu.nome << ", tenho " << eu.idade << " anos e estudo na " << eu.universidade << endl;
	
	return 0;
}
