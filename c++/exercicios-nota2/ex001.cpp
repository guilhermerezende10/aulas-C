/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int l1, l2, l3, a, b, c, aux, maior, menor, intermediario;
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
	 	
	 	if (l1 > l2)
		{
		aux = l1;
		l1 = l2;
		l2 = aux;
		}
		
		if ( l1 > l3)
		{
		aux = l1;
		l1 = l3;
		l3 = aux;
		}
		
		if (l2 > l3)
		{
			aux = l2;
			l2 = l3;
			l3 = aux;
		}
		
		maior = l3;
		intermediario = l2;
		menor = l1;
		if (pow(menor, 2) + pow(intermediario, 2) == pow(maior, 2))	
		{
			cout << "Triangulo retangulo"<< endl;
		}
		if (pow(menor, 2) + pow(intermediario, 2) < pow(maior, 2))
	{
		cout << "O triangulo e um obtusangulo" << endl;
	}
		if (pow(menor, 2) + pow(intermediario, 2) > pow(maior, 2))
	{
		cout << "O triangulo e um acutangulo" << endl;
	}
	 } 
	  else {
	  	cout << "nao forma um triangulo" << endl;
	  }
	system("pause");
}