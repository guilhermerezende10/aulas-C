/* 
Aluno: Guilherme Rezende Silva
Enunciado: 18.Construa um algoritmo que leia o ano de nascimento de uma pessoa (AN) e mostre a sua idade  e,  também  verifique  e  mostre  se  essa  pessoa  já  tem  idade  para  votar  (16  anos ou mais) e se já pode conseguir a sua carteira de habilitação (18 anos ou mais).
*/
#include <stdio.h>              
#include <iostream>

using namespace std;
int main ()
{
  int AN, idade;	
	  cout << "Em que ano voce nasceu? " << endl; cin >> AN;
	  idade = 2023 - AN;
	  cout << "Voce tem " << idade << " anos" << endl;
	  if(idade >= 16) {
	  	cout << "Voce ja pode votar." << endl;
	  }
	  if (idade >= 18) {
	  	cout << "Voce ja pode tirar a carteira de habilitacao." << endl;
	  }
	  
  system("pause");
  return 0;
}