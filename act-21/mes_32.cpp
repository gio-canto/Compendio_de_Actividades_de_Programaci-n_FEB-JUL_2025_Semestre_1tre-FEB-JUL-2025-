// Actividad 21
// Programa: mes_32.cpp 
// Descripción: Este programa solicita al usuario un número de mes (1-12) y muestra su nombre y la cantidad de días que tiene. Si el número es inválido, muestra un mensaje de error.
// Autor: Gio Antonio Canto Gómez
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declaración de variables
    int  mes;
    // Entrada de datos
    cout << "Ingrese el número del mes (1-12): ";
    cin >> mes;
    // Cálculos
    if (mes < 1 || mes > 12) {
        cout << "El mes indicado es inválido" << endl;
    } else {
        if (mes == 1) {
            cout << "El mes " << mes << " es Enero con 31 días" << endl;
        } else if (mes == 2) {
            cout << "El mes " << mes << " es Febrero con 28 días" << endl;
        } else if (mes == 3) {
            cout << "El mes " << mes << " es Marzo con 31 días" << endl;
        } else if (mes == 4) {
            cout << "El mes " << mes << " es Abril con 30 días" << endl;
        } else if (mes == 5) {
            cout << "El mes " << mes << " es Mayo con 31 días" << endl;
        } else if (mes == 6) {
            cout << "El mes " << mes << " es Junio con 30 días" << endl;
        } else if (mes == 7) {
            cout << "El mes " << mes << " es Julio con 31 días" << endl;
        } else if (mes == 8) {
            cout << "El mes " << mes << " es Agosto con 31 días" << endl;
        } else if (mes == 9) {
            cout << "El mes " << mes << " es Septiembre con 30 días" << endl;
        } else if (mes == 10) {
            cout << "El mes " << mes << " es Octubre con 31 días" << endl;
        } else if (mes == 11) {
            cout << "El mes " << mes << " es Noviembre con 30 días" << endl;
        } else if (mes == 12) {
            cout << "El mes " << mes << " es Diciembre con 31 días" << endl;
        }
    }
    system("pause");
    return 0;
}