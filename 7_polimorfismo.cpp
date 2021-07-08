#include<iostream>

using namespace std;

//Polimorfismo significa "Várias formas". A idea de polimorfismo na orientação a objetos é permitir que um mesmo método seja implementado de outras formas em classes herdadas

class Passaro{
	public:
		void cantar(){
			cout << "fiu fiu\n" << endl;
		}
};

//Observe que as duas classes a seguir herdam Passaro e reimplementam o método cantar. Cada método desses, apesar de ser comum a todas as classes, executa uma tarefa diferente

class Galo: public Passaro{
	public:
		void cantar(){
			cout << "Cocorico\n" << endl;
		}
};

class Galinha: public Passaro{
	public:
		void cantar(){
			cout << "popopo\n" << endl;
		}
};

int main(){
	
	Passaro p;
	Galinha galinha;
	Galo galo;
	
	cout << "O passaro faz ";
	p.cantar();
	
	cout << "O galo faz ";
	galo.cantar();
	
	cout << "A galinha faz ";
	galinha.cantar();
	
	return 0;
}
