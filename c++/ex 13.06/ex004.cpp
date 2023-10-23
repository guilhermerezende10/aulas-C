/*Feito por Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int  num, i, naLista;
	i = 1;
	naLista = 0;
	while (i == 1)
	{
		cout << "Digite um numero: " << endl; cin >> num;
		if (num > 99 && num < 201) {
			naLista++;
		}
		if ( num == 0) {
			i = num;
		}		
	}
	cout << " Entre 100 e 200: " << naLista << endl;
	
	system("pause");
}
