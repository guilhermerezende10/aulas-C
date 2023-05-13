#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float c1, c2, hq, h;
	cout << "Insira o valor do cateto oposto do triangulo retangulo: ";
	cin >> c1;
	cout << "Insira o valor do cateto adjacente do triangulo retangulo: ";
	cin >> c2;
	hq = pow(c1, 2) + pow(c2, 2);
	h = sqrt(hq);
	cout << "A hipotenusa vale: " << h << endl;


	system("pause");
}