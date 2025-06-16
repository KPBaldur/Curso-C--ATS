#include <iostream>
using namespace std;

int main() {
    float precio, valorTotal=0;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    valorTotal = precio * (1 + 0.19);

    cout << "El precio total del producto es: " << valorTotal <<endl; 

    return 0;
}