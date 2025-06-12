// Actividad 68
// Programa: Fabricadulces.cpp
// Descripción: 
// Autor: Gio Antonio Canto Gómez
#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

int main() {

    string nom; // Nombre del empleado
    double suetemp; // Sueldo del empleado
    double Msue ;// Cantidad total de empleados a los que le paga mujrees menores de 20 años de antiguedad
    double sue5 ; // Cantidad de dinero recaudado por los que ganan mayor a 5,000
    int suet5 ; // Cantidad de presoans que ganan mas de 5,00
    double suetprom ; // Promedio de perosnas dinero ganar mas de 5,000
    char sex ; // Sexo del empelado
    int ant ; // Antiguedad del empleado
    int i ; // Varibale de control

    cout << "===============================" << endl;
    cout << "FABRICA DE DULCES JUAN SA DE CV" << endl; 
    cout << "===============================" << endl;
    cout << "Cantidad de empleados:   300" << endl;

    for ( i = 1; i <= 300; ++i) {
        cout << "------------------------------------------" << endl;
        cin.ignore () ;
        cout << "\n=<<NUEVO REGISTRO>>" << endl;
        cout << "= Empleado #" << i << endl;
        cout << "Ingrese el Nombre del empleado: " ;
        getline (cin, nom);
        cout << "Indique el sexo del empleado (H = Hombre, M= Mujer X = Otros): " ;
        cin >> sex;
        cout << "Indique la antiguedad del empleado: " ;
        cin >> ant;
        cout << "Indique el sueldo mensual del empelado: " ;
        cin >> suetemp ;

        if (sex == tolower('M') && ant < 20 ) {
            Msue += suetemp ;
        }
        if (sex == tolower('M') && ant < 20 ) {
            sue5 += suetemp ;
            suet5 ++;
        }
        cout << "\n=<<Registo Existoso>>" << endl;

    }

    cout << "\n===============================" << endl;
    cout << "FABRICA DE DULCES JUAN SA DE CV" << endl; 
    cout << "Reporte de datos" << endl; 
    cout << "===============================" << endl;
    cout << fixed ;
    cout << "Cantidad de empleados:   300" << endl;
    cout << "Cantidad de dinero pagado a empleadas con antiudaada menor a 20 años : $" << Msue << endl;
    suetprom = (suet5 * 100 ) / sue5 ;
    cout << "Cantidad de dinero pagado a empleados con sueldo mayor a $5,000: $" << suetprom << endl;

}