/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int SB, PR;
	cout << "Quanto e seu salario bruto? ";
	cin >> SB;
	cout << "Quanto custa cada prestacao da linha de credito?  ";
	cin >> PR;
	if (PR > (SB * 0.3))
	{ 
		cout << "O emprestimo nao pode ser concedido" << endl;
	}
	else 
	{
		cout << "O emprestimo sera concedido" << endl;
	}
	system("pause");
}