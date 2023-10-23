/*Feito por Guilherme Rezende e Daniel Alonso*/
/*3- E1p que leia vários num inteiros e positivos. O programa se encerra quando encontrado um número negativo, ou quando o vetor ficar completo. Sabendo-se que o vetor possui, no máximo 10 elementos. Gerar e exibir um vetor onde cada elemento é o inverso do correspondente do vetor original.*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int i;
	float num[10], numb[10];
	i = 0;
	while (num[i] >= 0 && i < 11)	
	{
		i++;
		cout<< "Entre com o numero: "; cin >> num[i];
		numb[i] = 1 / num[i];
		cout << "Numero inverso: " << numb[i] << endl;
	}

	system("pause");
}