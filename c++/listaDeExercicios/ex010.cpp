/* 
Aluno: Guilherme Rezende Silva
Enunciado:10.Construa um algoritmo que leia dois números (A e B). Caso A seja igual a B, apresentar a soma  dos  dois.  Caso  um  seja  maior  que  o  outro,  apresentar  a  diferença  entre  os  dois números (sempre lembrando que a diferença entre dois números é SEMPRE positiva).
*/
#include <stdio.h>              
#include <iostream>

using namespace std;
int main ()
{
  int a,b, conta;
	  cout << "Entre com o numero de A: " << endl; cin >> a;
	  cout << "Entre com o numero de B: " << endl; cin >> b;
	  if (a==b)
	  {
	  	conta = a + b;
	  	cout << conta << endl;
	  }
	  else if (a>b)
	  {
	  conta = a - b;
	  cout <<  conta << endl;	
	  }
	  else if (b>a) 
	  {
	 	conta = b - a;	
	 	cout <<  conta<< endl;
	  }
	  
  system("pause");
  return 0;
}