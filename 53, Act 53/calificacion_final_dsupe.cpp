// Actividad 54
// Programa: calificacion_final_dsupe.cpp
// Descripción: Este algoritmo calcula la calificación final de la materia DSUPE a partir de tres parciales, el examen final y el trabajo final.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float parcial1, parcial2, parcial3;
    float examen_final, trabajo_final;
    float promedio_parciales, calificacion_final;

    // Encabezado
    cout << "----------------------------------------------" << endl;
    cout << "  CÁLCULO DE CALIFICACIÓN FINAL dsupe            " << endl;
    cout << "----------------------------------------------" << endl;

    // Entrada de datos
    cout << "Ingrese la calificación del primer parcial: ";
    cin >> parcial1;

    cout << "Ingrese la calificación del segundo parcial: ";
    cin >> parcial2;

    cout << "Ingrese la calificación del tercer parcial: ";
    cin >> parcial3;

    cout << "Ingrese la calificación del examen final: ";
    cin >> examen_final;

    cout << "Ingrese la calificación del trabajo final: ";
    cin >> trabajo_final;

    // Cálculos
    promedio_parciales = (parcial1 + parcial2 + parcial3) / 3;
    calificacion_final = (promedio_parciales * 0.55) + (examen_final * 0.30) + (trabajo_final * 0.15);

    // Salida de resultados
    cout << "\nLa calificación final es: " << calificacion_final << endl;
    system ("pause");
    return 0;
}
