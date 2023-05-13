#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float lado, p, a, dq, d;
	cout << "Entre com o lado do quadrado: ";
	cin >> lado;
	p = lado * 4;
	a = lado * lado;
	dq = pow(lado, 2) + pow(lado, 2);
	d = sqrt(dq);
	cout << "Valor do Perimetro: " << p << endl;
	cout << "Valor da Area: " << a << endl;
	cout << "Valor da Diagonal: " << d << endl;
	system("pause");
}