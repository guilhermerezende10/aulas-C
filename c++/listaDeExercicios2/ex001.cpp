/*Feito por Guilherme Rezende e Daniel Alcatrão*/
/*2.Construa  um  programa  que  leia  a  quantidade  (Q)  e  o  preço  (PR)  de  45  produtos  diferentes, comprados por uma empresa, e apresente o total gasto por ela. */
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int Q, PR, total, i, mult;
	total = 0;
	for(i=1;i<=45;i++)
	{
		cout << "Qual e a quantidade do produto? " << endl; cin >> Q;
		cout << "Qual e a preco do produto? " << endl; cin >> PR;
		mult = PR * Q;
		total+= mult;
	}
	cout << "Preco total: " << total << endl;
	system("pause");
}