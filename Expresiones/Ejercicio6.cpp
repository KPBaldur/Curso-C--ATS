#include <iostream>

using namespace std;

int main() {
	float nota1, nota2, nota3, nota4, notafinal = 0;
	
	cout << "Ingrese la nota del primer alumno: " ; cin >> nota1;
	cout << "Ingrese la nota del segundo alumno: "; cin >> nota2;
	cout << "Ingrese la nota del tercer alumno: " ; cin >> nota3;
	cout << "Ingrese la nota del cuarto alumno: " ; cin >> nota4;

	cout.precision(2);
	notafinal = (nota1 + nota2 + nota3 + nota4) / 4;

	cout << "El promedio final de los alumnos es: " << notafinal;



	return 0;
}