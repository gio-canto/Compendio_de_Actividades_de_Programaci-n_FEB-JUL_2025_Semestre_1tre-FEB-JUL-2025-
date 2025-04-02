// Actividad 3
// Programa: tasa_de_cambio.cpp
// Descripción: El presente programa tiene el propósito de calcular la tasa de cambio de una cantidad en MXN a USD y EUR, utilizando tasas de conversión proporcionadas por el usuario.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declaraciones
    float tasa_usd_mx, tasa_eur_mx;
    float cantidad_mxn, cantidad_usd, cantidad_eur;

    // Encabezado 
    cout << "==========================================" << endl;
    cout << "           SERVICIO DE CAMBIO MXN         " << endl;
    cout << "              CONVERSIÓN DIVISAS          " << endl;
    cout << "==========================================" << endl;

    // Entrada de datos
    cout << "Ingrese la cantidad en moneda nacional (MXN): $";
    cin >> cantidad_mxn;

    cout << "Ingrese la tasa de cambio de USD a MXN: ";
    cin >> tasa_usd_mx;

    cout << "Ingrese la tasa de cambio de EUR a MXN: ";
    cin >> tasa_eur_mx;

    // Cálculos
    cantidad_usd = cantidad_mxn / tasa_usd_mx;
    cantidad_eur = cantidad_mxn / tasa_eur_mx;

    // Salida de datos  
    cout << "\n------------- DETALLE DE CAMBIO ----------" << endl;
    cout << "Cantidad ingresada (MXN): $" << cantidad_mxn << endl;
    cout << "Tasa USD/MXN:              " << tasa_usd_mx << endl;
    cout << "Tasa EUR/MXN:              " << tasa_eur_mx << endl;
    cout << "------------------------------------------" << endl;
    cout << "Equivalente en USD:        $" << cantidad_usd << endl;
    cout << "Equivalente en EUR:        $" << cantidad_eur << endl;
    cout << "==========================================" << endl;
    cout << "         ¡Gracias por utilizar el          " << endl;
    cout << "           servicio de cambio!             " << endl;
    cout << "==========================================" << endl;
    system("pause");

    return 0;
}
