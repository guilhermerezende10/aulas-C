/*
Feito por Guilherme Rezende e Daniel Alonso
1- E1p em que o usuário entra com vários números e exibe o quadrado de cada número até que apareça um número múltiplo de 6, aparecendo esse número, exiba o quadrado dele também e saia do programa.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{ int num, quad;
  float mult;
    num = 1;
	do  {
		cout << "Entre com um numero: " << endl; cin >> num;
		mult = num % 6;
		quad = num * num;
		cout << "O quadrado de " << num << " e: " << quad << endl;
	} while(mult != 0);
}