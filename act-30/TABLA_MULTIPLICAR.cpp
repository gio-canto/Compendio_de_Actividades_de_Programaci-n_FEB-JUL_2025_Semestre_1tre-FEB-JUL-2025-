// Actividad 30
// Programa: TABLA_MULTIPLICAR.cpp
// Descripción: Este programa muestra la tabla de multiplicar del número 9, del 1 al 10
// asegurando primero que los lados ingresados formen un triángulo válido.
// Autor: Gio Antonio Canto Gómez
#include <iostream>
using namespace std;

int main() {
    int v; // Variable de control del ciclo
    int R; // Resultado de la multiplicación

    cout << "Tabla de multiplicar del 9" << endl;

    for (v = 1; v <= 10; v++) {
        R = 9 * v;
        cout << "9 x " << v << " = " << R << endl;
    }
    
    system("pause");
    return 0;
}
