/* 
	Aluno: Guilherme Rezende Silva
	Enunciado: 2-Construa um algoritmo que leia o valor de uma conta de luz (CL) e, caso o valor seja maior que R$ 50,00 apresente a mensagem: “Você está gastando muito”. Caso contrário exiba a mensagem: “Seu gasto foi normal”.

*/

#include <iostream>
#include <math.h>

using namespace std;
int main ()
{	int CL;
	cout << "Quanto e sua conta de luz?" << endl; cin >> CL;	
	if (CL > 50) {
	cout << "Voce esta gastando muito" << endl; 
	}
	else {
		cout << "Seu gasto foi normal" << endl;
	}
	return 0;
}