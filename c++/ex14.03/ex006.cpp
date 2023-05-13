/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int horario, min;
	cout << "Que horas sao? (14h20 seria 1420, escreva dessa forma)";
	cin >> horario;
	min = (horario / 100) * 60 + (horario % 100) ;
	cout << "Passaram-se " << min << " minutos no seu dia" << endl;
	system("pause");
	return 0;
}
