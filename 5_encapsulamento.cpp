#include<iostream>

using namespace std;

class Aluno{
		string name;
		string Ra;
		double Cr;
		
	public: //N�o se esque�a de identificar as fun��es como p�blicas ou voc� n�o conseguir� acess�-las	
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
	A ideia do encapsulamento � garantir que dados sens�veis estejam longe do alcance de usu�rios. Para fazermos isso devemos declarar
	nossos atributos como privados e, para o caso de querermos alterar ou ler os valores deles, devemos usar os getters ou setters 
	*/
	
	Aluno aluno;
	
	//O c�digo abaixo retorna um erro de permiss�o uma vez que todo atributo que n�o cont�m um especificador de acesso expl�cito � definido como um atributo privado
	//aluno.name = "Joao";
	
	//Para fazermos a altera��o do nome para Joao precisamos ent�o usar o nosso setter
	aluno.setName("Joao");
	
	//Para acessar o valor, precisamos do nosso getter
	cout << "O nome do aluno eh " << aluno.getName() << endl;
	
	return 0;
}
