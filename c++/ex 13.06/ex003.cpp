/*Feito por Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int  num, contador, i;
  float media, soma;
	i = 1;
	soma = 0;
	while (i == 1)
	{
		cout << "Digite um numero: " << endl; cin >> num;
		soma += num;
		contador++;
		if (num < 0) {
			i++;
		}		
	}
	media = soma / contador;
	cout << " Media: " << media << endl;
	
	system("pause");
}