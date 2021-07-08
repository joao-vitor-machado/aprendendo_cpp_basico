#include<iostream>

using namespace std;

/*
Herança é um conceito utilizado para especificar as abstrações de classes. Imagine que você possui uma classe Pássaro que está sendo utilizada no seu código.
Agora, além de somente pássaros agora você possui um pato no seu código. Um pato é um pássaro, sem dúvidas, mas além de voar ele consegue nadar também.
Nós sabemos então que pato possui todas as características de um pássaro mais algumas só dele. Para reutilizarmos esse código já escrito para pássaro podemos fazer pato herdar a 
classe pássaro:
*/

class Passaro{
	public:
		string bico;
		int numAsas;
		int numPernas;
		bool voa;
		
};

class Pato: public Passaro{
	public:
		bool nada;
};

//Também é possível fazer uma herança de uma classe que já é herdeira de outra

class PatoDeGalochas: public Pato{
	public:
		
		string usoGalochas(){
			return "Eu uso galochas!!";
		}
};

//Além disso, também é possível criarmos uma herança multipla. Ou seja, podemos herdar de mais de uma classe ao mesmo tempo

class Azul{
	public:
		string euSouAzul(){
			return "Eu sou azul!!";
		}
};

class PatoDeGalochasAzul: public PatoDeGalochas, public Azul{
	
};
int main(){
	
	Pato pato;
	
	pato.bico = "amarelo";
	pato.numAsas = 2;
	pato.numPernas = 2;
	pato.nada = 1;
	pato.voa = 1;
	
	if(pato.voa && pato.nada){// Podemos omitir a comapração de booleanos. Se pato.voa == 1 pode ser só pato.voa
		cout << "Bico " << pato.bico << " com " << pato.numAsas << " asas e que sabe nadar e voar" << endl;
	}
	
	PatoDeGalochas patoGalochas;
	
	patoGalochas.numAsas = 2;
	patoGalochas.nada = 1;
	
	if(patoGalochas.nada)
		cout << "Ola, sou um pato que sabe nadar, tenho " << patoGalochas.numAsas << " asas e " << patoGalochas.usoGalochas() << endl;
		
	PatoDeGalochasAzul patoAzul;
	
	patoAzul.numAsas = 2;
	patoAzul.nada = 1;
	
	if(patoAzul.voa){
		cout << "Ola. Eu sou um pato que voa, tem " << patoAzul.numAsas << " asas, " << patoAzul.usoGalochas() << " e " << patoAzul.euSouAzul() << endl;
	}
	
	return 0;
}
