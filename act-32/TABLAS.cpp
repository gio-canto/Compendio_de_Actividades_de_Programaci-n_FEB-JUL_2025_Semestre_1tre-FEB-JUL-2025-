// Actividad 32
// Programa: TABLAS.cpp
// Descripción: Este programa muestra las tablas de multiplicar del 1 al 10, incluyendo cada operación y una separación entre tablas
// Autor: Gio Antonio Canto Gómez

#include <iostream>
using namespace std;

int main() {

    int X; // Número base de la tabla de multiplicar
    int a; // Factor multiplicador
    int L; // Resultado de la multiplicación

    for (X = 1; X <= 10; X++) {
        cout << "Tabla del " << X << ":" << endl;
        
        for (a = 1; a <= 10; a++) {
            L = X * a;
            cout << X << " x " << a << " = " << L << endl;
        }

        cout << "-----------------------------" << endl;
    }

    system("pause"); 
    return 0;
}
