/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int datat, dia, mes, ano;
	cout << "Digite uma data (ex: 05042023): ";
	cin >> datat;
	ano = datat % 10000;
	dia = datat / 1000000;
	mes = datat % 100000 / 10000;
		if (ano > 2023 || ano < 0 || mes > 12 || mes < 1 || dia < 1 || dia > 31)
		{
			cout << "A data esta errada, tente novamente" << endl; 
		}
			
			
		else {
				if (mes == 2 && dia > 29 ||mes == 4 && dia > 30 || mes == 6 && dia > 30 || mes == 9 && dia > 30 || mes == 11 && dia > 30)
					{
					cout << "esse mes nao tem mais que 30 dias, tente novamente." << endl;
					}
				else {
					if (ano % 4 == 0 && mes == 2 && dia == 29) {
						cout << "Data ta certinha, achou que so porque e 29 de fevereiro num ano bissexto ia dar errado ne?" << endl;
					} 
				else {
					cout << "Data certa" << endl;
					}
			}
		
	}system("pause");
	}
	

	
