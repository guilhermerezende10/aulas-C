/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int n1, iop;
	cout << "Digite um numero com 4 digitos (ex: 1234): ";
	cin >> n1;
	iop = n1 / 100 % 4;
	if (iop == 0 ) 
	{
		cout << "divisivel por 4" << endl;
	}
	else 
	{
		cout << "nao divisivel por 4" << endl;
	}
	system("pause");
}