/*Feito por Guilherme Rezende e Daniel Alcatrão*/
/*12.Construa  um  programa  que  leia  vários  números  inteiros  e  mostre  qual  foi  o  maior  valor fornecido.  O  final  da  lista  de  produtos  será  indicado  quando  o  usuário  entrar  com  um  valor negativo(esse valor não deve fazer parte da comparação de valores). */
#include <math.h>
#include <iostream>
using namespace std;
int main ()
{ int num, i, maior;
	maior = -999999;
	do
	{
		cout << "Informe um numero: " << endl; cin >> num;
		if (num > maior) 
		{
			maior = num;
		}
	} while (num >= 0);
	cout << "Maior: " << maior << endl;
	system("pause");
}