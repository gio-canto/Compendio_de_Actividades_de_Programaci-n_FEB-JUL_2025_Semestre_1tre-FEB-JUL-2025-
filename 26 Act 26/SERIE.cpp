// Actividad 26
// Programa: SERIE.cpp
// Descripción: Este programa procesa 2000 números enteros y cuenta cuántos son positivos, cuántos negativos y cuántas veces aparece el número 10
// Autor: Gio Antonio Canto Gómez

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int nom ; //Número ingresado por el usuario
    int serepo = 0 ; //Contador de números positivos
    int serene = 0; //Contador de números negativos
    int seredi = 0;//Contador de veces que aparece el número 10
    // Entrada de datos
    cout << "Ingrese 2000 números enteros: " << endl;
    for (int sere = 1 ; sere <= 2000; sere++){
        // Proceso
        cin >> nom; // Se lee el número ingresado por el usuario
        if (nom > 0) {
            serepo = serepo + 1 ;
        } else {
            serene = serene + 1 ;
        }
        if (nom == 10) {
            seredi = seredi + 1;
        }
    }
    // Salida de datos
    cout << "==========================================="  << endl;
    cout << "Resultados Finales" << endl;
    cout << "===========================================" << endl;
    cout << "Cantidad de números positivos:" << serepo << endl;
    cout << "Cantidad de números negativos:" << serene << endl;
    cout << "Cantidad de veces que apareció el número 10:" << seredi << endl;

    system("pause");
    return 0;
}