/*Feito por Guilherme Rezende e Daniel Alonso*/
/*2- A série de Ricci difere da série de Fibonacci porque os 2 primeiros termos são informados pelo usuário. Os demais termos são gerados da mesma forma que a série de Fibonacci. e1p que exiba os N primeiros termos da série de Ricci e a soma dos termos exibidos, sabendo-se pra existir é necessário no mínimo 3 termos.
*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int i, ant, atual, prox, termo, segundo; 
    cout << "Entre com o primeiro numero: " << endl; cin >> ant;
    cout << "Entre com o segundo numero: " << endl; cin >> atual;
    cout << "Entre com o numero de termos: "; cin >> termo;
    if(termo > 2) {
    	cout << endl << ant << " ";
    	for (i=1;i<=termo;i++)
    {
        cout << endl << atual << " ";
        prox = ant + atual;
        ant = atual;
        atual = prox;
    }
	} 
	system("pause");
}