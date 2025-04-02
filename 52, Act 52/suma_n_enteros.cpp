// Actividad 52
// Programa: suma_n_enteros.cpp
// Descripción: Este algoritmo calcula la suma de los primeros N números enteros positivos utilizando la fórmula: suma = N * (N + 1) / 2
// Autor: Gio Antonio Canto Gómez

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int N, suma;

    // Encabezado descriptivo
    cout << "--------------------------------------------" << endl;
    cout << "     SUMA DE LOS PRIMEROS N ENTEROS         " << endl;
    cout << "--------------------------------------------" << endl;

    // Entrada de datos
    cout << "Ingrese el valor de N: ";
    cin >> N;

    // Cálculo de la suma 
    suma = N * (N + 1) / 2;

    // Salida de resultados
    cout << "La suma de los primeros " << N << " números enteros positivos es: " << suma << endl;
    system("pause");

    return 0;
}
