// Actividad 31
// Programa: TABLA_MULTIPLICAR.cpp
// Descripción: Este programa muestra la tabla de multiplicar de un número ingresado por el usuario, del 1 al 10
// Autor: Gio Antonio Canto Gómez
#include <iostream>
using namespace std;

int main() {

    int numero;    // Número ingresado para generar la tabla de multiplicar
    int resultado; // Resultado de la multiplicación
    int v;         // Variable de control del ciclo

    cout << "Ingrese el número para la tabla de multiplicar: ";
    cin >> numero;

    cout << "\nTabla de multiplicar del " << numero << ":\n" << endl;

    for (v = 1; v <= 10; v++) {
        resultado = numero * v;
        cout << numero << " x " << v << " = " << resultado << endl;
    }
    
    system("pause");
    return 0;
}
