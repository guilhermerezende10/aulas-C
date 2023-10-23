/*Feito por Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{ int n, i, r, resp;
	resp = 1;
	while (resp == 1) {
	cout << "Entre com o valor da tabuada: "; cin >> n;
	 	cout << endl;
	 	i = 1;
	 	while (i <= 10)
	 	{
	 		r = n * i;
	 		cout << setw(2) << n;
	 		cout << " x ";
	 		cout << setw(2) << i;
	 		cout << " = ";
	 		cout << setw(3) << r << endl;
	 		i++;
		 }	
		 cout << endl;
		 cout << "Deseja continuar ? " << endl;
		 cout << "Tecle [1] para sim " << endl;
		 cout << "Tecle [2] para não " << endl;
		 cin >> resp;
		 cout << endl;
	}
	 	
	
	system("pause");
}