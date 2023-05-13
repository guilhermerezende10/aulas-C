#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float d, p, pd, pt;
	cout << "Qual e o preco do seu produto? ";
	cin >> p;
	cout << "Quanto e o desconto? (de 1% a 100%) ";
	cin >> d;
	pd = d / 100 * p;
	pt = p - pd;
	cout << "O preco com desconto de " << d <<  "% e de: " << pt << endl;
	system("pause");
	
}	