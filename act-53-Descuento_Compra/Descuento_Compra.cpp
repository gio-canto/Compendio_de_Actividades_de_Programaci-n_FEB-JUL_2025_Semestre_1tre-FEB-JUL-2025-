// Actividad 53
// Programa Descuento_Compra
// Descripción: Este Programa calcula el 8% de descuento aplicado sobre el total de una compra y muestra el monto del descuento y el total a pagar
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declaración de variables
    float total_compra, descuento, total_pagar; // total_compra: total de la compra, descuento: monto del descuento, total_pagar: total a pagar después del descuento

    // Entrada de datos
    cout << "===============================" << endl;
    cout << "         RECIBO DE COMPRA       " << endl;
    cout << "===============================" << endl;
    cout << "Ingrese el total de la compra: $";
    cin >> total_compra;

    // Cálculo
    descuento = (total_compra * 0.08); // Se calcula el 8% de descuento (0.08 es el 8%)
    total_pagar = (total_compra - descuento);

    // Salida de datos
    cout << endl;
    cout << "===============================" << endl;
    cout << "         DETALLE DE COMPRA      " << endl;
    cout << "===============================" << endl;
    cout << left << setw(20) << "Subtotal:" << right << "$ " << fixed << setprecision(2) << setw(10) << total_compra << endl;
    cout << left << setw(20) << "Descuento (8%):" << right << "$ " << fixed << setprecision(2) << setw(10) << descuento << endl;
    cout << "-------------------------------" << endl;
    cout << left << setw(20) << "Total a pagar:" << right << "$ " << fixed << setprecision(2) << setw(10) << total_pagar << endl;
    cout << "===============================" << endl;

    // Mensaje final
    cout << endl;
    cout << "Gracias por su compra. ¡Vuelva pronto!" << endl;

    // Fin del programa
    system("pause");
    return 0;
}