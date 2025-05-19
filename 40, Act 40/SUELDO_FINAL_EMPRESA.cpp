// Actividad 40
// Programa: SUELDO_FINAL_EMPRESA.cpp
/*Descripción: Este programa calcula el sueldo final de cada empleado de una empresa,
aplicando un aumento según su antigüedad, y contabiliza cuántos empleados
tienen sueldo final mayor a $5,000*/
// Autor: Gio Antonio Canto Gómez


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nombre;          // Nombre del empleado
    int num_empleado;       // Número del empleado
    float sueldo_base;      // Sueldo base del empleado
    float sueldo_final;     // Sueldo final con incremento
    int antiguedad;         // Antigüedad del empleado en años
    int mayores_5000;       // Contador de empleados con sueldo final mayor a $5,000
    int contador;           // Contador del ciclo

    mayores_5000 = 0;

    cout << "==========================================" << endl;
    cout << setw(30) << "INICIO DE CAPTURA" << endl;
    cout << "==========================================" << endl;

    for (contador = 1; contador <= 220; contador++) {
        cout << "\nEmpleado #" << contador << endl;
        cout << "------------------------------------------" << endl;

        cout << "Ingrese el nombre del empleado: ";
        getline(cin, nombre);

        cout << "Ingrese el número de empleado: ";
        cin >> num_empleado;

        cout << "Ingrese el sueldo base: ";
        cin >> sueldo_base;

        cout << "Ingrese la antigüedad en años: ";
        cin >> antiguedad;
        cin.ignore();

        if (antiguedad < 10) {
            sueldo_final = sueldo_base + (sueldo_base * 0.10f);
        } else {
            sueldo_final = sueldo_base + (sueldo_base * 0.20f);
        }

        if (sueldo_final > 5000) {
            mayores_5000++;
        }

        cout << "\n========= RECIBO DEL EMPLEADO ==========" << endl;
        cout << left << setw(25) << "Nombre:" << nombre << endl;
        cout << left << setw(25) << "Sueldo final:" << "$" << fixed << setprecision(2) << sueldo_final << endl;
        cout << "==========================================" << endl;
    }

    cout << "\n******************************************" << endl;
    cout << setw(30) << "RESUMEN FINAL" << endl;
    cout << "******************************************" << endl;
    cout << "Empleados con sueldo mayor a $5,000: " << mayores_5000 << endl;
    cout << "******************************************" << endl;
    
    system("pause");
    return 0;
}
