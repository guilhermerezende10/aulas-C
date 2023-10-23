/* 
Aluno: Guilherme Rezende Silva
Enunciado:12.Construa um algoritmo que receba a leitura do termômetro (T). Caso a temperatura esteja abaixo de 100ºC, apresentar a mensagem de que a temperatura está muito baixa. Caso a temperatura  esteja  entre  100ºC  e  200ºC  (inclusive),  apresentar  a  mensagem  de  que  a temperatura  está  baixa.  Caso  a  temperatura  esteja  acima  de  200ºC  e  inferior  a  500ºC, apresentar  a  mensagem  de  que  a  temperatura  está  normal.  Caso  contrário,  apresentar  a mensagem de que a temperatura está muito alta. 
*/
#include <stdio.h>              
#include <iostream>

using namespace std;
int main ()
{
  int T;
	cout << "qual e a temperatura? " << endl; cin >> T;
	if (T<100) {
		cout << "A temperatura esta muito baixa." << endl;
	}
	else if (T>100 && T<200) {
		cout << "A temperatura esta baixa." << endl;
	}
	else if (T>200 && T<500) {
		cout << "A temperatura esta normal." << endl;
	}
	else {
		cout << "A TEMPERATURA ESTA MUITO ALTA." << endl;
	}
	  
  system("pause");
  return 0;
}