#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float b, h, a;
	cout << "Insira a base do triangulo: ";
	cin >> b;
	cout << "Insira a altura do triangulo: ";
	cin >> h;
	a = b * h / 2;
	cout << "A area do triangulo vale: " << a << endl;
	system("pause");
}