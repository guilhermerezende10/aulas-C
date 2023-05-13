/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int l1, l2, l3, a, b, c;
	cout << "Entre com o lado 1: ";
	cin >> l1;
	cout << "Entre com o lado 2: ";
	cin >> l2;
	cout << "Entre com o lado 3: ";
	cin >> l3;
	a = l1 + l2;
	b = l2 + l3;
	c = l1 + l3;
	 if (a > l3 && b > l1 && c > l2)
	 {
	 	cout << "forma um triangulo" << endl;
	 }
	  else {
	  	cout << "nao forma um triangulo" << endl;
	  }
	system("pause");
}