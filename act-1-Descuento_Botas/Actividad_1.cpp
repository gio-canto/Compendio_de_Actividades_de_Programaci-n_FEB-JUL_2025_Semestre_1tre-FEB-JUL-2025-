// Actividad 1
// Programa: Descuento_Botas.cpp
// Descripción: Este algoritmo calcula el descuento aplicado a la compra de una bota en oferta con un 34% de descuento y determina el total a pagar.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Definición de variables
    float precioUnitario, cantidad, subtotal, descuento, total;

    // Inicialización de variables
    precioUnitario = 2000.0;
    cantidad = 1.0;

    // Cálculos
    subtotal = precioUnitario * cantidad;
    descuento = (precioUnitario * 34.0) / 100.0;
    total = subtotal - descuento;

    // Presentación de resultados
    cout << fixed << setprecision(2); // Mostrar 2 decimales
    cout << "------------------------------" << endl;
    cout << "       Compra de Botas        " << endl;
    cout << "------------------------------" << endl;
    cout << "Subtotal:           $" << subtotal << endl;
    cout << "Descuento (34%):    -$" << descuento << endl;
    cout << "------------------------------" << endl;
    cout << "Total a pagar:      $" << total << endl;
    cout << "------------------------------" << endl;
    system("pause");
    
    return 0;
}
