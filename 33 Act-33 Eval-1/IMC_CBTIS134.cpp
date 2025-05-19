// Actividad 34 , Evaluación 1
// Programa: IMC_CBTIS134rea.cpp
// Descripción: Este programa calcula el Índice de Masa Corporal (IMC) de los alumnos del CBTIS 134 en turno vespertino y determina su clasificación. También contabiliza cuántos tienen bajo peso.
// Autor: Gio Antonio Canto Gómez

// Programa: IMC_CBTIS134.cpp
// Descripción: Calcula el IMC de los alumnos del CBTIS 134 turno vespertino y clasifica su estado nutricional.

#include <iostream>
#include <iomanip> 
#include <cmath>   

using namespace std;

int main() {
    // Declaración de variables
    string nombre, especialidad;
    float peso, estatura, imc;
    int bp = 0; // Contador de alumnos con bajo peso

    cout << "==============================================" << endl;
    cout << "  Sistema Automatizado del IMC - CBTIS 134 T.V." << endl;
    cout << "==============================================" << endl << endl;

    for (int i = 1; i <= 680; i++) {
        cout << "Alumno #" << i << endl;
        
        cout << "Ingrese el nombre del alumno: ";
        getline(cin, nombre);
         
        cout << "Ingrese la especialidad del alumno: ";
        getline(cin, especialidad);

        cout << "Ingrese el peso del alumno en kilogramos (kg): ";
        cin >> peso;

        cout << "Ingrese la estatura del alumno en metros (m): ";
        cin >> estatura;
        cin.ignore(); // Limpiar el buffer para el siguiente getline

        // Cálculo del IMC
        imc = peso / pow(estatura, 2);

        // Mostrar IMC con dos decimales
        cout << fixed << setprecision(2);

        // Clasificación del IMC
        if (imc < 18.5) {
            cout << "El alumno " << nombre << " de la especialidad " << especialidad
                 << " tiene un IMC de " << imc << " y presenta BAJO PESO." << endl;
            bp++;
        }
        else if (imc >= 18.5 && imc <= 24.9) {
            cout << "El alumno " << nombre << " de la especialidad " << especialidad
                 << " tiene un IMC de " << imc << " y presenta PESO NORMAL." << endl;
        }
        else if (imc >= 25.0 && imc <= 29.9) {
            cout << "El alumno " << nombre << " de la especialidad " << especialidad
                 << " tiene un IMC de " << imc << " y presenta SOBREPESO." << endl;
        }
        else {
            cout << "El alumno " << nombre << " de la especialidad " << especialidad
                 << " tiene un IMC de " << imc << " y presenta OBESIDAD." << endl;
            cout << "**-> Sistema: That's obese. :D**" << endl;
        }

        cout << "----------------------------------------------" << endl;
    }

    cout << endl << "==============================================" << endl;
    cout << "Cantidad de alumnos con bajo peso o desnutrición: " << bp << endl;
    cout << "==============================================" << endl;

    system("pause");
    return 0;
}
