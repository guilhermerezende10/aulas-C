/* 
Aluno: Guilherme Rezende Silva
Enunciado:8.Construa um algoritmo que apresente o nome e o salário dos funcionários, de acordo com os seguintes critérios:Salários que sejam maiores ou iguais a R$ 1000,00 e menores ou iguais a R$ 1500,00Funcionários pertencentes aos departamentos de produção ou engenharia.Obs: Os departamentos são reconhecidos pelas letras (P) Produção e (E) Engenharia. São  fornecidos  o  nome  do  funcionário  (NF),  o  seu  salário  (SAL)  e  o  departamento  onde trabalha (DEP).
*/
#include <stdio.h>              
#include <iostream>

using namespace std;
int main ()
{
  int SAL;
  char DEP, NF[10];
  	cout << "Qual seu nome? " << endl; 
	cin >> NF;
  	cout << "Qual seu salario? " << endl; 
	cin >> SAL;
  	
  	cout << "Qual seu departamento? " << endl; 
  	cout << "[E] para engenharia." << endl; 
  	cout << "[P] para producao" << endl;
  	
  	cin >> DEP;
  	
  	if (DEP == 'P' || DEP == 'p' && SAL > 999 && SAL < 1501) {
  		cout << "Ola " << NF << ", seu salario e de R$" << SAL << " e voce trabalha no departamento de produção"<< endl;
	  }else if (DEP == 'E' || DEP == 'e' && SAL > 999 && SAL < 1501) {
	  	cout << "Ola " << NF << ", seu salario e de R$" << SAL << " e voce trabalha no departamento de engenharia"<< endl;
	  } 
	
	  
	  
  system("pause");
  return 0;
}