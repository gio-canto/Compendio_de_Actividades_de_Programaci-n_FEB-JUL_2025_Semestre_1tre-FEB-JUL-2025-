// Actividad 9
// Programa: Determinar_Mayor.cpp
// Descripción: Este algoritmo solicita dos números al usuario y determina cuál es el mayor. Si los números son iguales, lo indica.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
using namespace std;

int main() {
    // Definición de variables
    float num1, num2, mayor;

    // Entrada de datos
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Comparación de números
    if (num1 > num2) {
        mayor = num1;
        cout << "El número mayor es: " << mayor << endl;
    } else if (num2 > num1) {
        mayor = num2;
        cout << "El número mayor es: " << mayor << endl;
    } else {
        cout << "Los números son iguales." << endl;
    }
    system("pause");


    return 0;
}
