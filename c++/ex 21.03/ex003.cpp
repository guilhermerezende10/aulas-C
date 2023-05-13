/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int n1, iop;
	cout << "Digite um numero com 3 digitos (ex: 123): ";
	cin >> n1;
	iop = n1 / 100 % 2;
	if (iop == 0 ) 
	{
		cout << "Centena par" << endl;
	}
	else 
	{
		cout << "Centena impar" << endl;
	}
	system("pause");
}