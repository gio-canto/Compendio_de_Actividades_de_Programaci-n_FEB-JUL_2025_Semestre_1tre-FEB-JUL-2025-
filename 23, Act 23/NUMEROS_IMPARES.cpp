// Actividad 23
// Programa: NUMEROS_IMPARES.cpp
// Descripción: Este programa muestra los números impares desde 1 hasta 199.
// Autor: Gio Antonio Canto Gómez
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int numero;
    // Cálculo
    for (int numero = 1; numero < 200; numero += 2) { // Si desea cambiar el rango, solo cambie el valor de 200 por el que desee, por ejemplo, para el número 300 coloque 300
        cout << numero << endl;
    }
    // Salida de resultados
    system("pause");
    return 0;
}