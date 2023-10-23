/*
Feito por Guilherme Rezende e Daniel Alonso
5- E1p que entra com a idade de várias pessoas. Exibir o total de pessoas com menos de 21 anos; e exibir o total de pessoas com mais de 50 anos. Obs: O programa não deve permitir idades <= 0 e >= 117.
*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int idade, i, jovens, veios;
	jovens = 0;
	veios = 0;
	for (i=1; i <= 10; i++) {
		cout << "Qual sua idade? "; cin >> idade;
	if (idade <= 0 || idade >= 117) {
		cout << "Essa idade e invalida" << endl;
	} else {
		if (idade < 21) {
			jovens++;
		}
		if (idade > 50) {
			veios++;
		}
	}
	}
	cout << "O total de pessoas com menos de 21 anos e: " << jovens << endl << "O total de pessoas com mais de 50 anos e: " << veios << endl;
	system("pause");
}
	