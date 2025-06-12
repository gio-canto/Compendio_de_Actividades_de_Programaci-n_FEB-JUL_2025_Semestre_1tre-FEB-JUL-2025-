// Actividad 63, Evaluación 2
// Programa: tenda.cpp
// Descripción: Sistema de ventas con descuento e IVA
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double neto;      // Valor neto de la venta
   double bruto;     // Valor bruto de la venta
   double bruto1;    // Valor original antes de descuento
   double descuento; // Valor del descuento
   double IVA;       // IVA Impuesto al valor agregado
   double catpaga;   // Cantidad pagada por el usuario
   double cambio;    // Cambio a dar
   char resp;        // Respuesta del usuario

   do {
      // Presentación del programa
      cout << "\n========================================\n";
      cout << "         SISTEMA DE VENTAS HAMILTON     \n";
      cout << "========================================\n";

      // Entrada de datos
      cout << "\n>>> NUEVA VENTA <<<\n";
      cout << "Ingrese el monto de venta ($): ";
      cin >> bruto;
      bruto1 = bruto;

      // Cálculo de descuento
      if (bruto >= 5000) {
         descuento = bruto * 0.12;
         bruto -= descuento;
      } else {
         descuento = 0.0;
      }

      // Cálculo de IVA y total a pagar
      IVA = bruto * 0.16;
      neto = bruto + IVA;

      cout << fixed << setprecision(2);
      cout << "\nEl cliente debe pagar: $" << neto << endl;
      cout << "Ingrese la cantidad con la que el cliente paga ($): ";
      cin >> catpaga;

      cambio = catpaga - neto;

      // Ticket de venta
      cout << "\n========================================\n";
      cout << "         Tiendas Hamilton S.A. de C.V.  \n";
      cout << "========================================\n";
      cout << setw(30) << left << "Cantidad neta de la venta:" << "$" << setw(10) << bruto1 << endl;
      cout << setw(30) << left << "Descuento aplicado:" << "$" << setw(10) << descuento << endl;
      cout << setw(30) << left << "IVA (16%):" << "$" << setw(10) << IVA << endl;
      cout << setw(30) << left << "Total a pagar:" << "$" << setw(10) << neto << endl;
      cout << setw(30) << left << "Cantidad pagada:" << "$" << setw(10) << catpaga << endl;
      cout << setw(30) << left << "Cambio:" << "$" << setw(10) << (cambio >= 0 ? cambio : 0.0) << endl;
      if (cambio < 0) {
         cout << "\n*** Advertencia: El cliente no ha pagado suficiente. ***\n";
      }
      cout << "\n¡Gracias por su compra! :D\n";
      cout << "----------------------------------------\n";
      cout << "¿Desea continuar con otra venta? (S/N): ";
      cin >> resp;
      resp = toupper(resp);
   } while (resp == 'S');

   return 0;
}
