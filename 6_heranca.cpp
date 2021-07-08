#include<iostream>

using namespace std;

/*
Heran�a � um conceito utilizado para especificar as abstra��es de classes. Imagine que voc� possui uma classe P�ssaro que est� sendo utilizada no seu c�digo.
Agora, al�m de somente p�ssaros agora voc� possui um pato no seu c�digo. Um pato � um p�ssaro, sem d�vidas, mas al�m de voar ele consegue nadar tamb�m.
N�s sabemos ent�o que pato possui todas as caracter�sticas de um p�ssaro mais algumas s� dele. Para reutilizarmos esse c�digo j� escrito para p�ssaro podemos fazer pato herdar a 
classe p�ssaro:
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

//Tamb�m � poss�vel fazer uma heran�a de uma classe que j� � herdeira de outra

class PatoDeGalochas: public Pato{
	public:
		
		string usoGalochas(){
			return "Eu uso galochas!!";
		}
};

//Al�m disso, tamb�m � poss�vel criarmos uma heran�a multipla. Ou seja, podemos herdar de mais de uma classe ao mesmo tempo

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
	
	if(pato.voa && pato.nada){// Podemos omitir a comapra��o de booleanos. Se pato.voa == 1 pode ser s� pato.voa
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
