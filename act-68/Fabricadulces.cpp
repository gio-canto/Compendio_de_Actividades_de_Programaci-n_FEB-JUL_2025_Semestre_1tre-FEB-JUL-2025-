// Actividad 68
// Programa: Fabricadulces.cpp
// Descripción: Registro y análisis de sueldos de empleados en una fábrica de dulces
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    string nom;            // Nombre del empleado
    double suetemp = 0;    // Sueldo del empleado
    double Msue = 0;       // Cantidad total de sueldo a mujeres con menos de 20 años de antigüedad
    double sue5 = 0;       // Cantidad de dinero recaudado por empleados que ganan más de $5,000
    int suet5 = 0;         // Cantidad de personas que ganan más de $5,000
    double suetprom = 0;   // Promedio de sueldo de personas que ganan más de $5,000
    char sex;              // Sexo del empleado
    int ant;               // Antigüedad del empleado
    int i;                 // Variable de control

    const int TOTAL_EMPLEADOS = 300;

    cout << "===============================" << endl;
    cout << "FABRICA DE DULCES JUAN SA DE CV" << endl;
    cout << "===============================" << endl;
    cout << "Cantidad de empleados: " << TOTAL_EMPLEADOS << endl;

    for (i = 1; i <= TOTAL_EMPLEADOS; ++i) {
        cout << "------------------------------------------" << endl;
        cout << "\n=<< NUEVO REGISTRO >>=" << endl;
        cout << "= Empleado #" << i << endl;

        cin.ignore();
        cout << "Ingrese el Nombre del empleado: ";
        getline(cin, nom);

        cout << "Indique el sexo del empleado (H = Hombre, M = Mujer, X = Otro): ";
        cin >> sex;

        cout << "Indique la antigüedad del empleado (en años): ";
        cin >> ant;

        cout << "Indique el sueldo mensual del empleado: $";
        cin >> suetemp;
        
        if ((sex == 'M' || sex == 'm') && ant < 20) {
            Msue += suetemp;
        }


        if (suetemp > 5000) {
            sue5 += suetemp;
            suet5++;
        }

        cout << "=<< Registro Exitoso >>=" << endl;
    }

    if (suet5 > 0) {
        suetprom = sue5 / suet5;
    }

    cout << "\n===============================" << endl;
    cout << "FABRICA DE DULCES JUAN SA DE CV" << endl;
    cout << "Reporte de datos" << endl;
    cout << "===============================" << endl;
    cout << fixed << setprecision(2);
    cout << "Cantidad de empleados: " << TOTAL_EMPLEADOS << endl;
    cout << "Cantidad de dinero pagado a empleadas con antigüedad menor a 20 años: $"
         << Msue << endl;

    if (suet5 > 0) {
        cout << "Promedio de sueldo de empleados con sueldo mayor a $5,000: $"
             << suetprom << endl;
    } else {
        cout << "No hay empleados que ganen más de $5,000." << endl;
    }

    return 0;
}
