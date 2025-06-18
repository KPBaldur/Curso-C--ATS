#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float a, b, c, x = 0;
    
    cout << "Ingrese valor de a: "; cin>> a;
    cout << "Ingrese valor de b: "; cin>> b;
    cout << "Ingrese valor de c: "; cin>> c;

    x = ( -b + (sqrt(pow(b, 2) - 4 * (a * c)))) / (2 * a) ;

    cout << "El valor de X es: " <<x;

    return 0;
}