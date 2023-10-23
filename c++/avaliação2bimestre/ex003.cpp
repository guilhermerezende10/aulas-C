/*Feito por Guilherme Rezende e Daniel Alonso*/
/*3- e1p que entre com 10 num (positivo ou negativo). Exibir o maior num e o menor num da lista.
*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int numAtual, i, maior, menor; 
	maior = 0;
	menor = 999999999;
	for(i=0; i<=10;i++)
	{
		cout << "Entre com o numero: " << endl; cin >> numAtual;
		if(numAtual > maior)
		{
			maior = numAtual;
		}
		if(numAtual < menor)
		{
			menor = numAtual;
		}
	}
    cout << "maior numero: " << maior << endl;
    cout << "menor numero: " << menor << endl;
	system("pause");
}