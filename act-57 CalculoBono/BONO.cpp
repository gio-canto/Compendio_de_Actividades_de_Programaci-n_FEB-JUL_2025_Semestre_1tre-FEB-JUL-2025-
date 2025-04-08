// Actividad 56, del ejemplo 3 del libro (Version 2.0)
// Programa BONO.cpp
// Programa que calcula la gratificación anual de un trabajador de
// acuerdo al número de horas trabajadas y al número de horas de faltas
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    // Declaración de variables
    float RES;
    int H_TRA, H_FAL, Bono;

    // Presentación del programa
    cout << "\n=====================================================" << endl;
    cout << "\t\tCOMPAÑÍA X" << endl;
    cout << "=====================================================" << endl;

    // Entrada de datos
    cout << "\nIngrese el número de horas trabajadas: ";
    cin >> H_TRA;
    cout << "Ingrese el número de horas de ausencia: ";
    cin >> H_FAL;

    // Cálculo de las horas resultantes
    RES = H_TRA - (2.0 / 3.0) * H_FAL;

    // Cálculo de la gratificación
    if (RES > 40)
        Bono = 500;
    else if (RES > 30 && RES <= 40)
        Bono = 400;
    else if (RES > 20 && RES <= 30)
        Bono = 300;
    else if (RES > 10 && RES <= 20)
        Bono = 200;
    else
        Bono = 100;

    // Salida de resultados
    cout << "\n=====================================================" << endl;
    cout << "\t\tRESULTADOS" << endl;
    cout << "=====================================================" << endl;
    cout << "Horas trabajadas efectivas: " << fixed << setprecision(2) << RES << endl;
    cout << "Gratificación anual: $" << Bono << endl;
    cout << "=====================================================" << endl;

    system("pause");
    return 0;
} // Fin de main
