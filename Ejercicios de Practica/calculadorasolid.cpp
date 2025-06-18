#include <iostream>
using namespace std;

float pedirNumero(string mensaje) {
    float num;
    cout << mensaje;
    cin >> num;
    return num;
}

int mostratMenu() {
    int opccion;
    cout << "\n************************************************\n";
    cout << "------------  Ingrese operacion: ---------------\n";
    cout << "************************************************\n";
    cout << "1. Sumar\n";
    cout << "2. Restar\n";
    cout << "3. Multiplicar\n";
    cout << "4. Dividir\n";
    cout << "\n************************************************\n";
    cout << "Seleccione una opcion: ";
    cin >> opccion;
    return opccion;
}

float operar (float a, float b, int opcion) {
    switch (opcion)
    {
    case 1: return a + b;
    case 2: return a - b;
    case 3: return a * b;
    case 4:
        if (b != 0) return a / b;
        else {
            cout << "Error: Division por cero." << endl;
            return 0;
        }
    default:
        cout << "Opcion invalida." << endl;
        return 0;
    }
}

int main() {
    float num1 = pedirNumero("Ingrese primer numero: ");
    float num2 = pedirNumero("Ingrese segundo numero: ");
    int opcion = mostratMenu();
    float resultado = operar(num1, num2, opcion);

    if (opcion >= 1 && opcion <= 4 && !(opcion == 4 && num2 == 0))
        cout << "Resultado: " << resultado << endl;

    return 0;
}