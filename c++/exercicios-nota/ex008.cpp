#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float reais, dol, dvale;
    cout << "Quantos dolares voce tem no cofre? ";
    cin >> dol;
    cout << "Quantos vale o dolar hoje? ";
    cin >> dvale;
    reais = dol * dvale;
    cout << "Seus dolares convertidos pra real ficam em R$" << reais << endl;1
}
