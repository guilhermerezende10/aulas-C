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
		cout << "Os numeros em ordem decrescente sao " << n1 << " e "<< n2 << endl;
	}
	else 
	{
		cout << "Os numeros em ordem decrescente sao " << n2 << " e "<< n1 << endl;
	}
	system("pause");
}