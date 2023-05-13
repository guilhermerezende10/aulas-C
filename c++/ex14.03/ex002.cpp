/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int vm, d, t, v, lu;
	cout << "Quanto tempo demorou sua viagem?";
	cin >> t;
	cout << "Qual foi a media de velocidade percorrida?";
	cin >> v;
	d = v * t;
	lu = d / 12;
	cout << "Voce percorreu "<< d << "km e gastou aproximadamente " << lu << "L de combustivel" << endl;
	system("pause");
}