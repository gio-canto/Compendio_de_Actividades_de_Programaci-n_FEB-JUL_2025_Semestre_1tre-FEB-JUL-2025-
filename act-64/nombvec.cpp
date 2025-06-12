// Actividad 64
// Programa nombvec.cpp
// Descripción: Este programa recopila los nombres de personas elegibles para un reembolso
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    vector<string> names; // Nombre de los clientes
    int year; // Año de compra

    cout << "==============================================" << endl;
    cout << "      XBOX BEST BUY - REFUND REGISTRATION     " << endl;
    cout << "==============================================" << endl;
    cout << "\nNote: The refund is limited to 55 customers." << endl;
    cout << "Only applies to Xbox purchases made in 2024." << endl;
    cout << "------------------------------------------------------\n" << endl;

    for (int i = 0; i < 55; ++i) {
        cout << "Customer #" << (i + 1) << endl;
        cout << "Enter year of purchase (0 to finish): ";
        cin >> year;
        cin.ignore();

        if (year == 0) {
            cout << "\nThank you for your time." << endl;
            break;
        }

        if (year == 2024) {
            cout << "Congratulations! You are eligible for the refund." << endl;
            cout << "Please enter your name: ";
            string tempName; // Variable temporal para almacenar el nombre
            getline(cin, tempName);
            names.push_back(tempName);
        } else {
            cout << "Sorry, your purchase is not eligible for the refund." << endl;
            --i; //par a repetir el ciclo sin afectar el contador
        }

        cout << "------------------------------------------------------" << endl;
    }

    cout << "\n=== List of customers registered for refund ===" << endl;
    for (size_t i = 0; i < names.size(); ++i) {
        cout << setw(2) << (i + 1) << ". " << names[i] << endl;
    }
    cout << "====================================================" << endl;

    system("pause");
    return 0;
}
