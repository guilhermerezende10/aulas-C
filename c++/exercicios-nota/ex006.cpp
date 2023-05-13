#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float AA, AN, age;
    cout << "Em que ano voce nasceu? ";
    cin >> AN;
    cout << "Em que ano voce esta? ";
    cin >> AA;
    age = AA - AN;
    cout << "Voce tem " << age << " anos." << endl;
}
