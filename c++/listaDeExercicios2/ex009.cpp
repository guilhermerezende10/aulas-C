/*Feito por Guilherme Rezende e Daniel Alcatrão*/
/*18.Construa  um  programa  que  apresente  a  tabuada  de  um  número  N.  O  valor  de  N  será apresentado pelo usuário. */
#include <iostream>
using namespace std;
int main ()
{ int N, i, result;
	cout << "Informe o valor de N: "; cin >> N;
	for(i=1; i<=10; i++)
	{
	result = N * i;
	cout << N <<" x " << i << " = "	<< result << endl;
	}
	N
	system("pause");
}