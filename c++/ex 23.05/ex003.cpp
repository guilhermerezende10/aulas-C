/* Feito por Guilherme Rezende e Daniel Alonso */

#include <iostream>
#include <math.h>

using namespace std;
int main ()
{	int num, cont, i;
	cout << "Digite um numero (inteiro > 0): " << endl; cin >> num;
	cont=0;
	for (i=0; i <= num; i=i+5) {
		cont = cont + i;
		
	}
	cout << "A some entre os multiplos de 5 dentro do numero digitado e de: " << cont << endl;
	return 0;
} 