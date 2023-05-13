#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float b, h, p, a, d, dq; 
	cout << "Entre com a base: ";
	cin >> b;
	cout << "Entre com a altura: ";
	cin >> h;
	p = b * 2 + h * 2;
	a = b * h;	
	dq = pow(h, 2) + pow(b, 2);
	d = sqrt(dq);
	cout << "Valor do Perimetro: " << p << endl;
	cout << "Valor da Area: " << a << endl;
	cout << "Valor da Diagonal: " << d << endl;
	system("pause");
}