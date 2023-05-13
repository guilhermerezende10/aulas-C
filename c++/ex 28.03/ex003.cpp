/* Guilherme Rezende e Daniel Alonso*/

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ int j1, j2, j3, pt, maior, menor, intermediario;
	cout << "Quantos pontos o jogador 1 fez? ";
	cin >> j1;
	cout << "Quantos pontos o jogador 2 fez? ";
	cin >> j2;
	cout << "Quantos pontos o jogador 3 fez? ";
	cin >> j3;
	pt = j1 + j2 + j3;
	if (j1 > j2) {
        if (j1 > j3) {
            maior = j1;
            if (j2 > j3) {
                intermediario = j2;
                menor = j3;
            } else {
                intermediario = j3;
                menor = j2;
            }
        } else {
            maior = j3;
            intermediario = j1;
            menor = j2;
        }
    } else {
        if (j2 > j3) {
            maior = j2;
            if (j1 > j3) {
                intermediario = j1;
                menor = j3;
            } else {
                intermediario = j3;
                menor = j1;
            }
        } else {
            maior = j3;
            intermediario = j2;
            menor = j1;
        }
        cout << "maior --> " << maior << endl;
        cout << "intermediario --> " << intermediario << endl;
        cout << "menor --> " << menor << endl;
        cout << "A soma dos pontos dos 3 arqueiros e de: " << pt << endl;
        if (pt > 100) {
        	cout << "CLASSIFICADOS" << endl;
		}
		else {
			cout << "DESCLASSIFICADOS" << endl;
		}
    }
	system("pause");
}