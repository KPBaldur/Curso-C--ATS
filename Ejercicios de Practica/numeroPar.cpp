#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Ingrese un numero: ";
    cin >> a;

    if (a % 2 == 0) {
        cout << "El numero es par.";
    } else {
        cout << "El numero es impar.";
    }

    return 0;
}