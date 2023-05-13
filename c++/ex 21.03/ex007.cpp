/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int n1, n2;
	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite um numero diferente: ";
	cin >> n2;
	if (n1 > n2)
	{
		cout << "O " << n1 << " e o maior entre os dois" << endl;
	}
	else 
	{
		cout << "O " << n2 << " e o maior entre os dois" << endl;
	}
	system("pause");
}