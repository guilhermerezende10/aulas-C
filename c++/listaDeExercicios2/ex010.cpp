/*Feito por Guilherme Rezende e Daniel Alcatrão*/
/*20.Construa  um  programa  que  leia  as  informações  de:  horas  trabalhadas  (HT),  valor  da  hora trabalhada  (VH).  Calcule  e  apresente  o  salário  líquido  dos  empregados  da  empresa,baseado nas tabelas abaixo. OBS: Salário Líquido = Salário Bruto –INSS –Imposto de Rendaa)INSS = 11% do salário brutob)Imposto de Renda após descontar o INSS usar esse valor e ler a alíquota do imposto de renda na tabela abaixoSalário Bruto –INSSAlíquotaDeduzirAté $900IsentoDe $900 até $180015%$135Mais que $180027,5%$360Não é conhecido o número de funcionários da empresa. Ao final de cada cálculo, o programa deve  perguntar  se  a  pessoa  deseja  calcular  o  salário  de  outro  funcionário.  Caso  a  resposta seja negativa, o programa deve parar.OBS:  Não  se  esqueça  de  validar  a  entrada  da  resposta  do  usuário,  que  só  pode  aceitar  os caracteres “S” ou “N”.*/
#include <iostream>
using namespace std;
int main ()
{
	int HT, VH, salario,i;
	float sliquid, sbruto, inss, ir;
	
	do
	{
		cout << "Informe a quantidade de horas trabalhadas: "; cin >> HT;
		cout << "Informe o valor da hora trabalhada: "; cin >> VH;
		sbruto = HT * VH;
		inss = sbruto * 0.11;
		sbruto = sbruto - inss;
		if(sbruto <= 900)
		{
			sliquid = sbruto;
			cout << "Salario = " << sliquid;
		}
		else
		{
			if(sbruto > 900 && sbruto <= 1800)
			{
				ir = 135;
				sliquid = sbruto - ir;	
			}
			if(sbruto > 1800)
			{
				ir = 360;
				sliquid = sbruto - ir;
			}
		}
		sliquid	= sbruto - inss - ir;
		cout << "Deseja calcular o salario de mais alguem? "<< endl;
		cout << "[1] CONTINUAR"<< endl;
		cout << "[2] TERMINAR"<< endl;
		cin >>  i;
		
	} while(i==1);
	system("pause");
}