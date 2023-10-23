/* 
Aluno: Guilherme Rezende Silva
Enunciado: 20.Construa  um algoritmo que,  dados  os  comprimentos  dos  três  lados  (A,  B  e  C)  de  um triângulo, verifique o tipo de triângulo formado. Apresentar qual é o tipo. Sabe-se que:Triângulo do tipo Eqüilátero –possui os três lados iguaisTriangulo do tipo Isósceles –possui dois lados iguaisTriângulo do tipo Escaleno –possui os três lados diferentes
*/
#include <stdio.h>              
#include <iostream>

using namespace std;
int main ()
{
  int a, b, c;	
  	cout << "Entre com o A: " << endl; cin >> a;
  	cout << "Entre com o B: " << endl; cin >> b;
  	cout << "Entre com o C: " << endl; cin >> c;
  	if (a==b&&a==c) {
  		cout << "Triangulo equilatero" << endl;
	  }
  	else if (a==b || a==c || b==c ) {
  		cout << "Triangulo isosceles" << endl;
	  }
	  else {
	  	cout << "Triangulo escaleno." << endl;
	  }
	  
  system("pause");
  return 0;
}