// Actividad 10
// Programa: Antiguedad.cpp
// Descripción: Este algoritmo calcula el bono de un empleado en función de su antigüedad y determina su sueldo final.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Definición de variables
    string nom_emp;
    float ant, bono, sueldo, sueldo_final;

    // Encabezado del ticket
    cout << "==========================================" << endl;
    cout << "             FÁBRICA DE DULCES            " << endl;
    cout << "==========================================" << endl;

    // Entrada de datos
    cout << "Nombre del empleado: ";
    getline(cin, nom_emp);

    cout << "Sueldo base: $";
    cin >> sueldo;

    cout << "Antigüedad (en años): ";
    cin >> ant;

    // Cálculo del bono
    if (ant < 5) {
        bono = 300;
    } else if (ant >= 5 && ant < 10) {
        bono = 1000;
    } else {
        bono = 2000;
    }

    // Cálculo del sueldo final
    sueldo_final = sueldo + bono;

    // Impresión estilo POS (sin mencionar "POS")
    cout << fixed << setprecision(2);
    cout << "\n============== DETALLE DE PAGO ===========" << endl;
    cout << "Empleado:            " << nom_emp << endl;
    cout << "Antigüedad:          " << ant << " años" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Sueldo base:         $" << setw(8) << sueldo << endl;
    cout << "Bono por antigüedad: $" << setw(8) << bono << endl;
    cout << "------------------------------------------" << endl;
    cout << "SUELDO TOTAL:        $" << setw(8) << sueldo_final << endl;
    cout << "==========================================" << endl;
    cout << "     ¡Gracias por su trabajo y esfuerzo!   " << endl;
    cout << "==========================================" << endl;
    system("pause");

    return 0;
}
