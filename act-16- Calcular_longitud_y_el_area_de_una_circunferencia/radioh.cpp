// Actividad 16
// Programa radioh.cpp
// Descripción: Este programa calcula la longitud y el área de una circunferencia con base en el radio ingresado por el usuario
// Autor: Gio Antonio Canto Gómez
#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    double radio, longitud, area;

    cout << "========================================" << endl;
    cout << "      CALCULO DE CIRCUNFERENCIA         " << endl;
    cout << "========================================" << endl;
    cout << "Ingrese el radio de la circunferencia: ";
    cin >> radio;
    
    longitud = 2 * M_PI * radio;
    area = M_PI * pow(radio, 2);

    cout << fixed;
    cout.precision(2);
    cout << "\nResultados:" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Longitud de la circunferencia: " << longitud << " unidades" << endl;
    cout << "Área de la circunferencia:     " << area << " unidades cuadradas" << endl;
    cout << "----------------------------------------" << endl;

    system("pause");
    
    return 0;
}
