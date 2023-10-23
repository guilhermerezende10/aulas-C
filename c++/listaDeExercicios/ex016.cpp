/* 
Aluno: Guilherme Rezende Silva
Enunciado: 16.Construa  um algoritmo que  calcule  e  apresente  quanto  deve  ser  pago  por  um  produto considerando  a  leitura  do  preço  de  etiqueta  (PE)  e  o  código  da  condição  de  pagamento (CP). Utilize para os cálculos a tabela de condições de pagamento a seguir:Código da condição de pagamentoCondição de pagamento1À vista em dinheiro ou cheque, com 10% de desconto2À vista com cartão de crédito, com 5% de desconto3Em 2 vezes, preço normal de etiqueta sem juros4Em 3 vezes, preço de etiqueta com acréscimo de 10%
*/
#include <stdio.h>              
#include <iostream>

using namespace std;
int main ()
{
  int CP;
  float PE, preco;
	cout << "Qual e o preco de etiqueta do produto? " << endl; cin >> PE;
	cout << "Qual e o codigo da condicao de pagamento? " << endl;
	cout << "[1] A vista em dinheiro ou cheque, com 10% de desconto. " << endl;
	cout << "[2] A vista com cartao de credito, com 5% de desconto. " << endl;
	cout << "[3] Em 2 vezes, preco normal de etiqueta sem juros " << endl;
	cout << "[4] Em 3 vezes, preco de etiqueta com acrescimo de 10% " << endl;
	cin >> CP;
	switch(CP) {
		
		case 1: 
		preco = PE - (PE*0.1);
		cout << "Preco final de R$" << preco << " a vista." << endl;
		break;
		
		case 2: 
		preco = PE - (PE*0.5);
		cout << "Preco final de R$" << preco << " a vista." << endl;
		break;
		
		case 3: 
		preco = PE /2;
		cout << "Parcela final de R$" << preco << " em 2x sem juros." << endl;
		break;
		
		case 4: 
		preco = (PE + (PE * 0.1)) /3;
		cout << "Parcela final de R$" << preco << " em 3x com 10% de juros." << endl; 
		break;
		
		default: cout << "Codigo da condicao de pagamento inexistente. " << endl;
		break;
	}
	  
  system("pause");
  return 0;
}