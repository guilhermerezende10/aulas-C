#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float d, p, pd;
	cout << "Qual e o preco do seu produto? ";
	cin >> p;
	d = p * 0.05;
	pd = p - d;
	cout << "O preco com desconto de 5% e de: " << pd << endl;
	system("pause");
}	