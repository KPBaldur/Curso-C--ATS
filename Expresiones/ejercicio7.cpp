/* La calificacion final de un estudiante es la media ponderada de tres notas: La nota de practica que cuenta un 30% del total, 
la nota teorica que cuenta un 60% y la nota de participacion que cuenta el 10% restante. Escriba un programa que lea de la entrada
estandar las tres notas de un alumno y escriba en la salida estandar su nota final.*/

#include <iostream>

using namespace std;

int main() {
    float nota1, nota2, nota3, promedio = 0;

    cout << "Ingrese primera nota: "; cin>> nota1;
    cout << "Ingrese segunda nota: "; cin>> nota2;
    cout << "Ingrese tercera nota: "; cin>> nota3;

    nota1 = nota1 * 0.30;
    nota2 = nota2 * 0.60;
    nota3 = nota3 * 0.10;

    promedio = nota1 + nota2 + nota3;

    cout<< "\nLa nota final es: " <<promedio;
    return 0;
}