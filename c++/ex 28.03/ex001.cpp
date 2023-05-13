/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int sb, d;
	cout << "Qual e o seu salario bruto? ";
	cin >> sb;
	if (sb <= 1200) {
		cout << "Voce esta isento de descontos." << endl;

	}
	else {
	if (sb <= 1800) {
		d = sb - (sb * 0.2);
		cout << "Seu salario com desconto e de: " << d << endl;
	}
	else {
		if (sb <= 3000) {
			d = sb - (sb * 0.25);
			cout << "Seu salario com desconto e de: " << d << endl;
		}
		else {
			if (sb >3000) {
				d = sb - (sb * 0.3);
				cout << "Seu salario com desconto e de: " << d << endl;
			}
		}
	}
	
	}
	
	system("pause");
}