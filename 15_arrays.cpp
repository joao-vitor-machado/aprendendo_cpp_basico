#include<iostream>

using namespace std;

int main(){
	
	/* Arrays s�o estruturas que permitem que voc� aramzene v�rios valores de um mesmo tipo dentro de uma �nica vari�vel*/
	
	/*Declaramos os arrays como uma vari�vel normal, mas inserimos o n�mero de valores dentro de colchetes logo ap�s o nome quemos para a vari�vel. 
	Para definir os valores que ser�o atribu�dos aos arrays devemos inserir esses valroes dentro de chaves:
	*/
	
	int arrayDeInteiros[5] = {1, 2, 3, 4, 5}; // Note que apesar de sempre come�armos as listas pelo �ndice 0, nas declara��es n�s devemos mostrar o n�mero real de casas que ser�o usadas
	string arrayDeStrings[4] = {"Joao", "Vitor", "leite", "Machado"};
	
	//Tamb�m podemos acessar valores dentro de um array da mesma forma que acessamos em uma string. Afinal, uma strign � um array de char
	
	cout << arrayDeStrings[0] << endl;
	cout << arrayDeInteiros[4] << endl;
	
	//Geralmente os arryas est�o associados a loops, para podermos acessar todos os seus valores de forma simples:
	
	for(int x = 0; x < 8; ++x){
		cout << arrayDeStrings[x] << " ";
		
		//dessa forma, podemos usar os valores de x para percorrer o loop
		// Fique atento, se voc� tentar acessar um valor menor que 0, seu c�digo quebrar�
	}
	
	cout << endl;
	
	//Tamb�m podemos omitir a quantidade de elementos que um array ir� receber por�m, o tamanho do array se manter� igual � quantidade de elementos que receber em sua declara��o
	
	int arrayOmitido[] = {1, 2, 3, 4, 5};
	
	//Para aumentar o n�mero de elementos que esse array recebe, voc� dever� sobrescreve-lo
	
	int arrayOmitido[]  ={1, 2, 3, 4, 5, 6, 7, 8};
	
	return 0;
}
