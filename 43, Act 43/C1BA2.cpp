// Actividad 43
// Programa: C1BA2.cpp
/*Descripción: Este programa recopila datos de estudiantes del CBTis 134 y calcula el promedio de edad 
de los estudiantes mayores de 17 años y de los menores o iguales a 17.*/
// Autor: Gio Antonio Canto Gómez
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaración de variables
    string nombre;               // Nombre del alumno
    string matricula;             // Matrícula del alumno
    int edad;                    // Edad del alumno
    string respuesta;             // Respuesta del usuario para continuar
    int sumaMayores;              // Suma de edades de estudiantes mayores de 17 años
    int contadorMayores;          // Número de estudiantes mayores de 17 años
    int sumaMenores;              // Suma de edades de estudiantes menores o iguales a 17
    int contadorMenores;          // Número de estudiantes menores o iguales a 17
    float promedioMayores;        // Promedio de edad de estudiantes mayores de 17
    float promedioMenores;        // Promedio de edad de estudiantes menores o iguales a 17

    // Inicialización de variables
    sumaMayores = 0;
    contadorMayores = 0;
    sumaMenores = 0;
    contadorMenores = 0;

    cout << "\n=============================================\n";
    cout << "      SISTEMA DE CENSO ESTUDIANTIL CBTis 134  \n";
    cout << "=============================================\n\n";

    cout << "¿Desea capturar datos? (SI/NO)\n>> ";
    getline(cin, respuesta);

    while (respuesta == "SI" || respuesta == "si") {
        cout << "\n---------------------------------------------\n";
        cout << " Captura de datos del estudiante \n";
        cout << "---------------------------------------------\n";

        cout << "Nombre: ";
        getline(cin, nombre);

        cout << "Matrícula: ";
        getline(cin, matricula);

        cout << "Edad: ";
        cin >> edad;
        cin.ignore(); // Limpiar buffer para próximas entradas

        if (edad > 17) {
            sumaMayores += edad;
            contadorMayores++;
        } else {
            sumaMenores += edad;
            contadorMenores++;
        }

        cout << "\n¿Desea capturar otro estudiante? (SI/NO)\n>> ";
        getline(cin, respuesta);
    }

    cout << "\n=============================================\n";
    cout << "                 RESULTADOS                  \n";
    cout << "=============================================\n";

    if (contadorMayores > 0) {
        promedioMayores = static_cast<float>(sumaMayores) / contadorMayores;
        cout << "Promedio de edad (>17 años): " << promedioMayores << "\n";
    } else {
        cout << "No se ingresaron datos de estudiantes mayores de 17 años.\n";
    }

    if (contadorMenores > 0) {
        promedioMenores = static_cast<float>(sumaMenores) / contadorMenores;
        cout << "Promedio de edad (<=17 años): " << promedioMenores << "\n";
    } else {
        cout << "No se ingresaron datos de estudiantes menores o iguales a 17 años.\n";
    }

    cout << "\n=============================================\n";
    cout << "      Gracias por usar el sistema. ¡Hasta pronto!      \n";
    cout << "=============================================\n";

    system("pause");
    return 0;
}
