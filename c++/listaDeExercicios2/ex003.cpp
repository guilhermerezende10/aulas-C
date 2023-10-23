/*Feito por Guilherme Rezende e Daniel Alcatrão*/
/*6.Construa um programa que apresente o valor de H, sendo H calculado por:H = 1 + 2 + 3 + 4 + ... N. O valor de N será apresentado pelo usuário.*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int H, N, i;
	cout << "Qual o valor de N? " << endl; cin >> N;
	H = N;
	for(i=1; i < N; i++)
	{
		H += i;
	}
	cout << "Soma: " << H << endl;
	system("pause");
}