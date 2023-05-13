#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float a, b, c, dq, d;
	cout << "Entre com o lado A do paralelepipedo: ";
	cin >> a;
	cout << "Entre com o lado B do paralelepipedo: ";
	cin >> b;
	cout << "Entre com o lado C do paralelepipedo: ";
	cin >> c;
	dq = pow(a, 2) + pow(b, 2) + pow(c, 2);
	d = sqrt(dq);
	cout << "Valor da Diagonal: " << d << endl;
	system("pause");
}