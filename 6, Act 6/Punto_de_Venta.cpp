// Actividad 6
// Programa Punto_de_Venta.cpp
// Descripción: Este algoritmo gestiona un punto de venta en la frutería "El Gusano", calculando el precio a pagar con descuentos según la cantidad de compra.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Definición de variables
    string nom_p; // Nombre del producto
    float kilos, precioPorKilo, precioDescuento, precioFinal, costoManual;
    int SKU;

    // Inicialización de variables
    precioPorKilo = 0.0;
    precioDescuento = 0.0;
    precioFinal = 0.0;
    costoManual = 0.0;

    // Entrada de datos
    cout << "==========================================" << endl;
    cout << "         Frutería El Gusano" << endl;
    cout << "==========================================" << endl;
    cout << "Favor de indicar el SKU del producto: ";
    cin >> SKU;

    if (SKU == 353) { // SKU para Manzana glass
        cout << "Favor de indicar la cantidad de kilos: ";
        cin >> kilos;

        if (kilos > 3) {
            precioPorKilo = kilos * 65;
            precioDescuento = precioPorKilo * 0.25;
            precioFinal = precioPorKilo - precioDescuento;

            cout << "==========================================" << endl;
            cout << "Producto: Manzana glass" << endl;
            cout << "Precio por kilo: $65.00" << endl;
            cout << "Cantidad: " << kilos << " kg" << endl;
            cout << "Subtotal: $" << precioPorKilo << endl;
            cout << "Descuento (25%): -$"<< precioDescuento << endl;
            cout << "Total a pagar: $" << precioFinal << endl;
            cout << "==========================================" << endl;
        } else if (kilos > 0) {
            precioPorKilo = kilos * 65;
            precioDescuento = precioPorKilo * 0.05;
            precioFinal = precioPorKilo - precioDescuento;

            cout << "==========================================" << endl;
            cout << "Producto: Manzana glass" << endl;
            cout << "Precio por kilo: $65.00" << endl;
            cout << "Cantidad: " << kilos << " kg" << endl;
            cout << "Subtotal: $" << precioPorKilo << endl;
            cout << "Descuento (5%): -$" << precioDescuento << endl;
            cout << "Total a pagar: $" << precioFinal << endl;
            cout << "==========================================" << endl;
        } else {
            cout << "Cantidad no válida." << endl;
        }
    } else {
        cout << "Modo manual activado." << endl;
        cout << "Indique el nombre del producto: ";
        cin, nom_p;
        cout << "Indique el costo del producto: ";
        cin >> costoManual;
        cout << "==========================================" << endl;
        cout << "Producto: " << nom_p << endl;
        cout << "Total a pagar: $" << fixed << setprecision(2) << costoManual << endl;
        cout << "==========================================" << endl;
    }
    cout << "Gracias por su compra :D" << endl;
    system("pause");

    return 0;
}