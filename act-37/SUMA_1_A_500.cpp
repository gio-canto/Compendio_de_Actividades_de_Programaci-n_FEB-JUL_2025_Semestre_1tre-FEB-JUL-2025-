// Actividad 37
// Programa: SUMA_1_A_500.cpp
// Descripción: Este programa calcula calcula la suma de los números del 1 al 500.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
using namespace std;

int main() {
    int X;    // Variable de control del ciclo
    int suma; // Acumulador que almacena la suma total

    suma = 0;

    for (X = 1; X <= 500; X++) {
        suma = suma + X;
    }

    cout << "El resultado es: " << suma << endl;
    
    system("pause");
    return 0;
}
