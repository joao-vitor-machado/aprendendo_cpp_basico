#include<iostream>

using namespace std;

class Aluno{

	public:
		string nome;
		string RA;
		double CR;
		
	//Construtores são funções especiais que recebem o nome da classe em questão
	//As funções construtoras são chamadas todas as vezes que uma nova instância da classe é criada (objeto)
	//Funções construtoras podem receber argumentos também. No exemplo abaixo a função construtora é usada para definir os atributos de um objeto logo na sua criação
	
	//Função construtora:
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
	
	//Criação de um objeto
	Aluno aluno("Joao", "17234345", 8.95);// Como a função cosntrutora é chamada sempre que um objeto é instanciado, a criação desse objeto já deve fornecer os parametros para a função construtora
	
	aluno.printInformacoes();
	
	
	return 0;
}
