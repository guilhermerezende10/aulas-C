#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float raio, p, a; 
	cout << "Entre com o raio do circulo: ";
	cin >> raio; 
	p = 2 * 3.14 * raio;
	a = 3.14 * pow(raio, 2);
	cout << "Valor do perimetro: " << p << endl;
	cout << "Valor da Area: " << a << endl;
	system("pause");
}