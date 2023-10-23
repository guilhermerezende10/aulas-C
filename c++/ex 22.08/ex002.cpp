/*Feito por Guilherme Rezende e Daniel Alonso*/
/*2- E1p que leia um conjunto de numeros inteiros, tendo cada um 10 e 20 elementos. Exiba apenas os elementos comuns aos conjuntos. Lembre-se de que elementos podem se repetir mas não podem aparecer repetidos na exibição.*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int i, j, c1[10], c2[20], comuns[10], n, k, l, m;	
	cout << "==========Conjunto 1==========" << endl;		
for (i=1;i<=10; i++)
{
	cout << "Informe um numero: " << endl; cin >> c1[i];
	
}
	cout << "==========Conjunto 2==========" << endl;
for (k=1;k<=20;k++) 
{
	cout << "Informe mais numeros: " << endl; cin >> c2[k];
}
n = 1;
for (l=1;l<=10;l++) 
{
	j = 1;
	for (j=1;j<=20;j++)
	{
		if (c1[l] == c2[j]) 
		{
			comuns[n] = c1[l];
			n++;
		}
		 
	}
}
	
	cout << endl;
	cout << "==========Numeros comuns:========== ";
	for (m=1;m<=n;m++)
	{
		cout << comuns[i] <<" " << endl;
	}


	system("pause");
}