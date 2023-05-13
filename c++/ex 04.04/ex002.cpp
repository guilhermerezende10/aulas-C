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
	 		if (l1 != l2 && l1 != l3 && l2 != l3)
	  	{
	  		cout << "O triangulo e escaleno" << endl;
	  	}
	  	if (l1 == l2 && l2 == l3)
	  	{
	  	cout << "o triangulo e equilatero" << endl;
	  	}
	  	if (l1 == l2 && l1 != l3 || l1 == l3 && l1 != l2 || l2 == l3 && l2 != l1)   
	  	{
	  		cout << "O triangulo e isosceles" << endl;
		  }
	 	}
	  else {
	  	cout << "nao forma um triangulo" << endl;
	  }
	  
	system("pause");
}