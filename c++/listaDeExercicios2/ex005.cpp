/*Feito por Guilherme Rezende e Daniel Alcatrão*/
/*10.Construa um programa que leia a quantidade (Q) e o preço (PR) de vários produtos diferentes, comprados  por  uma  empresa,  e  apresente  o  total  gasto  por  ela.  O  final  da  lista  de  produtos deverá ser indicado pelo usuário(escolha a maneira que preferir).
OBS:Não se  esqueça  de  validar  a  entrada  dos  valores,  pois  não  são  aceitas  quantidades negativas, nem preços negativos. */
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int Q, PR, total, i, mult;
	total = 0;
	i = 1;
	while(i==1)
	{
		do{
		cout << "Qual e a quantidade do produto? " << endl; cin >> Q;		
		}while(Q<0); 
		do{
		cout << "Qual e a preco do produto? " << endl; cin >> PR;	
		}while(PR<0);
				
		mult = PR * Q;
		total+= mult;
		cout << "Deseja continuar? "<< endl;
		cout << "[1] CONTINUAR"<< endl;
		cout << "[2] TERMINAR E VER TOTAL"<< endl;
		cin >> i; 
	}
	
	cout << "Preco total: " << total << endl;
	system("pause");
}