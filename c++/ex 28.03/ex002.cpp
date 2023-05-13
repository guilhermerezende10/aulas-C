/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int p, pt;
	cout << "Qual e o preco do produto? ";
	cin >> p;
	if (p < 200) {
		pt = p + (p * 0.45);
		
	}
	else {
		pt = p + (p * 0.3);
	}
	cout << "O valor do produto foi de: "<< p << endl << "E total da venda foi de: " << pt << endl;
	system("pause");
}