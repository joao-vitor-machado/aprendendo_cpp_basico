#include<iostream>

using namespace std;

class Aluno{
	int defaultPrivateInfo;

	private:
		string nome;
		string RA; // Atributos que n�o s�o classificados por uma palavra chave ser�o, por padr�o, privados
	protected:
		double CR;
	public:
		int publicInfo; 
		
		Aluno(int privateInfo = 3, string nome = "", string RA = "", double cr  = 0, int publicInfo = 2){
			defaultPrivateInfo = privateInfo;
			nome = nome;
			RA = RA;
			CR = cr;
			publicInfo = publicInfo;
		}
		
		void setNome(string nomeNovo){
			nome = nomeNovo;
		}
		
		string getNome(){
			return nome;
		}
	
		double getCR(){
			return CR;
		}	
		
};

int main(){
	
	Aluno aluno(2, "joao", "1231234", 8.95, 6);
	
	/*
	Descomente o c�digo abaixo para receber um erro de permiss�o:
	
	aluno.nome = "Ricardo" << endl;
	
	isso acontece porque o atributo nome � classificado como privado, ou seja, s� pode ser acessado dentro da classe atrav�s de m�todos. Logo, se quisermos alterar o 
	nome do aluno devemos fazer isso atrav�s de um m�todo. Voc� pode fazer isso utilizando o m�todo setNome da sua classe
	
	Vale lembrar que por ser um atributo privado n�s tamb�m n�o conseguiremos simplessmente printat ele usando o m�todo cout. Para fazermos isso precisamos de um
	m�todo que retorne o nome para n�s, o getNome.
	
	Nota: � padr�o utilizarmos set<atributo> para nomear m�todos que alterem o atributo e get<atributo> para m�todos que nos devolvam o valor do atriuto
	*/
	
	aluno.setNome("Ricardo");
	
	cout << "O novo nome eh " << aluno.getNome() << endl;
	
	/*
	Os atributos p�blicos, por outro lado, podem ser acessados e alterados a qualquer momento em toda parte do seu c�digo
	*/
	
	aluno.publicInfo = 43;
	
	cout << "O atributo publico eh " << aluno.publicInfo << endl;
	
	/*
	Os atributos protegidos s�o atributos que s� poder�o ser acessados atrav�s da pr�pria classe ou atrav�s de classes herdeiras. Ou seja, tamb�m precisamos de
	um get e um set para esse tipo de atributo, mas podemos fazer o mesmo acesso a partir de classes herdeiras (conceito que ser� visto em outro documento)
	*/
	
	cout << "O CR do aluno eh " << aluno.getCR() << endl;
	
	return 0;
}
