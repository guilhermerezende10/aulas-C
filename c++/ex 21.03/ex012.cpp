/*Feito por Guilherme Rezende e Daniel Alonso*/

#include <iostream>
using namespace std;

int main() {
    int A, B, C, maior, intermediario, menor;

    cout << "Digite o primeiro numero: ";
    cin >> A;
    cout << "Digite o segundo numero: ";
    cin >> B;
    cout << "Digite o terceiro numero: ";
    cin >> C;

    if (A > B) {
        if (A > C) {
            maior = A;
            if (B > C) {
                intermediario = B;
                menor = C;
            } else {
                intermediario = C;
                menor = B;
            }
        } else {
            maior = C;
            intermediario = A;
            menor = B;
        }
    } else {
        if (B > C) {
            maior = B;
            if (A > C) {
                intermediario = A;
                menor = C;
            } else {
                intermediario = C;
                menor = A;
            }
        } else {
            maior = C;
            intermediario = B;
            menor = A;
        }
    }

    cout << "O maior numero digitado e: " << maior << endl;
    cout << "O numero intermediario e: " << intermediario << endl;
    cout << "O menor numero digitado e: " << menor << endl;

}