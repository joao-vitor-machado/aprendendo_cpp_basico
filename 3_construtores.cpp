#include<iostream>

using namespace std;

class Aluno{

	public:
		string nome;
		string RA;
		double CR;
		
	//Construtores s�o fun��es especiais que recebem o nome da classe em quest�o
	//As fun��es construtoras s�o chamadas todas as vezes que uma nova inst�ncia da classe � criada (objeto)
	//Fun��es construtoras podem receber argumentos tamb�m. No exemplo abaixo a fun��o construtora � usada para definir os atributos de um objeto logo na sua cria��o
	
	//Fun��o construtora:
	Aluno(string nomeA, string Ra, double Cr){
		nome = nomeA;
		RA = Ra;
		CR = Cr;
	}
	
	void printInformacoes(){
		cout << "O Aluno " << nome << " de RA " << RA << " possui um CR de " << CR << endl;
	}

};


int main(){
	
	//Cria��o de um objeto
	Aluno aluno("Joao", "17234345", 8.95);// Como a fun��o cosntrutora � chamada sempre que um objeto � instanciado, a cria��o desse objeto j� deve fornecer os parametros para a fun��o construtora
	
	aluno.printInformacoes();
	
	
	return 0;
}
