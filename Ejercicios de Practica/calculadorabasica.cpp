#include <iostream>

using namespace std;

int main() {
    float num1, num2, resultado = 0;
    int opcion = 0;

    cout << "Ingrese primer numero: "; cin>>num1;
    cout << "Ingrese segundo numero: "; cin>>num2;

    cout << " " <<endl;
    cout << "************************************************" <<endl;
    cout << "------------  Ingrese operacion: -------------- " <<endl;
    cout << "************************************************" <<endl;
    cout << " " <<endl;
    cout << "1. Sumar" <<endl;
    cout << "2. Restar" <<endl;
    cout << "3. Multiplicar" <<endl;
    cout << "4. Division" << endl;
    cout << "...: "; cin>> opcion;

   switch (opcion)
   {
   case 1:
    resultado = num1 + num2;
    cout << "El resultado de la suma es: " << resultado;
    break;
    
    case 2:
    resultado = num1 - num2;    
    cout << "El resultado de la resta es: " << resultado;
    break;

    case 3:
    resultado = num1 * num2;
    cout << "El resultado de la multiplicacion es: " << resultado;
    break;

    case 4:
    resultado = num1 / num2;
    cout << "El resultado de la division es: " << resultado;
    break;

   default:
    cout << "Elige una opcion correcta";
    break;
    }

    return 0;
}