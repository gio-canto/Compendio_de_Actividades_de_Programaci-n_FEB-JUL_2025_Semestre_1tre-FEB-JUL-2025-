// Actividad 20
// Programa ob_tre.cpp
// Descripción: Este programa solicita tres números al usuario y determina cuál es el mayor. Si los
// tres números son iguales, lo indica.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    cout << "==============================================" << endl;
    cout << "  Programa para determinar el mayor de tres números" << endl;
    cout << "==============================================" << endl;
    cout << "Por favor, ingrese tres números diferentes o iguales." << endl;
    cout << "==============================================" << endl;

    cout << "Escriba el primer número: ";
    cin >> num1;
    cout << "Escriba el segundo número: ";
    cin >> num2;
    cout << "Escriba el tercer número: ";
    cin >> num3;

    cout << "==============================================" << endl;

    if (num1 == num2 && num2 == num3) {
        cout << "Los tres números son iguales: " << num1 << endl;
    } else {
        if (num1 > num2 && num1 > num3) {
            cout << "El número mayor es: " << num1 << endl;
        } else if (num2 > num3) {
            cout << "El número mayor es: " << num2 << endl;
        } else {
            cout << "El número mayor es: " << num3 << endl;
        }
    }

    cout << "==============================================" << endl;

    system("pause");

    return 0;
}
