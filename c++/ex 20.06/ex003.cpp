/*
Feito por Guilherme Rezende e Daniel Alonso
3- E1p que só deixe entrar com exatamente 10 num positivos e exiba a raiz quadrada de cada num. Para cada entrada de dados deverá haver uma proteção para que o num negativo não seja aceito.
*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int i;
	float raizQ, num;
	for (i=1; i <= 10; i++)
	{
		cout << "Digite um numero: " << endl; cin >> num;
		while (num <= 0) {
		cout << "Numeros negativos nao sao aceitos."<< endl;
		cout << "Digite um numero: " << endl; cin >> num;
		}
		raizQ = sqrt(num);
		cout << "Raiz Quadrada: " << raizQ << endl;
		
		
		}
	system("pause");

}
	
	
	