/* Feito por Guilherme Rezende e Daniel Alonso */

#include <iostream>
#include <math.h>

using namespace std;
int main ()
{	int temp, i, F, C;

	for (i =0; i <= 100; i++) {
		F = i;
		C = 5 *(F-32)/9;
		cout << F << "F = "<< C << "C" << endl;
	}

	return 0;
} 