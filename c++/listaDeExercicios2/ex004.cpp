/*Feito por Guilherme Rezende e Daniel Alcatrão*/
/*8.Construa um programa que leia o conjunto de 20 números inteiros e mostre qual foi o maior valor fornecido. */
#include <math.h>
#include <iostream>
using namespace std;
int main ()
{ int num, i, maior;
	maior = -999999;
	for(i=1;i<=5;i++)
	{
		cout << "Informe um numero: " << endl; cin >> num;
		if (num > maior) 
		{
			maior = num;
		}
	}
	cout << "Maior: " << maior << endl;
	system("pause");
}