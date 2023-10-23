/*
Feito por Guilherme Rezende e Daniel Alonso
2- E1p que calcule o mmc entre 2 números lidos.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{int n1, n2, mmc;
 float div;
    cout << "Entre com um numero: " << endl; cin >> n1;
    cout << "Entre com outro numero: " << endl; cin >> n2;
    mmc = 0;
	while(mmc = 0) {
    	n1 = n1 + n1;
    	div = n1 % n2;
    	if (div = 0) {
    		mmc = n1;
		}
	}
	cout << "MMC = " << mmc << endl;
	system("pause");
}
