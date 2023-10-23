/*Feito por Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>

using namespace std;
int main ()
{ int i, n;
		for (int i=0; i <= 15; i++)
	{
		cout << "digite um numero: "; cin >> n;
		if (n > 0) {
			cout << "a raiz quadrada do numero e: " << sqrt(n) << endl;
		}
		else {
			cout << "numeros negativos ou 0 nao sao permitidos." << endl;
		}
		}
	system("pause");  
	
}
      