// Actividad 55, del ejemplo 2 del libro (Version 2.0)
// Programa SALARIOS.cpp
// Calcula el salario bruto y el salario neto de un trabajador
// de acuerdo a su salario y al número de horas que trabaja
// Autor: Gio Antonio Canto Gómez
// Programa SALARIOS


#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    // Declaración de variables
    float Sal_bruto, Sal_neto, Sueldo;
    int HT;

    // Presentación del programa
    cout << "===================================" << endl;
    cout << "         Muebles Troncoso          " << endl;
    cout << "===================================" << endl;
    cout << "\nIntroduzca los siguientes datos:" << endl;

    // Entrada de datos
    cout << "\nSueldo del trabajador: ";
    cin >> Sueldo;
    cout << "Número de horas trabajadas: ";
    cin >> HT;

    // Cálculo de los salarios
    if (HT <= 40)
        Sal_bruto = HT * Sueldo;
    else
        Sal_bruto = 1.5 * Sueldo * (HT - 40) + 40 * Sueldo;

    if (Sal_bruto <= 650) {
        Sal_neto = Sal_bruto;
    } else {
        Sal_neto = Sal_bruto - (1.5 + 0.045 * Sal_bruto);
    }

    // Presentación de resultados
    cout << "\n===================================" << endl;
    cout << "           Resultados              " << endl;
    cout << "===================================" << endl;
    cout << fixed << setprecision(2);
    cout << "Salario bruto: $" << Sal_bruto << endl;
    cout << "Salario neto : $" << Sal_neto << endl;
    cout << "===================================" << endl;
    
    system("pause");
    return 0;
}
