#include<iostream>

using namespace std;

class Aluno{
	int defaultPrivateInfo;

	private:
		string nome;
		string RA; // Atributos que não são classificados por uma palavra chave serão, por padrão, privados
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
	Descomente o código abaixo para receber um erro de permissão:
	
	aluno.nome = "Ricardo" << endl;
	
	isso acontece porque o atributo nome é classificado como privado, ou seja, só pode ser acessado dentro da classe através de métodos. Logo, se quisermos alterar o 
	nome do aluno devemos fazer isso através de um método. Você pode fazer isso utilizando o método setNome da sua classe
	
	Vale lembrar que por ser um atributo privado nós também não conseguiremos simplessmente printat ele usando o método cout. Para fazermos isso precisamos de um
	método que retorne o nome para nós, o getNome.
	
	Nota: é padrão utilizarmos set<atributo> para nomear métodos que alterem o atributo e get<atributo> para métodos que nos devolvam o valor do atriuto
	*/
	
	aluno.setNome("Ricardo");
	
	cout << "O novo nome eh " << aluno.getNome() << endl;
	
	/*
	Os atributos públicos, por outro lado, podem ser acessados e alterados a qualquer momento em toda parte do seu código
	*/
	
	aluno.publicInfo = 43;
	
	cout << "O atributo publico eh " << aluno.publicInfo << endl;
	
	/*
	Os atributos protegidos são atributos que só poderão ser acessados através da própria classe ou através de classes herdeiras. Ou seja, também precisamos de
	um get e um set para esse tipo de atributo, mas podemos fazer o mesmo acesso a partir de classes herdeiras (conceito que será visto em outro documento)
	*/
	
	cout << "O CR do aluno eh " << aluno.getCR() << endl;
	
	return 0;
}
