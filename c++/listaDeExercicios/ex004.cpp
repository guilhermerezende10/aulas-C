/* 
	Aluno: Guilherme Rezende Silva
	Enunciado: 4-Construa um algoritmo que determine quanto será gasto para encher o tanque de um carro (VG), sabendo-se que o preço da gasolina é de R$ 1,80 e o preço do álcool é de R$ 1,00. O usuário  fornecerá  os  seguintes  dados:  Tipo  de  carro  (TC)  (G –gasolina  ou  A –álcool)  e Capacidade do tanque (CT), em litros.

*/

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int VG, CT, custo;
    char TC;
    
    cout << "Qual o tipo do seu carro?" << endl;
    cout << "[G] para Gasolina" << endl;
    cout << "[A] para Alcool" << endl;
    cin >> TC;
    
    cout << "Qual a capacidade de combustível do carro em litros? ";
    cin >> CT;
    
    if (TC == 'G') {
        custo = CT * 1.8;
        
    }
    else if (TC == 'A') {
        custo = CT * 1;
        
    }
    cout << "Seriam necessarios R$" << custo << " para encher seu tanque." << endl;
    return 0;
}

	
	

