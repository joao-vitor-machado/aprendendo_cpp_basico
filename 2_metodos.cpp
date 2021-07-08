#include<iostream>

using namespace std;

class Passarinho{
	public:
		string tipoDePena;
		string tipoDeBico;
		string cor;
		
	//Sabemos que um passarinho possui algumas características que podemos guardar em uma classe. No entanto, passarinhos também podem realizar ações, como voar e piar
	//Classes também podem conter métodos, que são funções pertencentes às classses
	
	void piar(){
		cout << "Piu piu" << endl;
	}
	
	void voar(){
		cout << "Voando" << endl;
	}
	
	int numeroDeAsas(int x){
		return x;
	}
	
	//Para deixar a classe um pouco mais limpa, podemos optar por declarar a função dentro da classe e definir essa função fora da classe
	
	void temPenas();
	 
};

void Passarinho::temPenas(){
	cout << "Um passarinho tem penas" << endl;
}


int main(){
	
	Passarinho passarinho;
	
	passarinho.piar();
	passarinho.voar();
	
	cout << "O numero de asas eh " << passarinho.numeroDeAsas(2) << endl;
	
	passarinho.temPenas();
	
	return 0;
}
