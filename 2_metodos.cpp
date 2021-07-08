#include<iostream>

using namespace std;

class Passarinho{
	public:
		string tipoDePena;
		string tipoDeBico;
		string cor;
		
	//Sabemos que um passarinho possui algumas caracter�sticas que podemos guardar em uma classe. No entanto, passarinhos tamb�m podem realizar a��es, como voar e piar
	//Classes tamb�m podem conter m�todos, que s�o fun��es pertencentes �s classses
	
	void piar(){
		cout << "Piu piu" << endl;
	}
	
	void voar(){
		cout << "Voando" << endl;
	}
	
	int numeroDeAsas(int x){
		return x;
	}
	
	//Para deixar a classe um pouco mais limpa, podemos optar por declarar a fun��o dentro da classe e definir essa fun��o fora da classe
	
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
