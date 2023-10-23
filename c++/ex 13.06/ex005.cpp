/*Feito por Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int  num, i, d;
	i = 1;
	while (i == 1)
	{
		cout << "Digite um numero: " << endl; cin >> num;
		for(d = 1; d <= num; d++) {
			if (num % d == 0) {
				cout << "O numero "<< num  << " e divisivel por: " << d << endl;
			}
		}
		cout<<endl;
		if ( num == -999) {
			i = num;
		}		
	}
	
	system("pause");
}
