// Actividad 15
// Programa ConvertirTemperatura.cpp
// Descripción: Este programa convierte una temperatura ingresada en grados Celsius (°C) a grados Fahrenheit (°F) y Kelvin (K).
// Autor: Gio Antonio Canto Gómez

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float C, K, F; // Grados Celsius, Kelvin y Fahrenheit

    // Solicitar al usuario la temperatura en grados Celsius
    cout << "=========================================" << endl;
    cout << "   Conversor de Temperatura (°C a °F y K)" << endl;
    cout << "=========================================" << endl;
    cout << "Ingrese la temperatura en grados Celsius (°C): ";
    cin >> C;

    // Convertir a Kelvin y Fahrenheit
    K = C + 273.15; // Conversión a Kelvin
    F = (C * 9.0 / 5.0) + 32; // Conversión a Fahrenheit

    // Mostrar los resultados
    cout << "\nResultados:" << endl;
    cout << "-----------------------------------------" << endl;
    cout << C << " °C equivale a:" << endl;
    cout << " - " << F << " °F (grados Fahrenheit)" << endl;
    cout << " - " << K << " K (Kelvin)" << endl;
    cout << "-----------------------------------------" << endl;
    system("pause");

    return 0;
}