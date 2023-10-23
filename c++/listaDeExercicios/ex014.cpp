/* 
Aluno: Guilherme Rezende Silva
Enunciado:14.Construa  um algoritmo que  leia  as  informações  de:  horas  trabalhadas  (HT),  valor  da  hora trabalhada (VH). Calcule e apresente o salário líquido do empregado, baseado nas tabelas abaixo. OBS: Salário Líquido = Salário Bruto –INSS –Imposto de Rendaa)Salário Bruto = Horas trabalhadas * Valor da hora trabalhadab)INSS = 11% do salário líquidoc)Imposto de Renda após descontar o INSS usar esse valor e ler a alíquota do imposto de rendae parcela a deduzirna tabela abaixo Salário Bruto–INSSAlíquotaValor a DeduzirAté $1.257,12Isento(0%)De $1.257,13até $2.512,0815%$188,57Mais que $2.512,0827,5%$502,58OBS: Imposto de Renda = Alíquota * (Salário Bruto –INSS) –Valor a Deduzir
*/
#include <stdio.h>              
#include <iostream>

using namespace std;
int main ()
{
  int HT, VH, SB, SL, SalINSS, IR, INSS;
	  cout << "quantas sao as horas trabalhadas? " << endl; cin >> HT;
	  cout << "qual e o valor por cada hora? " << endl; cin >> VH;
	  SB = HT * VH;
	  INSS = (SB*0.11);
	  SalINSS = SB - (SB*0.11);
	  if (SalINSS >= 1267.12 && SalINSS <= 2512.08)
	   {
	   	IR = 0.15 * SalINSS - 188.57;
	   	SL = SB - INSS - IR;
	  	cout << SL << endl;
	   } 
	   else if (SalINSS > 2512.08)
	   {
	   	IR = 0.275 * SalINSS - 502.58;
	   	SL = SB - INSS - IR;
	  	cout << SL << endl;
	   }
	   else {
	   	SL = SB - INSS;
	  	cout << SL << endl;
	   }
	  
  system("pause");
  return 0;
}