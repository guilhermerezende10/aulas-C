/* 
	Aluno: Guilherme Rezende Silva
	Enunciado: 6- Construa um algoritmo que leia o preço de um produto (P) e apresente a mensagem: “Em promoção”, caso o preço seja maior ou igual a R$ 50,00 e menor  ou  igual  a  R$  100,00. Caso contrário, deve apresentar a mensagem: “Preço Normal”.

*/

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int P;
    cout << "Qual e o preco do produto? " << endl; cin >> P;
    if (P >= 50 && P <= 100)
    {
    	cout << "Em promocao" << endl;
	} 
	else {
		cout << "Preco normal" << endl;
	}
    return 0;
}

	
	

