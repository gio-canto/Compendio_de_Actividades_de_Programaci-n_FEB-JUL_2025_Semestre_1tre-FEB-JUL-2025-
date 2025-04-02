// Actividad 7
// Programa: Determinar_Mayor.cpp
// Descripción: Este programa recibe dos números ingresados por el usuario y determina cuál es el mayor.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
using namespace std;

int main() {
    // Definición de variables
    int num1, num2, mayor;

    // Entrada de datos
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Proceso para determinar el mayor
    if (num1 > num2) {
        mayor = num1;
    } else if (num2 > num1) {
        mayor = num2;
    } else {
        cout << "Ambos números son iguales: " << num1 << endl;
        return 0;
    }

    // Salida de resultados
    cout << "El número mayor es: " << mayor << endl;
    system("pause");

    return 0;
}
