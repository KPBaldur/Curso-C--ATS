/*Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo 
y escriba en la salida estandar su hipotenusa.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float cateto1, cateto2, hipotenusa = 0;

    cout << "Ingrese el valor del cateto 1: "; cin>>cateto1;
    cout << "Ingrese el valor del cateto 2: "; cin>>cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    /* Otra forma mas sencilla de hacerlo es sin imporar la libreria de mcath
    hipotenusa = cateto1 * cateto1 + cateto2 * cateto2;
    */

    cout << "La hipotenusa del triangulo es: " << hipotenusa;


    return 0;
}