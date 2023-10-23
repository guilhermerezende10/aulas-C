/*Feito por Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int  num, positivos;
	num = 1;
	while (num > 0)
	{
		cout << "Digite um numero: " << endl; cin >> num;
		if (num > 0) {
			positivos++;
		}	
	}
	cout << "foram digitados " << positivos << " numeros positivos."<< endl;
	
	system("pause");
}