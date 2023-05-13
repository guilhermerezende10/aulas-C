/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int A, B, C, delta, r1, r2;
	cout << "Quanto vale A na equacao de segundo grau? ";
	cin >> A;
	cout << "Quanto vale B na equacao de segundo grau? ";
	cin >> B;
	cout << "Quanto vale C na equacao de segundo grau? ";
	cin >> C;
	if (A == 0) {
		cout << "A não pode ser 0, valor invalido pois nao e uma equacao de 2 grau.";
	}
	else {
		delta = pow(B, 2) - 4 * A * C;
		if (0 >= delta) {
			cout << "nao ha raizes reais" << endl;
		}
		else {
			delta = sqrt(delta);
			r1 = (-B + delta) / (2 * A);
			r2 = (-B - delta) / (2 * A);
			cout << "X1: " << r1 << endl;
			cout << "X2: " << r2 << endl;
	}}
	
	system("pause");
}