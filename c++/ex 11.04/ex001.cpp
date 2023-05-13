/*Feito por Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int n1, n2, result, oper;
	cout << "[1] Adicao" << endl;
	cout << "[2] Adicao" << endl;
	cout << "[3] Adicao" << endl;
	cout << "[4] Adicao" << endl;
	cout << "Qual tipo de operacao matematica voce deseja? " << endl;
	cin >>  oper;
	system("cls");
	cout << "Digite um numero da operacao: " << endl;
	cin >> n1;
	system("cls"); //  system("cls"); limpa a tela // "cls" == clear screen
	cout << "Digite o outro numero da operacao: " << endl;
	cin >> n2;
	system("cls");
	switch (oper)
	{
		case 1:
			result = n1 + n2;
			cout << n1 << " + " << n2 << " = " << result << endl;
			break;
		case 2:
			result = n1 - n2;
			cout << n1 << " - " << n2 << " = " << result << endl;
			break;
		case 3:
			result = n1 * n2;
			cout << n1 << " x " << n2 << " = " << result << endl;
			break;
		case 4:
			result = n1 / n2;
			cout << n1 << " / " << n2 << " = " << result << endl;
			break;
		default: 
			cout << "Resposta invalida. Tente novamente mais tarde." << endl;	
	
	}
	system("pause");		
}	

 
	