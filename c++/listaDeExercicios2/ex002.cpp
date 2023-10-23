/*Feito por Guilherme Rezende e Daniel Alcatrão*/
/*4.Construa um programa que leia o número de horas trabalhadas diárias (NH) de um funcionário por  um  período  de  30  dias (ele  trabalhou  todos  os 30  dias) e  apresente  o  salário  bruto recebido por ele nesse período, sabendo que o valor do salário é R$ 10,00/hora trabalhada. */
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int NH, bruto, i, salario;
	bruto = 0;
	for(i=1; i<=30; i++)
	{
		cout << "Entre com o numero de horas trabalhadas diarias: " << endl; cin >> NH;
		bruto += NH * 10;
	}
	cout << "Salario bruto: " << bruto << endl;
	system("pause");
}