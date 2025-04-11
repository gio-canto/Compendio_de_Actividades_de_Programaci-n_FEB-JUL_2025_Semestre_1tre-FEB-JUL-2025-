// Actividad 17
// Programa: area.cpp
// Descripción: Este programa calcula el área de un triángulo utilizando la fórmula de Herón,
// asegurando primero que los lados ingresados formen un triángulo válido.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // Declaración de variables
    float a, b, c, s, area;

    // Entrada de datos
    cout << "=========================================" << endl;
    cout << "       Cálculo del Área de un Triángulo  " << endl;
    cout << "=========================================" << endl;
    cout << "Por favor, ingrese las longitudes de los lados del triángulo:" << endl;

    cout << "Lado a: ";
    cin >> a;
    cout << "Lado b: ";
    cin >> b;
    cout << "Lado c: ";
    cin >> c;

    // Verificación de validez del triángulo y cálculos
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        s = (a + b + c) / 2; 
        area = sqrt(s * (s - a) * (s - b) * (s - c)); // Fórmula de Herón

        // Salida de resultados
        cout << fixed << setprecision(2);
        cout << "\nResultados:" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Área del triángulo: " << area << " unidades cuadradas." << endl;
        cout << "-----------------------------------------" << endl;
    } else {
        // Mensaje de error si los lados no forman un triángulo válido
        cout << "\nError: Los valores ingresados no forman un triángulo válido." << endl;
    }

    cout << "\nGracias por usar el programa. ¡Hasta luego!" << endl;
    system("pause");
    return 0;
}