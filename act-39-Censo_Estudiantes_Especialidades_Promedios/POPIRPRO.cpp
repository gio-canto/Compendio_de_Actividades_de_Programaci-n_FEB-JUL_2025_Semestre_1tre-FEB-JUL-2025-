// Actividad 39
// Programa: POPIRPRO.cpp
/*Descripción: Este programa realiza un censo de alumnos del CBTIS 134 turno vespertino,
registrando su nombre, semestre, especialidad y promedio, y calcula
el promedio de alumnos de Programación del sexto semestre*/
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaración de variables
    string nombre;         // Nombre completo del alumno
    int semestre;          // Semestre del alumno
    char especialidad;     // Especialidad (P, C, R)
    float promedio;        // Promedio general hasta el semestre anterior
    float promsex = 0;      // Suma de promedios de Programación sexto semestre
    int alumiproseix = 0;   // Cantidad de alumnos de Programación sexto semestre
    int k;                 // Contador de alumnos
    float sexk;            // Promedio general de sexto semestre

    // Presentación
    cout << "=============================================" << endl;
    cout << "        Sistema de Censo CBTIS 134" << endl;

    cout << "             Turno Vespertino" << endl;
    cout << "=============================================" << endl;

    // Captura 
    for (k = 1; k <= 5; k++) {
        cout << "\n--- Registro del Alumno #" << k << " ---\n";

        cout << "Ingrese el nombre completo del alumno: ";
        getline(cin, nombre);

        cout << "Ingrese el semestre (1 a 6): ";
        cin >> semestre;

        cout << "Ingrese la especialidad (P=Programacion, C=Contabilidad, R=Recursos Humanos): ";
        cin >> especialidad;

        cout << "Ingrese el promedio obtenido hasta el semestre anterior: ";
        cin >> promedio;
        cin.ignore(); 

        // Procesos internos
        if (especialidad == 'P' && semestre == 6) {
            alumiproseix++;
            promsex += promedio;
        }

        if (semestre == 2 && promedio >= 8 && especialidad == 'P') {
            cout << "\n>> El alumno \"" << nombre << "\" de la especialidad de Programación "
                 << "tiene un promedio mayor o igual a 8.\n";
        }        
    }

    // Resultados
    cout << "\n=============================================" << endl;
    cout << "                 Resultados" << endl;
    cout << "=============================================" << endl;

    if (alumiproseix > 0) {
        sexk = promsex / alumiproseix;
        cout << "El promedio de los alumnos de Programacion de sexto semestre es: " << sexk << endl;
    } else {
        cout << "No hubo alumnos de sexto semestre de Programacion registrados." << endl;
    }

    cout << "=============================================" << endl;
    cout << "           Fin del Sistema de Censo" << endl;
    cout << "=============================================" << endl;

    system("pause");
    return 0;
}
