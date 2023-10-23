/*
Feito por Guilherme Rezende e Daniel Alonso
5- E1p que entra com a idade de várias pessoas. Exibir o total de pessoas com menos de 21 anos; e exibir o total de pessoas com mais de 50 anos. Obs: O programa não deve permitir idades <= 0 e >= 117.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{ int n, i, r, resp;
	do {
		cout << "Entre com o valor da tabuada: "; cin >> n;
		cout << endl;
		i = 1;
		do {
			r = n * i;
			cout << setw(2) << n;
			cout << "X";
			cout << setw(2) << i;
			cout << " = ";
			cout << setw(3) << r << endl;
			i++;
		}
		while (i <= 10);
		cout << endl;
		cout << "Deseja continuar? " << endl;
		cout << "Tecle [1] para sim / [2] para nao-> "; cin >> resp;
	}
	while (resp == 1);
}
	