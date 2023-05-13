/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int v, vg, g;
	cout << "Quanto foi o valor da sua conta sem a gorjeta? ";
	cin >> v;
	g = v * 0.1;
	vg = v + g;
	cout << "O valor da sua conta com a gorjeta do garcon inclusa e de " << vg << "%" << endl;
	system("pause");
}