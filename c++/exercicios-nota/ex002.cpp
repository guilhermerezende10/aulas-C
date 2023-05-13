#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float l, c, a, p;
	cout << "Quanto vale a largura  da sala? ";
	cin >> l;
	cout << "Quanto vale o comprimento da sala? ";
	cin >> c;
	a = l * c;
	p = c * 2 + l * 2;
	cout << "A area vale " << a << endl;
	cout << "O perimetro vale " << p << endl;
	system("pause");
}