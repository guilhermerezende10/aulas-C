/*Feito por Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
const int totalMesas = 30;
const int lugaresPorMesa = 5;
bool mesasOcupadas[totalMesas] = {false};

while (true) {
int codigoMesa, lugaresDesejados;

cout << "Digite o codigo da mesa (100 a 129) ou 0 para sair: ";
cin >> codigoMesa;

if (codigoMesa == 0) {
cout << "Programa encerrado. Obrigado!\n";
break;
}

if (codigoMesa < 100 || codigoMesa > 129) {
cout << "Codigo de mesa invalido. Tente novamente.\n";
continue;
}

cout << "Digite a quantidade de lugares desejados: ";
cin >> lugaresDesejados;

int numeroMesa = codigoMesa - 100;

if (mesasOcupadas[numeroMesa]) {
cout << "Mesa já está ocupada. Não é possível realizar a reserva.\n";
} else if (lugaresDesejados > lugaresPorMesa) {
cout << "Quantidade de lugares desejados excede o limite da mesa.\n";
} else {
mesasOcupadas[numeroMesa] = true;
cout << "Reserva realizada com sucesso para a mesa " << codigoMesa << ".\n";
}
}

return 0;
}
