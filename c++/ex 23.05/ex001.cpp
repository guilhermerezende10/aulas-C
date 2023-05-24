/* Feito por Guilherme Rezende e Daniel Alonso */

#include <iostream>
#include <math.h>

using namespace std;
int main ()
{	int pol;
	float cm;	
	pol = 0;
	for (pol =0; pol <= 10; pol++) {
		cm = 2.54 * pol;
		cout << pol << "pol = "<< cm << "cm" << endl;
	}
	
	
}