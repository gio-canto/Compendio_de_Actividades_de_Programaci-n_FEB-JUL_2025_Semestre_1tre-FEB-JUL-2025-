// Actividad 22
// Programa: Promedios_Estudiantes.cpp
// Descripción: Este programa calcula e imprime el promedio de 34 estudiantes en distintas materias. 
// Muestra el nombre, edad, promedios individuales y el promedio final.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declaración de variables
    string nombre; // Nombre del estudiante
    int edad = 0; // Edad del estudiante
    float peneme = 0.0; // Promedio de Pensamiento Matemático I
    float culta1 = 0.0; // Promedio de Cultura Digital I
    float matei = 0.0; // Promedio de Materia y sus Interacciones I
    float huma = 0.0; // Promedio de Humanidades I
    float social = 0.0; // Promedio de Ciencias Sociales
    float socioemocional = 0.0; // Acreditación de Recursos Socioemocionales (A = 10, NO ACREDITADO = 5)
    float promedio = 0.0; // Promedio final del estudiante
    float acu = 0.0; // Acumulador de promedios para calcular el promedio general

    // Entrada de datos
    cout << "========================================" << endl;
    cout << "SISTEMA DE CALCULO DE PROMEDIO GENERAL" << endl;
    cout << "========================================" << endl;

    for (int cont = 1; cont <= 34; cont++) { 
        cout << "========================================" << endl;
        cout << "Estudiante #" << cont << endl;
        cout << "========================================" << endl;
        cin.ignore(); // Esto es CLAVE para limpiar el salto de línea anterior
        cout << "Ingrese el nombre del estudiante: ";
        getline(cin, nombre);

        cout << "Ingrese la edad del estudiante: ";
        cin >> edad;
        cout << "Ingrese el promedio de Pensamiento Matemático I: ";
        cin >> peneme;
        cout << "Ingrese el promedio de Cultura Digital I: ";
        cin >> culta1;
        cout << "Ingrese el promedio de Materia y sus Interacciones I: ";
        cin >> matei;
        cout << "Ingrese el promedio de Humanidades I: ";
        cin >> huma;
        cout << "Ingrese el promedio de Ciencias Sociales: ";
        cin >> social;
        cout << "Ingrese la acreditación de Recursos Socioemocionales (A = 10, NO ACREDITADO = 5): ";
        cin >> socioemocional;

        promedio = (peneme + culta1 + matei + huma + social + socioemocional) / 6;
        acu += promedio;

        cout << fixed << setprecision(2);
        cout << "========================================" << endl;
        cout << "CALIFICACIONES FINALES" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Nombre del estudiante: " << nombre << endl;
        cout << "Promedio final del estudiante: " << promedio << endl;
    cout << "========================================" << promedio << endl;

    }

    // Promedio general
    float promedioGeneral = acu / 34.0;
    cout << "========================================" << endl;
    cout << "PROMEDIO GENERAL DE LOS ESTUDIANTES: " << fixed << setprecision(2) << promedioGeneral << endl;
    cout << "========================================" << endl;

    system("pause");
    return 0;
}