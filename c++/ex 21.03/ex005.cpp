/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int an, aa, idade;
	cout << "Qual ano voce nasceu? ";
	cin >> an;
	aa = 2023;
	idade = aa - an;
	if (an > aa)
	{
		cout << "Esse ano nao e valido, tente novamente." << endl;
	}
	else 
	{
		cout << "Voce tem " << idade << " anos." << endl;
	}
	system("pause");
}