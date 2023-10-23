/*Feito por Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>

using namespace std;
int main ()
{ int r, n, i;
	cout << "entre com o valor da tabuada: "; cin >> n;
	for (i=1; i <= 10; i++)
	{
	r = n * i;
	cout << n;
	cout << " x ";
	cout << i;
	cout << " = ";
	cout << r << endl;		
	}	
	system("pause");
	return 0;
}