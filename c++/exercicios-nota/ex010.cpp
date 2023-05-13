#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float CT, LT, CP, LP, AreaTi, AreaPa;
    int  qtd;
    cout << "Digite o comprimento do tijolo: ";
    cin >> CT;
    cout << "Digite a largura do tijolo: ";
    cin >> LT;
    cout << "Digite o comprimento da parede: ";
    cin >> CP;
    cout << "Digite a largura da parede: ";
    cin >> LP;
    AreaTi = CT * LT; 
    AreaPa = CP * LP; 
    qtd = AreaPa / AreaTi; 
    cout << "Tijolos necessarios: " << qtd << endl;

}