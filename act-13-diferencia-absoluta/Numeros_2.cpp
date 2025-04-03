// Actividad 13
// Programa Numeros_2.cpp
// Descripción: Este programa solicita dos números al usuario y calcula su diferencia absoluta, garantizando que el resultado sea siempre positivo

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath> // Para usar abs()
using namespace std;

int main() {
    // Declaraciones
    int no1, no2, diferencia; // Números ingresados por el usuario y la diferencia entre ellos

    // Entrada de datos
    cout << "Por favor, escriba el primer número:" << endl;
    cin >> no1; // Lectura del primer número
    cout << "Por favor, escriba el segundo número:" << endl;
    cin >> no2; // Lectura del segundo número

    // Cálculo
    diferencia = abs(no1 - no2);

    // Salida
    cout << "La diferencia entre los números es: " << diferencia << endl;

    system("pause");
    return 0;
}