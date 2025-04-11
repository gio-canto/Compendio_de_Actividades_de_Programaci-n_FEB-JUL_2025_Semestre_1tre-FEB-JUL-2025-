// Actividad 12
// Programa: cartas.cpp
// Descripción: Este Programa calcula el costo del porte de una carta o paquete en función de su peso en onzas. 
// Si la carta pesa 1 onza, el costo es fijo de $0.25; si pesa más, se agrega $0.04 por cada onza adicional. 
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declaración de variables
    float onzas; // Peso de la carta o paquete en onzas
    float costo; // Costo del envío basado en el peso

    // Entrada de datos
    cout << "=====================================" << endl;
    cout << "         SERVICIO POSTAL             " << endl;
    cout << "=====================================" << endl;
    cout << "Bienvenido al sistema de cálculo de costos de envío." << endl;
    cout << "Por favor, indique el peso de la carta/paquete en onzas: ";
    cin >> onzas;

    // Validación de entrada
    if (onzas <= 0) {
        cout << "Error: El peso debe ser mayor a 0 onzas." << endl;
        return 1; // Salida con error
    }

    // Cálculo del costo
    // Nota: Si desea cambiar el costo por onza, modifique los valores en las siguientes líneas:
    // En el cálculo del costo fijo (0.25), reemplace 0.25 por el nuevo costo base deseado
    // En el cálculo del costo adicional por onza (0.04), reemplace 0.04 por el nuevo costo por onza adicional.
    if (onzas == 1) {
        costo = 0.25;
    } else {
        costo = (onzas - 1) * 0.04 + 0.25;
    }

    // Salida de datos
    cout << endl;
    cout << "=====================================" << endl;
    cout << "               FACTURA               " << endl;
    cout << "=====================================" << endl;
    cout << fixed << setprecision(2); // Formato para mostrar 2 decimales
    cout << "Peso de la carta/paquete: " << onzas << " onzas" << endl;
    cout << "Costo del porte:          $" << costo << endl;
    cout << "=====================================" << endl;
    cout << "Gracias por utilizar nuestro servicio. ¡Que tenga un excelente día! :D" << endl;

    system("pause");
    return 0;
}