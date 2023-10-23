/*Feito por Guilherme Rezende e Daniel Alonso*/

/*1- e1p que apresenta o código, a qtd, o valorCompra e valorDeVenda de 30 produtos. Exibir a lista de todos os produtos.*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int cod[30], qtd[30], valorCompra[30], valorVenda[30], i, produto;
	
	for(i=1;i<=30;i++) 
	{
		cout << "==========Produto " << i << "==========" << endl;
		cout << "Qual e o codigo do produto? " << endl; cin >> cod[i];
		cout << "Qual a quantidade do produto? " << endl; cin >> qtd[i];
		cout << "Qual e o valor de compra do produto? " << endl; cin >> valorCompra[i];
		cout << "Qual e o valor de venda do produto? " << endl; cin >> valorVenda[i];
		cout << endl;
	 }
	
	
	for (i=1;i<=30; i++)
	{
		cout << "==========Produto " << i << "==========" << endl;
		cout << "Codigo: " << cod[i] << endl;
		cout << "Quantidade: " << qtd[i] << endl;
		cout << "Valor de compra: " << valorCompra[i] << endl;
		cout << "Valor de venda: " << valorVenda[i] << endl;
		cout << endl;
		}	

	system("pause");
}