// Actividad 49
// Programa FABRICAMUEBLES.cpp
/*Descripción: Este programa empleados de una fábrica de muebles, calcula cuántos están próximos a jubilarse
(edad > 50) y obtiene la antigüedad promedio*/
// Autor: Gio Antonio Canto Gómez
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nombre;       // Nombre del colaborador
    int edad;            // Edad del colaborador
    int sueldo;          // Sueldo del colaborador
    int antiguedad;      // Antigüedad laboral del colaborador
    int total_jubilacion; // Número de empleados mayores de 50 años
    int suma_antiguedad;  // Suma total de años de antigüedad
    int total_empleados;  // Número total de empleados registrados
    char continuar;      // Respuesta del usuario para continuar (S/N)

    total_jubilacion = 0;
    suma_antiguedad = 0;
    total_empleados = 0;

    cout << "========================================" << endl;
    cout << "        FÁBRICA DE MUEBLES - REGISTRO        " << endl;
    cout << "========================================" << endl;

    cout << "\n¿Desea capturar datos? (S/N): ";
    cin >> continuar;

    while (continuar == 'S' || continuar == 's') {
        cout << "\n----------------------------------------" << endl;
        cout << " CAPTURA DE DATOS DEL COLABORADOR" << endl;
        cout << "----------------------------------------" << endl;

        cout << "Nombre del colaborador: ";
        cin.ignore(); // Limpiar buffer
        getline(cin, nombre);

        cout << "Edad del colaborador: ";
        cin >> edad;

        cout << "Sueldo del colaborador: ";
        cin >> sueldo;

        cout << "Antigüedad del colaborador (años): ";
        cin >> antiguedad;

        if (edad > 50) {
            total_jubilacion++;
        }

        suma_antiguedad += antiguedad;
        total_empleados++;

        cout << "\n¿Desea continuar capturando datos? (S/N): ";
        cin >> continuar;
    }

    cout << "\n========================================" << endl;
    cout << "             RESULTADOS FINALES" << endl;
    cout << "========================================" << endl;

    if (total_empleados > 0) {
        cout << left << setw(30) << "Empleados próximos a jubilarse:" << total_jubilacion << endl;
        cout << left << setw(30) << "Antigüedad promedio (años):" << fixed << setprecision(2) << (float)suma_antiguedad / total_empleados << endl;
    } else {
        cout << "No se capturaron datos." << endl;
    }
    system("pause");
    return 0;
}
