// Actividad 55, del ejemplo 1 del libro (Version 2.0)
// Programa AREAT.cpp
// Descripción: Calcula el área de un triángulo rectángulo
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>  
#include <cstdlib>  
using namespace std;

int main() {
    // Declaración de variables
    float base, altura, area;

    // Entrada de datos
    cout << "=== CÁLCULO DEL ÁREA DE UN TRIÁNGULO RECTÁNGULO ===" << endl;
    cout << "Introduce la base del triángulo: ";
    cin >> base;
    cout << "Introduce la altura del triángulo: ";
    cin >> altura;

    // Cálculos
    area = (base * altura) / 2;

    // Visualización de resultados
    cout << "\n=== RESULTADO ===" << endl;
    cout << "Área = " << fixed << setprecision(2) << area << " metros cuadrados" << endl;

    system("pause");

    return 0; // Fin del programa
}
