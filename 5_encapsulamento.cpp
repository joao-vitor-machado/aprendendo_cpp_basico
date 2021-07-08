#include<iostream>

using namespace std;

class Aluno{
		string name;
		string Ra;
		double Cr;
		
	public: //Não se esqueça de identificar as funções como públicas ou você não conseguirá acessá-las	
		void setName(string newName){
			name = newName;
		}
		
		void setRa(string newRa){
			Ra = newRa;
		}
		
		void setCr(double newCr){
			Cr = newCr;
		}
		
		
		string getName(){
			return name;
		}
		
		string getRa(){
			return Ra;
		}
		
		double getCr(){
			return Cr;
		}
	};

int main(){
	
	/*
	A ideia do encapsulamento é garantir que dados sensíveis estejam longe do alcance de usuários. Para fazermos isso devemos declarar
	nossos atributos como privados e, para o caso de querermos alterar ou ler os valores deles, devemos usar os getters ou setters 
	*/
	
	Aluno aluno;
	
	//O código abaixo retorna um erro de permissão uma vez que todo atributo que não contém um especificador de acesso explícito é definido como um atributo privado
	//aluno.name = "Joao";
	
	//Para fazermos a alteração do nome para Joao precisamos então usar o nosso setter
	aluno.setName("Joao");
	
	//Para acessar o valor, precisamos do nosso getter
	cout << "O nome do aluno eh " << aluno.getName() << endl;
	
	return 0;
}
