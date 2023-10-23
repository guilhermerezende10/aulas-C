/*
Feito por Guilherme Rezende e Daniel Alonso
3- E1p que calcule o mdc entre 2 números lidos.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{ int n1, n2, i, divisor1, divisor2;
    cout << "Entre com um numero: " << endl; cin >> n1;
    cout << "Entre com outro numero: " << endl; cin >> n2;
    i=2;
    do {
    	divisor1 = n1 / i;
    	divisor2 = n2 / i;
	 	i++;
	} while(divisor1 != divisor2);
		cout << "MDC = " << i << endl;
	system("pause");
}

