// Actividad 62
// Programa: Valormaximo.cpp
// Descripción: Simulación de ingreso de números hasta ingresar el valor centinela (99999)
// Autor: Gio Antonio Canto Gómez

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    double a;           // Número ingresado por el usuario
    double b = 0;       // Suma total de los números ingresados
    const int cent = 99999; // Valor centinela para finalizar la entrada

    // Bucle para solicitar números al usuario hasta que ingrese el valor centinela
    while (true) {
        cout << "Ingrese un numero: ";
        cin >> a;
        if (a == cent) {
            break; // Sale del bucle si se ingresa el valor centinela
        }
    }

    system("pause");
    return 0;
}
