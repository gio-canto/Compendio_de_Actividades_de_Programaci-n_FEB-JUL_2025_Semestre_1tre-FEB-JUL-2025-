// Actividad 43
// Programa: CASETAV2.cpp
//Descripción: Este programa registra los vehículos que pasan por una caseta de cobro. Calcula el promedio de personas transportadas en autobuses
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <string>
#include <iomanip>    // Para std::setprecision
#include <cstdlib>    // Para system("pause")
using namespace std;

int ca;             // Cantidad de autobuses registrados
int spa;            // Suma total de personas en autobuses
int tipoVehiculo;   // Tipo de vehículo (1=Auto, 2=Autobús, 3=Camión, 4=Moto)
int npv;            // Número de personas a bordo
char respuesta;     // Respuesta del usuario para continuar
float promedio;     // Promedio de personas por autobús

int main() {
    ca = 0;
    spa = 0;

    cout << "\n==============================================" << endl;
    cout << "    [Sistema] RNO/ITS - CAPUFE - SCT - V2" << endl;
    cout << "==============================================" << endl;

    do {
        cout << "\n----------------------------------------------" << endl;
        cout << "           [Ingreso de Vehículo]" << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Seleccione el tipo de vehículo:" << endl;
        cout << "  1. Automóvil" << endl;
        cout << "  2. Autobús" << endl;
        cout << "  3. Camión" << endl;
        cout << "  4. Moto" << endl;
        cout << "\nTipo de vehículo (1-4): ";
        cin >> tipoVehiculo;

        cout << "Ingrese el número de personas a bordo: ";
        cin >> npv;

        if (tipoVehiculo == 2) {
            ca++;
            spa += npv;
        }

        cout << "\n¿Desea continuar con otro vehículo? (S/N): ";
        cin >> respuesta;
        respuesta = toupper(respuesta); // Convertir respuesta a mayúscula

        cout << "\n[Esperando próximo vehículo...]\n" << endl;
        system("pause");

    } while (respuesta == 'S');

    cout << "\n==============================================" << endl;
    cout << "            [Corte Final del Turno]" << endl;
    cout << "==============================================" << endl;

    if (ca > 0) {
        promedio = static_cast<float>(spa) / ca;
        cout << fixed << setprecision(2);
        cout << "\nEl promedio de personas que ingresaron por autobús fue: " << promedio << endl;
    } else {
        cout << "\nNo se registraron autobuses durante este turno." << endl;
    }

    cout << "\n==============================================" << endl;
    cout << "    [Fin del reporte - Sistema CASETAV2]" << endl;
    cout << "==============================================\n" << endl;

    system("pause");
    return 0;
}
