#include <iostream>

using namespace std;

int main() {
    float a, b, c, d, e, f, resultado=0;

    cout << "Ingrese valor de a: "; cin>>a;
    cout << "Ingrese valor de b: "; cin>>b;
    cout << "Ingrese valor de c: "; cin>>c;
    cout << "Ingrese valor de d: "; cin>>d;
    cout << "Ingrese valor de e: "; cin>>e;
    cout << "Ingrese valor de f: "; cin>>f;

    resultado = ( a + (b / c)) / (d + (e / f));

    cout.precision(2);

    cout << "El resultado es: " <<resultado;

    return 0;
}