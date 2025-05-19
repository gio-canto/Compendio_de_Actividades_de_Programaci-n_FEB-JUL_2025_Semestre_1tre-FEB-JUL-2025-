// Actividad 46
// Programa: COMISIONES_VENTAS.cpp
/*Descripción: Este programa registra ventas realizadas por un empleado, calcula comisiones del 3% o 5% según el monto total de la venta,
y muestra un reporte final con estadísticas de ventas, y muestra un reporte final con estadísticas de ventas*/
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

int main() {
    // Declaración de variables
    int noc;                    // Número de empleado
    string nom;                  // Nombre del empleado
    string sku;                  // SKU del producto
    string nom_prod;             // Nombre del producto
    float cost;                  // Precio del producto sin IVA
    float iva;                   // Monto del IVA
    float cost_final;            // Costo total con IVA
    string metodo_pago;          // Forma de pago
    string respuesta;            // Respuesta del usuario para continuar
    int ventas_total = 0;         // Total de ventas registradas
    int ventas_menores = 0;       // Ventas menores a $1000
    float comision;              // Comisión por venta individual
    float comision3 = 0;          // Comisión acumulada por ventas menores a $1000
    float comision5 = 0;          // Comisión acumulada por ventas iguales o mayores a $1000
    float suma_menores = 0;       // Suma de ventas menores a $1000
    float promedio_menores;       // Promedio de esas ventas

    cout << fixed << setprecision(2); // Formato de dinero: 2 decimales
    cout << "=========================================" << endl;
    cout << "        SISTEMA DE VENTAS APOLLO         " << endl;
    cout << "=========================================" << endl << endl;

    cout << ">>> INICIO DE SESIÓN <<<" << endl;
    cout << "Ingrese su número de empleado: ";
    cin >> noc;
    cin.ignore();
    cout << "Ingrese su nombre: ";
    getline(cin, nom);

    cout << endl << "¿Desea registrar una venta? (SI/NO): ";
    getline(cin, respuesta);

    do {
        if (respuesta == "SI" || respuesta == "si") {
            cout << endl << ">>> NUEVA VENTA <<<" << endl;
            cout << "Ingrese el SKU del producto: ";
            getline(cin, sku);

            cout << "Ingrese el nombre del producto: ";
            getline(cin, nom_prod);

            cout << "Ingrese el precio del producto (sin IVA): $";
            cin >> cost;

            cout << "Ingrese el monto del IVA: $";
            cin >> iva;
            cin.ignore();

            cout << "Ingrese el método de pago: ";
            getline(cin, metodo_pago);

            cost_final = cost + iva;
            ventas_total++;

            if (cost_final >= 1000) {
                comision = cost_final * 0.05;
                comision5 += comision;
            } else {
                comision = cost_final * 0.03;
                comision3 += comision;
                ventas_menores++;
                suma_menores += cost_final;
            }

            cout << endl << "----------- FACTURA -----------" << endl;
            cout << left;
            cout << setw(20) << "Vendedor:" << nom << endl;
            cout << setw(20) << "Producto:" << sku << " - " << nom_prod << endl;
            cout << setw(20) << "Subtotal:" << "$" << cost << endl;
            cout << setw(20) << "IVA:" << "$" << iva << endl;
            cout << setw(20) << "Total:" << "$" << cost_final << endl;
            cout << setw(20) << "Método de pago:" << metodo_pago << endl;
            cout << "¡Gracias por su compra!" << endl;
            cout << "-------------------------------" << endl;
        }

        cout << endl << "¿Desea registrar otra venta? (SI/NO): ";
        getline(cin, respuesta);

    } while (respuesta == "SI" || respuesta == "si");

    if (ventas_menores > 0) {
        promedio_menores = suma_menores / ventas_menores;
    } else {
        promedio_menores = 0;
    }

    cout << endl << "=========================================" << endl;
    cout << "             REPORTE FINAL               " << endl;
    cout << "=========================================" << endl;
    cout << left;
    cout << setw(30) << "Empleado:" << nom << endl;
    cout << setw(30) << "Total de ventas realizadas:" << ventas_total << endl;
    cout << setw(30) << "Comisión 3% (ventas < $1000):" << "$" << comision3 << endl;
    cout << setw(30) << "Comisión 5% (ventas >= $1000):" << "$" << comision5 << endl;
    cout << setw(30) << "Comisión total:" << "$" << comision3 + comision5 << endl;
    cout << setw(30) << "Promedio ventas < $1000:" << "$" << promedio_menores << endl;
    cout << "=========================================" << endl;

    system("pause");
    return 0;
}
