/*Feito por Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int multiplicando , multiplicador, soma, i;
	cout << "Entre com o multiplicador: " << endl; cin >> multiplicador;
	cout << "Entre com o multiplicando: " << endl; cin >> multiplicando;
	soma = 0;
	for(i = 0; i < multiplicador; i++)
	{
		soma += multiplicando;
	}
	cout << "O produto desses numeros e: " << soma << endl;
	system("pause");
}