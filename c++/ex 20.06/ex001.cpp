/*
Feito por Guilherme Rezende e Daniel Alonso
1- Samuel tem 1,90m e cresce 2cm por ano, enquanto Amanda tem 1,50m e cresce 3cm por ano. E1p que calcule e exiba quantos anos serão nescessários para que Amanda seja maior que Samuel.
*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int  samuel, amanda, i;
	samuel = 190;
	amanda = 150;
	while (samuel >= amanda)
	{	
	samuel+=2;
	amanda+=3;
	i++;
	}
	cout << "Tempo necessario: " << i  << " anos"<< endl;
	system("pause");
}
