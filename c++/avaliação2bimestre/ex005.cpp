/*Feito por Guilherme Rezende e Daniel Alonso*/
/*5. No dia da estreia do filme Barbie, uma grande emissora de TV realizou uma pesquisa logo após o encerramento do filme. Cada espectador respondeu a 1 questionário no qual constava a sua idade e a sua opinião em relção filme: Opção 3: Execelente; Opção 2: Bom; Opção 1: Regular. e1p que receba a idade e opinião de 20 espectadores. Calcule e exiba: A média das idades das pessoas que responderam excelente; A quantidade de pessoas que responderam 'regular', a porcentagem de pessoas que responderam 'bom', entre todos os espectadores analisados.
*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int idade, opcao, bom, respondeuRegular, contadorIdade, contador, porcentagemBom, i, pessoa; 
  float mediaTotal;
	bom = 0;
	contadorIdade = 0;
	respondeuRegular = 0;
	contador = 0;
	mediaTotal = 0;
	pessoa = 1;
	for(i=0; i < 20; i++)
	{
		cout << "PESSOA " << pessoa << endl;
		cout << "Qual sua idade? " << endl; cin >> idade;
		cout << "Qual sua opiniao em relacao ao filme? " <<endl;
		cout << "[1]'REGULAR' "<< endl;
		cout << "[2]'BOM' "<< endl;
		cout << "[3]'EXCELENTE' "<< endl;
		cin >> opcao;
		switch(opcao) {
			case 1: 
			respondeuRegular++;
			break;
			case 2: bom++ ;
			break;
			case 3: 
				contadorIdade+= idade;
				contador++;
			break;
		}
			pessoa ++;	
	}
		mediaTotal = contadorIdade / contador;
		cout <<	"A quantidade de pessoas que responderam REGULAR foi de: "<< respondeuRegular << endl;
		cout <<	"A porcentagem de pessoas que responderam BOM foi de: "<< porcentagemBom << "%"<< endl;
		cout <<	"A media de idade das pessoas que responderam EXCELENTE foi de: "<< mediaTotal<< endl;		
	system("pause");	
		
}