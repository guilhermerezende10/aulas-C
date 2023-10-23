/*Feito por Guilherme Rezende e Daniel Alcatrão*/
/*16.Anacleto tem 1,50m e cresce 2 centímetros por ano, enquanto Felisberto tem 1,10 e cresce 3 centímetros  por  ano.  Construa  um  programa  que  calcule  e  apresente  quantos  anos  serão necessários para que Felisberto seja maior que Anacleto. */
#include <math.h>
#include <iostream>
using namespace std;
int main ()
{ int  anacleto, felisberto, i;
	anacleto = 150;
	felisberto = 110;
	while (anacleto >= felisberto)
	{	
	anacleto+=2;
	felisberto+=3;
	i++;
	}
	cout << "Tempo necessario: " << i  << " anos"<< endl;
	system("pause");
}