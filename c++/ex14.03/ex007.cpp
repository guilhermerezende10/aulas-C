/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int d, l;
	cout << "Quantos lados tem seu poligono convexo? ";
	cin >> l;
	d = l * (l - 3) / 2;
	cout << "Seu poligono tem " << d << " diagonais" << endl ;
	system("pause");
}