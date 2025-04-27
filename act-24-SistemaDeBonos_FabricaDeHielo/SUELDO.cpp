// Actividad 24
// Programa: SUELDO.cpp
// Descripción: Este programa calcula los bonos otorgados a los empleados de una fábrica de hielo.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
#include <cctype> // Para toupper()
using namespace std;

int main() {
    // Declaración de variables
    string nom_emp; // Nombre del empleado
    char sex;       // Sexo del empleado (H para hombre, M para mujer)
    int eda;        // Edad del empleado
    int bonis;      // Porcentaje de bono aplicado
    double sue;     // Sueldo del empleado
    double bono_f;  // Monto del bono calculado

    cout << endl;
    cout << "==================================================" << endl;
    cout << "     Sistema de bonos de la fábrica de hielo V5      " << endl;
    cout << "==================================================" << endl;
    cout << "Ingrese los datos solicitados" << endl;

    for (int i = 1; i <= 5; i++) { // Cambia 5 por el número de empleados que desees
        
        cout << "\n--------------------------------------------" << endl;
        cout << "Empleado #" << i << endl;
        cin.ignore(); // Primero se limpia el buffer
        cout << "Indique el nombre del colaborador: ";
        getline(cin, nom_emp);

        
        cout << "Ingrese la edad del colaborador: ";
        cin >> eda;

        cout << "Ingrese su sexo biológico (H = Hombre, M = Mujer): ";
        cin >> sex;
        sex = toupper(sex); // Asegurarse que sea mayúscula

        cout << "Ingrese el sueldo del colaborador: ";
        cin >> sue;

        // Proceso de cálculo de bonos
        if (sex == 'H') {
            bonis = 15; // Porcentaje de bono para hombres 
            bono_f = (sue * bonis) / 100.0;

            cout << "\n============================================" << endl;
            cout << "SISTEMA DE BONIFICACIONES FABRICA DE HIELO" << endl;
            cout << "============================================" << endl;
            cout << "El empleado " << nom_emp << " con una edad de " << eda
                 << " años, obtendrá una bonificación de " << bonis << "%." << endl;
            cout << "Pague al colaborador: $" << fixed << setprecision(2) << bono_f << endl;
        }
        else if (sex == 'M') {
            bonis = 20; // Porcentaje de bono para mujeres 
            bono_f = (sue * bonis) / 100.0;

            cout << "\n============================================" << endl;
            cout << "SISTEMA DE BONIFICACIONES FABRICA DE HIELO" << endl;
            cout << "============================================" << endl;
            cout << "La empleada " << nom_emp << " con una edad de " << eda
                 << " años, obtendrá una bonificación de " << bonis << "%." << endl;
            cout << "Pague a la colaboradora: $" << fixed << setprecision(2) << bono_f << endl;
        }
        else {
            bonis = 0;
            bono_f = 0;

            cout << "\n============================================" << endl;
            cout << "SISTEMA DE BONIFICACIONES FABRICA DE HIELO" << endl;
            cout << "============================================" << endl;
            cout << ">>> Error: El sexo indicado no se encuentra en los parámetros preestablecidos (Error 404)." << endl;
            cout << "El empleado " << nom_emp << " con una edad de " << eda << " años, no obtendrá bonificación." << endl;
            cout << "Pague al colaborador: $" << fixed << setprecision(2) << bono_f << endl;
        }

        cout << "============================================" << endl;
        cout << "¡Gracias por su dedicación!" << endl;
    }

    system("pause");
    return 0;
}
