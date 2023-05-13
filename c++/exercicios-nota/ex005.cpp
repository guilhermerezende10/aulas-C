#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float PRECO, PRECOF, DESC;
    cout << "Digite o preco original do produto: ";
    cin >> PRECO;
    cout << "Digite o preco cobrado depois do desconto: ";
    cin >> PRECOF;
    DESC = (PRECO - PRECOF) / PRECO * 100;
    cout << "O desconto foi de " << DESC << "%." << endl;
}
