// Actividad 5
// Programa: prom.cpp
// Descripción: El presente algoritmo tiene el objetivo de calcular el promedio y reportarlo.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float p_1, p_2, p_3, suma, promedio_final;
    char nom_al[50];   // Nombre del alumno
    char nom_as[50];   // Nombre de la asignatura
    char nom_mast[50]; // Nombre del maestro

    // Entrada de datos
    cout << "Ingrese el nombre del maestro: ";
    cin >> nom_mast;

    cout << "Ingrese el nombre de la asignatura: ";
    cin >> nom_as;

    cout << "Ingrese el nombre del alumno: ";
    cin >> nom_al;

    cout << "Ingrese el promedio del primer parcial: ";
    cin >> p_1;

    cout << "Ingrese el promedio del segundo parcial: ";
    cin >> p_2;

    cout << "Ingrese el promedio del tercer parcial: ";
    cin >> p_3;

    // Cálculo
    suma = p_1 + p_2 + p_3;
    promedio_final = suma / 3;

    // Salida tipo oficio
    cout << "\n===========================================" << endl;
    cout << "           OFICIO DE CALIFICACIONES        " << endl;
    cout << "         DEPARTAMENTO DE ESCOLARES         " << endl;
    cout << "===========================================\n" << endl;

    cout << "Por medio del presente, se informa al alumno(a) " << nom_al << "," << endl;
    cout << "que ha cursado la asignatura \"" << nom_as << "\", impartida por el maestro " << nom_mast << "." << endl;

    cout << "\nPromedio final obtenido: " << promedio_final << endl;

    if (promedio_final < 6.0) {
        cout << "Resultado: NO ACREDITÓ la asignatura." << endl;
    } else {
        cout << "Resultado: ACREDITÓ la asignatura." << endl;
    }

    cout << "\nFavor de confirmar dicha información y firmar de enterado en Servicios Escolares." << endl;
    cout << "\nAtentamente," << endl;
    cout << "Departamento de Servicios Escolares" << endl;
    system("pause");

    return 0;
}
