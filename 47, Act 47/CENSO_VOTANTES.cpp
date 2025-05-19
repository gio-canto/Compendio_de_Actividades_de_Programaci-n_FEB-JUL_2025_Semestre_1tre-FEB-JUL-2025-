// Actividad 47
// Programa CENSO_VOTANTES.cpp
// Descripción: Este programa registra un censo de votantes y determina si hay más mujeres solteras o casadas mayores de edad que pueden votar.
// Autor: Gio Antonio Canto Gómez
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;        // Nombre del censado
    int sexo;             // 1 = Masculino, 2 = Femenino
    char estado_civil;    // S = Soltero/a, C = Casado/a
    int edad;             // Edad del censado
    char continuar;       // V = Sí, F = No
    int mujeres_solteras; // Contador de mujeres solteras mayores de edad
    int mujeres_casadas;  // Contador de mujeres casadas mayores de edad

    mujeres_solteras = 0;
    mujeres_casadas = 0;


    cout << "========================================" << endl;
    cout << "        SISTEMA DE CENSO DE VOTANTES    " << endl;
    cout << "========================================" << endl << endl;

    cout << "¿Desea comenzar el censo? (V = Sí, F = No): ";
    cin >> continuar;

    while (continuar == 'V' || continuar == 'v') {
        cout << "\n----------------------------------------" << endl;
        cout << "Ingreso de datos del censado" << endl;
        cout << "----------------------------------------" << endl;

        cin.ignore();
        cout << "Nombre completo: ";
        getline(cin, nombre);

        cout << "Sexo (1 = Masculino, 2 = Femenino): ";
        cin >> sexo;

        cout << "Estado civil (S = Soltero/a, C = Casado/a): ";
        cin >> estado_civil;

        cout << "Edad: ";
        cin >> edad;

        if (sexo == 2 && edad >= 18) {
            if (estado_civil == 'S' || estado_civil == 's') {
                mujeres_solteras++;
            } else if (estado_civil == 'C' || estado_civil == 'c') {
                mujeres_casadas++;
            }
        }

        cout << "\n¿Desea continuar con otro registro? (V = Sí, F = No): ";
        cin >> continuar;
    }

    cout << "\n========================================" << endl;
    if (mujeres_casadas > mujeres_solteras) {
        cout << "Resultado: Hay más mujeres casadas que pueden votar." << endl;
    } else if (mujeres_solteras > mujeres_casadas) {
        cout << "Resultado: Hay más mujeres solteras que pueden votar." << endl;
    } else {
        cout << "Resultado: Hay igual número de mujeres solteras y casadas que pueden votar." << endl;
    }
    cout << "========================================" << endl;

    system("pause");
    return 0;
}
