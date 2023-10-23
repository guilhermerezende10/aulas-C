/*
Feito por Guilherme Rezende e Daniel Alonso
2- Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de consumo. Para cada consumidor, são digitados os seguintes dados: NUM do consumidor, quantidade de KWh consumidos durante o mês, e tipo do consumidor.
-Tipo 1: residencial, preço em reais por KWh = 0.3.
-Tipo 2: comercial, preço em reais por KWh = 0.5.
-Tipo 3: industrial, preço em reais por KWh = 0.7.
Os dados devem ser lidos até que seja encontrado um consumidor com código "0". O programa deve exibir: o custo total de cada consumidor; o total de consumo para 3 tipos de consumidor; a média de consumo dos tipos 1 e 2.
*/

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int num, KwConsumidos, tipo, KWpreco, consumidor;
	float soma, media, consumoGeral;
	num = 1;
	soma = 0;
	consumidor = 0;
	while (num != 0) {
	cout << "Qual seu numero de consumidor? " << endl; cin >> num;
	cout << "Quantos KW foram consumidos durante o mes? " << endl; cin >> KwConsumidos;
	cout << "Qual seu tipo de consumidor? " << endl; 
	cout << "[1] para Residencial" << endl;
	cout << "[2] para Comercial" << endl;
	cout << "[3] para Industrial" << endl;
	cin >> tipo;
	switch(tipo) {
		case 1: 
		KWpreco = KwConsumidos * 0.3;
		soma += KwConsumidos;
		consumoGeral += KwConsumidos;
		consumidor++;
		break;
		case 2:
		KWpreco = KwConsumidos * 0.5; 
		soma += KwConsumidos;
		consumidor++;
		consumoGeral += KwConsumidos;
		break;
		case 3: 
		KWpreco = KwConsumidos * 0.7;
		consumoGeral += KwConsumidos;
		break;
		default:
		cout << "Codigo inválido. "<< endl;
		break;
	}	
	cout << "Custo total do cliente: R$" << KWpreco << endl;
}
	media = soma / consumidor;
	cout << "Total de consumo para os 3 tipos: " << consumoGeral << "KWh" << endl;
	cout << "Media de consumo dos tipos 1 e 2: " << media << "KWh" << endl;
	system("pause");
}