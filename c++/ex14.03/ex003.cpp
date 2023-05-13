/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ float p, v, t, taxa;
	cout << "Qual e o valor do seu produto?";
	cin >> v;
	cout << "Quanto tempo esta atrasado em meses?";
	cin >> t;
	cout << "Quanto e sua taxa? ";
	cin >> taxa;
	p = v + (v * (taxa/100) * t);
	cout << "O valor da sua prestacao e de: R$" << p << endl;
	system("pause");
}