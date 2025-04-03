// Actividad 11
// Programa: SueldoExtra.cpp
// Descripción: Este programa calcula el sueldo total de un empleado considerando su sueldo base y una comisión del 10% sobre tres ventas realizadas en el mes
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declaración de variables
    float sueldo, venta1, venta2, venta3, comision, total_comisiones, sueldo_final;

    // Entrada de datos
    cout << "==============================================" << endl;
    cout << "         SISTEMA DE CALCULO DE COMISIONES      " << endl;
    cout << "==============================================" << endl;
    cout << "¡Hola! Estimado empleado, por favor indique su sueldo base: ";
    cin >> sueldo;

    cout << "Ingrese el monto de su primera venta: ";
    cin >> venta1;

    cout << "Ingrese el monto de su segunda venta: ";
    cin >> venta2;

    cout << "Ingrese el monto de su tercera venta: ";
    cin >> venta3;

    // Cálculo de comisiones y sueldo final
    comision = 0.10;
    total_comisiones = (venta1 + venta2 + venta3) * comision;
    sueldo_final = sueldo + total_comisiones;

    // Resultados
    cout << "\n==============================================" << endl;
    cout << "               RESULTADOS DE COMISIONES        " << endl;
    cout << "==============================================" << endl;
    cout << "Estimado empleado:" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Su sueldo base es de: $" << fixed << setprecision(2) << sueldo << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Usted realizó 3 ventas este mes." << endl;
    cout << "El bono total recibido por sus ventas es de: $" << fixed << setprecision(2) << total_comisiones << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Su sueldo total este mes será de: $" << fixed << setprecision(2) << sueldo_final << endl;
    cout << "==============================================" << endl;

    system("pause");
    return 0;
}