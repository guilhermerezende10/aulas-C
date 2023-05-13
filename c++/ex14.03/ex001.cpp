/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ float sh, htm, sal, inss;
	cout << "Quanto voce recebe por hora?";
	cin >> sh;
	cout << "Quantas horas voce trabalha por mes?";
	cin >> htm; 
	sal = htm * sh;
	inss = sal * 0.843;
	cout << "Seu salario liquido com desconto do inss e R$"<< inss << " por mes" << endl;
	system("pause");
}