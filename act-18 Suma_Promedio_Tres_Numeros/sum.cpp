// Actividad 18
// Programa sum.cpp
// Descripción: Este programa solicita tres números al usuario, calcula su suma y su promedio, y muestra los resultados
// Autor: Gio Antonio Canto Gómez
#include <iostream>
using namespace std;

int main() {
    double a, b, c, suma, promedio;

    cout << "======================================" << endl;
    cout << "      SUMA Y PROMEDIO DE 3 NUMEROS    " << endl;
    cout << "======================================" << endl;

    cout << "Indique el primer número: ";
    cin >> a;

    cout << "Indique el segundo número: ";
    cin >> b;

    cout << "Indique el tercer número: ";
    cin >> c;

    suma = a + b + c;
    promedio = suma / 3;

    cout << fixed;
    cout.precision(2);
    cout << "\nResultados:" << endl;
    cout << "--------------------------------------" << endl;
    cout << "La suma es:     " << suma << endl;
    cout << "El promedio es: " << promedio << endl;
    system("pause");
    
    return 0;
}
