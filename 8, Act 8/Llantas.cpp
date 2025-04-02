// Actividad 8
// Programa: Llantas.cpp
// Descripción: Este algoritmo calcula el precio total con descuento para la compra de llantas según la cantidad adquirida.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Definición de variables
    int cant_llanta;
    float cost_llanta, precio, desc, precio_T;
    string nombreCliente;

    // Encabezado de bienvenida
    cout << "==========================================" << endl;
    cout << "            LLANTERA 'EL HUELE'           " << endl;
    cout << "==========================================" << endl;

    // Entrada de datos
    cout << "Nombre del cliente: ";
    getline(cin, nombreCliente);

    cout << "Cantidad de llantas a comprar: ";
    cin >> cant_llanta;

    cout << "Costo unitario de cada llanta: $";
    cin >> cost_llanta;

    // Cálculos
    precio = cant_llanta * cost_llanta;

    if (cant_llanta <= 2) {
        desc = precio * 0.20;
    } else if (cant_llanta == 3) {
        desc = precio * 0.30;
    } else {
        desc = precio * 0.40;
    }

    precio_T = precio - desc;

    // Estilo de impresión tipo POS
    cout << fixed << setprecision(2);
    cout << "\n========== RESUMEN DE COMPRA ==========" << endl;
    cout << "Cliente:            " << nombreCliente << endl;
    cout << "Llantas compradas:  " << cant_llanta << endl;
    cout << "Precio unitario:    $" << cost_llanta << endl;
    cout << "---------------------------------------" << endl;
    cout << "Subtotal:           $" << precio << endl;
    cout << "Descuento aplicado: -$" << desc << endl;
    cout << "TOTAL A PAGAR:      $" << precio_T << endl;
    cout << "==========================================" << endl;
    cout << "   ¡Gracias por su compra, vuelva pronto!  " << endl;
    cout << "==========================================" << endl;
    system("pause");

    return 0;
}
