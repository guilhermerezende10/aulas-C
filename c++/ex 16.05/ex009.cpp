/*Feito por Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>

using namespace std;
int main ()
{ int i, s;
	s = 0;
	for (i=1; i <= 100; i++)
	{
		cout << i<< endl;
		s = s+ i;
		
	}
	cout << "A soma de todos os numeros e: " << s << endl;
	

	system("pause");
	return 0;
}