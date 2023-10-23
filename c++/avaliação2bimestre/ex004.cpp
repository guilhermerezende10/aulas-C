/*Feito por Guilherme Rezende e Daniel Alonso*/
/*4- Uma escola tem 5 turmas cada turma tem N alunos. e1p que exiba por turma, total de alunos com a média superior a 7 e a média geral da escola. 
*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int alunosEm1turma,qtdAlunos, pensantes1,j, i, alunoAtual, pensantes2, pensantes3, pensantes4, pensantes5; 
  float notaGeral,mediaFinal;
	cout << "Quantos alunos tem em cada turma? " << endl; cin >> alunosEm1turma;
	qtdAlunos = alunosEm1turma * 5;
	notaGeral = 0;
	pensantes1 = 0;
	pensantes2 = 0;
	pensantes3 = 0;
	pensantes4 = 0;
	pensantes5 = 0;
	
	cout << "TURMA 1:" << endl;
	for(i=1;i <= alunosEm1turma; i++)
		{
		cout << "Qual e a media desse aluno? " << endl; cin >> alunoAtual;
		notaGeral+= alunoAtual;
		if (alunoAtual > 7) {
			pensantes1++;
			}
		}
		
		cout << "TURMA 2:" << endl;
	for(i=1;i <= alunosEm1turma; i++)
		{
		cout << "Qual e a media desse aluno? " << endl; cin >> alunoAtual;
		notaGeral+= alunoAtual;
		if (alunoAtual > 7) {
			pensantes2++;
			}
		}
		
		cout << "TURMA 3:" << endl;
	for(i=1;i <= alunosEm1turma; i++)
		{
		cout << "Qual e a media desse aluno? " << endl; cin >> alunoAtual;
		notaGeral+= alunoAtual;
		if (alunoAtual > 7) {
			pensantes3++;
			}
		}
		
		cout << "TURMA 4:" << endl;
	for(i=1;i <= alunosEm1turma; i++)
		{
		cout << "Qual e a media desse aluno? " << endl; cin >> alunoAtual;
		notaGeral+= alunoAtual;
		if (alunoAtual > 7) {
			pensantes4++;
			}
		}
		
		cout << "TURMA 5:" << endl;
	for(i=1;i <= alunosEm1turma; i++)
		{
		cout << "Qual e a media desse aluno? " << endl; cin >> alunoAtual;
		notaGeral+= alunoAtual;
		if (alunoAtual > 7) {
			pensantes5++;
			}
		}
		
			
	mediaFinal = notaGeral / qtdAlunos;
	cout << "Alunos com media > 7 da Turma 1: " << pensantes1 << endl;
	cout << "Alunos com media > 7 da Turma 2: " << pensantes2 << endl;
	cout << "Alunos com media > 7 da Turma 3: " << pensantes3 << endl;
	cout << "Alunos com media > 7 da Turma 4: " << pensantes4 << endl;
	cout << "Alunos com media > 7 da Turma 5: " << pensantes5 << endl;
	cout << "A media geral de notas da escola e de: " << mediaFinal << endl;
	system("pause");
}	

	
