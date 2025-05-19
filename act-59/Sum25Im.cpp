// Actividad 59
// Programa: Sum25Im.cpp
// Descripción: Este programa calcula la suma de los cuadrados de los primeros 25 números impares.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int resultado = 0; // Suma acumulada de los cuadrados
    int n = 1; // Primer número impar
    
    // Cálculo 
    for (int i = 0; i < 25; i++) {
        resultado += (n * n);
        n += 2; 
    }

    // Salida de datos
    cout << "La suma de los cuadrados de los primeros 25 números impares es: " << resultado << endl;
    
    system("pause");
    return 0;
}
