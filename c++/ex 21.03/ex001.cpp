/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int n1, n2, r;
	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite outro numero: ";
	cin >> n2;
	r = n1 + n2;
	if (r > 20)
	{
		cout << "A sua soma +8 resulta em "<< r + 8 << endl;
	}
	else
	{
		cout << "A sua soma -5 resulta em "<< r - 5 << endl;
	}
	system("pause");
}