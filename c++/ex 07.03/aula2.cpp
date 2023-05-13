#include <iostream>
using namespace std;

int main()
{
	float sm, qt, preco, vp, vd;
	cout << "Entre com o salario minimo: ";
	cin >> sm;
	cout << "Entre com a quantidade de kw?: ";
	cin >> qt;
	preco = sm / 700;
	vp = preco * qt;
	vd = vp * 0.9;
	cout << "Preco do kw: " << preco << endl;
	cout << "Valor a ser pago: " << vp << endl;
	cout << "Valor com desconto: " << vd << endl;
	system("pause");
}
 