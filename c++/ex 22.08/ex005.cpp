/*Feito por Guilherme Rezende e Daniel Alonso*/
/*5- E1p que, é dado dois vetores de 10 posições cada, efetue operações aritiméticas básicas, indicadas do terceiro vetor cujo os dados também são conhecidos pelo usuário, gerando e exibindo no quarto vetor.*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{

 

    int i,a1[10], a2[10], a3[10], a4[10];
    for (i=0; i<=9; i++)
    {
        cout<< "CONJUNTO 1: "<< i+1<< "o. numero: ";
        cin>> a1[i];    
    }
    cout<<endl;
    for (i=0; i<=9; i++)
    {
        cout<< "CONJUNTO 2: "<< i+1<< "o. numero: ";
        cin>> a2[i];    
    }
    cout<< "\nEntre com as operacoes: ADICAO [1], SUBTRACAO [2], MULTIPLICACAO [3], DIVISAO [4]"<<endl;
    for (i=0; i<=9; i++)
    {
        cout<< "entre com a operacao desejada na conta dos  "<< i+1<< "os. numeros: ";
        cin>> a3[i];    
    }
    for (i=0; i<=9; i++)
    {
        switch (a3[i])
    {
        case 1:
        a4[i] = a1[i] + a2[i]; 
        break;
        case 2:
        a4[i] = a1[i] - a2[i];
        break;
        case 3:
        a4[i] = a1[i] * a2[i]; 
        break;
        case 4:
        a4[i] = a1[i] / a2[i];
        break;

 

    }
    cout<< "\nO resultado da "<< i+1<< " operacao e = "<< a4[i];
    }
}