/*Feito por Guilherme Rezende e Daniel Alcatrão*/
/* 14.Construa um programa que leia vários números inteiros e mostre qual foi o maior e o menor valor  fornecido.  Para  cada  valor  digitado, deve ser  solicitado  ao  usuário  que  ele  digite  se  ele deseja continuar entrando com valores.*/
#include <iostream>
using namespace std;
int main ()
{ int num, i, maior, menor;
	maior = -999999;
	menor = 9999999;
	do
	{
		cout << "Informe um numero: " << endl; cin >> num;
		if (num > maior) 
		{
			maior = num;
		}
		if (num < menor) 
		{
			menor = num;
		}
		cout << "Deseja continuar? "<< endl;
		cout << "[1] CONTINUAR"<< endl;
		cout << "[2] TERMINAR E VER RESULTADOS"<< endl;
		cin >> i; 
	} while (i == 1);
	cout << "Maior: " << maior << endl;
	cout << "Menor: " << menor << endl;
	system("pause");
}