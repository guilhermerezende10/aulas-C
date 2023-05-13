#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float a, d1, d2;
	cout << "Insira a diagonal 1 do losango: ";
	cin >> d1;
	cout << "Insira a diagonal 2 do losango: ";
	cin >> d2;
	a = d1 * d2 / 2;
	cout << "A area do losango vale: " << a << endl;

	system("pause");
}