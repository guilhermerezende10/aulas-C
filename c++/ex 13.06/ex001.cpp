/*Feito por Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int  num, triplo;
	num = 0;
	while (num != -999)
	{
		cout << "Digite um numero: " << endl; cin >> num;
		triplo = num * 3;
		cout << "O triplo desse numero e: " << triplo << endl;
		cout << endl;
	}
	
	system("pause");
}