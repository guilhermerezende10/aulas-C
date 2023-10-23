/*
Feito por Guilherme Rezende e Daniel Alonso
4- E1p que leia vários num e apresente o fatorial de cada num. O programa se encerra quando o num digitado for menor que 1.
*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int i, fatorar, num, j;
	while (num > 1) {
		for (i=1; i <= 10; i++)
	{
		cout << "Digite um numero: " << endl; cin >> num;
		fatorar = 1;	
		for(j=1;j <= num; j++) {
			fatorar *= j;
		}
		cout << "Fatoracao: " << fatorar << endl;
		
		
		}
	}
	
	system("pause");

}
	
	
	