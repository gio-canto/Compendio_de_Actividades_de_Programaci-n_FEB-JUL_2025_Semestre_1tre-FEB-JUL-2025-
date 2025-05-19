// Actividad 36
// Programa: FABOCHOS.cpp
// Descripción: Este programa calcula los ingresos totales de los empleados hombres y mujeres de una fábrica de colchones, y determina qué grupo obtuvo más ingresos
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaración de variables
    int i;              // Variable de control del ciclo
    string noma;        // Nombre del colaborador
    float sueldo;       // Sueldo del colaborador
    int ant;            // Antigüedad del colaborador
    char sex;           // Sexo del colaborador (H = Hombre, M = Mujer)
    float sumH = 0;     // Suma de sueldos de hombres
    float sumM = 0;     // Suma de sueldos de mujeres

    cout << "==========================================" << endl;
    cout << "  Sistema Automatizado - Fábrica de Colchones" << endl;
    cout << "==========================================" << endl;

    for (i = 1; i <= 60; i++) {
        cout << "\nColaborador #" << i << endl;
        cout << "Ingrese el nombre del colaborador: ";
        getline(cin, noma);

        cout << "Ingrese el sueldo del colaborador: ";
        cin >> sueldo;

        cout << "Ingrese la antigüedad del empleado: ";
        cin >> ant;

        cout << "Ingrese el sexo del empleado (H=Hombre, M=Mujer): ";
        cin >> sex;
        cin.ignore(); 

        if (sex == 'H' || sex == 'h') {
            sumH += sueldo;
        } else {
            sumM += sueldo;
        }
    }

    cout << "\n==========================================" << endl;
    if (sumH > sumM) {
        cout << "Los hombres obtuvieron más ingresos." << endl;
    } else {
        cout << "Las mujeres obtuvieron más ingresos." << endl;
    }
    cout << "==========================================" << endl;
    
    system("pause");
    return 0;
}
