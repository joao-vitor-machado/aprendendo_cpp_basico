#include<iostream>

using namespace std;

int main(){
	
	/* Arrays são estruturas que permitem que você aramzene vários valores de um mesmo tipo dentro de uma única variável*/
	
	/*Declaramos os arrays como uma variável normal, mas inserimos o número de valores dentro de colchetes logo após o nome quemos para a variável. 
	Para definir os valores que serão atribuídos aos arrays devemos inserir esses valroes dentro de chaves:
	*/
	
	int arrayDeInteiros[5] = {1, 2, 3, 4, 5}; // Note que apesar de sempre começarmos as listas pelo índice 0, nas declarações nós devemos mostrar o número real de casas que serão usadas
	string arrayDeStrings[4] = {"Joao", "Vitor", "leite", "Machado"};
	
	//Também podemos acessar valores dentro de um array da mesma forma que acessamos em uma string. Afinal, uma strign é um array de char
	
	cout << arrayDeStrings[0] << endl;
	cout << arrayDeInteiros[4] << endl;
	
	//Geralmente os arryas estão associados a loops, para podermos acessar todos os seus valores de forma simples:
	
	for(int x = 0; x < 8; ++x){
		cout << arrayDeStrings[x] << " ";
		
		//dessa forma, podemos usar os valores de x para percorrer o loop
		// Fique atento, se você tentar acessar um valor menor que 0, seu código quebrará
	}
	
	cout << endl;
	
	//Também podemos omitir a quantidade de elementos que um array irá receber porém, o tamanho do array se manterá igual à quantidade de elementos que receber em sua declaração
	
	int arrayOmitido[] = {1, 2, 3, 4, 5};
	
	//Para aumentar o número de elementos que esse array recebe, você deverá sobrescreve-lo
	
	int arrayOmitido[]  ={1, 2, 3, 4, 5, 6, 7, 8};
	
	return 0;
}
