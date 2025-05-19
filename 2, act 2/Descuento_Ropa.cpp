// Actividad 2
// Programa: Descuento_Ropa.cpp
// Descripción: Este algoritmo calcula el subtotal, la cantidad de descuento y el total a pagar por una blusa con un descuento aplicado.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Definición de variables
    float precio_unitario, porcentaje, subtotal, cantidad_descuento, total, uno_de_cien;
    int cantidad;

    // Encabezado
    cout << "==========================================" << endl;
    cout << "             Tienda Departamental             " << endl;
    cout << "            TICKET DE COMPRA              " << endl;
    cout << "==========================================" << endl;

    // Entrada de datos
    cout << "Precio unitario de la blusa: $";
    cin >> precio_unitario;

    cout << "Cantidad de blusas a comprar: ";
    cin >> cantidad;

    cout << "Porcentaje de descuento (%): ";
    cin >> porcentaje;

    // Cálculos
    subtotal = precio_unitario * cantidad;
    uno_de_cien = subtotal / 100;
    cantidad_descuento = uno_de_cien * porcentaje;
    total = subtotal - cantidad_descuento;

    // salida de datos
    cout << "\n------------- DETALLE DE COMPRA ----------" << endl;
    cout << "Blusas compradas: " << cantidad << endl;
    cout << "Precio unitario:  $" << precio_unitario << endl;
    cout << "------------------------------------------" << endl;
    cout << "SUBTOTAL:         $" << subtotal << endl;
    cout << "DESCUENTO (" << porcentaje << "%): -$" << cantidad_descuento << endl;
    cout << "------------------------------------------" << endl;
    cout << "TOTAL A PAGAR:    $" << total << endl;
    cout << "==========================================" << endl;
    cout << "    ¡Gracias por su preferencia!          " << endl;
    cout << "==========================================" << endl;
    system("pause");

    return 0;
}
