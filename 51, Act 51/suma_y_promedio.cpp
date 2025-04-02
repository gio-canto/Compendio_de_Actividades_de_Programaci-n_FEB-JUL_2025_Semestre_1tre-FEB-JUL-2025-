// Actividad 51
// Programa: suma_y_promedio.cpp
// Descripción: Este algoritmo solicita tres números al usuario, calcula su suma y el promedio.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int a, b, c, suma;
    float prom;

    // Entrada de datos
    cout << "Ingrese el primer número: ";
    cin >> a;

    cout << "Ingrese el segundo número: ";
    cin >> b;

    cout << "Ingrese el tercer número: ";
    cin >> c;

    // Cálculos
    suma = a + b + c;
    prom = suma / 3.0;

    // Salida de resultados
    cout << "La suma de los tres números es: " << suma << endl;
    cout << "El promedio de los tres números es: " << prom << endl;
    system("pause");
    
    return 0;
}
