/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int RM;
  float nota1, nota2, med;
	cout << "Qual seu RM? ";
	cin >> RM;
	cout << "Qual foi sua nota na primeira prova? ";
	cin >> nota1;
	cout << "Qual foi sua nota na segunda prova? ";
	cin >> nota2;
	med = (nota1 + nota2) /2;
	if (med >= 7 )
	{
		cout << "Seu RM e " << RM << endl;
		cout << "sua nota na prova 1 foi " << nota1 << endl;
		cout << "sua nota na prova 2 foi " << nota2 << endl;
		cout << "a sua media de notas foi " << med << "." << endl;
		cout << "APROVADO" << endl;
	}
	else if (med < 7 && med >= 3)
	{
		cout << "Seu RM e " << RM << endl;
		cout << "sua nota na prova 1 foi " << nota1 << endl;
		cout << "sua nota na prova 2 foi " << nota2 << endl;
		cout << "a sua media de notas foi " << med << "." << endl;
		cout << "EM PROVA FINAL" << endl;
	}
		
	else {
		cout << "Seu RM e " << RM << endl;
		cout << "sua nota na prova 1 foi " << nota1 << endl;
		cout << "sua nota na prova 2 foi " << nota2 << endl;
		cout << "a sua media de notas foi " << med << "." << endl;
		cout << "REPROVADO" << endl;
	}
	
	system("pause");
}