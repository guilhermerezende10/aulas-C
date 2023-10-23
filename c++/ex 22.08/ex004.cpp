/*Feito por Guilherme Rezende e Daniel Alonso*/
/*4- E1p que leia dados para um vetor de 100 elementos inteiros. Exibir o maior e o menor sem ordenar, o percentual de números pares e a média dos elementos do vetor.*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int c1[100], mai,men,par, i, j;

	for (j=1;j<=100;j++) {
		cout << "Digite um numero" << endl; cin >> c1[j];
	}
	par = 0;
	mai = c1[1];
	men = c1[1];
	for(i=1;i<=100 ;i++)
	{
		if (c1[i] > mai)
		{
			mai = c1[i];
		}
		
		if (c1[i] < men)
		{
			men = c1[i];
		}
		
		if(c1[i] % 2 == 0)
		{
			par++;
		}
		
	}

		cout << "=========Maior: " << mai << endl;
		cout << "=========Menor: " << men << endl;
		cout << "=========Pares:" << par << "%" << endl;
	system("pause");
}