/*Feito por Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>

using namespace std;
int main ()
{ int b, n, pot;
		cout << "digite a base (deve ser inteira e maior que 1): "; cin >> b;
		cout << "digite a potencia (deve ser inteira e menor ou igual a base): "; cin >> n;
		pot = pow (b, n);
		cout << b << " elevado a " << n << " resulta em: "<< pot << endl;
	system("pause");  
	
}
                                   