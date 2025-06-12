// Actividad 68
// Programa: MANIFIESTO.cpp
// Descripción: Este programa registra pasajeros en una aerolínea internacional,
// validando si pueden abordar (según pase de embarque, pasaporte y certificado de salud),
// y calcula estadísticas como porcentaje de rechazo y monto recaudado.
// Autor: Gio Antonio Canto Gómez
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int nop = 0; // Número total de registros
    int rechazados = 0; // Total de pasajeros rechazados
    double costoTotal = 0; // Acumulador de ingresos
    int pase; // Número de pase de embarque
    string pasaporte; // Número de pasaporte
    char cont;    // Variable para continuar o no el registro
    int cartilla; // Certificado de salud (1 = Sí, 0 = No)
    double costo; // Costo del vuelo 

    cout << "==============================================\n";
    cout << "   SISTEMA DE MANIFIESTO DE PASAJEROS AÉREOS\n";
    cout << "   Aerolínea: Hermes Airlines GmbH\n";
    cout << "   Código IATA: AIT | País: Alemania (D)\n";
    cout << "==============================================\n\n";

    do {
        nop++;
        cout << "\n>>> REGISTRO #" << nop << " <<<\n";

        
        while (true) {
            cout << "Número de pase de embarque (6 dígitos, 0 si no tiene): ";
            cin >> pase;
            if (cin.fail() || pase < 0 || pase < 6 )  { // cin.fail() verifica si la entrada es válida
                cin.clear(); // Limpia el estado de error del flujo
                cout << "Entrada inválida. Intente de nuevo.\n";
            } else {
                break;
            }
        }

        if (pase == 0) {
            cout << "Rechazado: sin pase de embarque.\n";
            cout << "¿Desea registrar otro pasajero? (S/N): ";
            cin >> cont;
            cont = tolower(cont);
            goto siguiente_pasajero;
        }

        while (true) {
            cout << "Número de pasaporte (Ej. G12345678, '0' si no tiene): ";
            cin >> pasaporte;

            if (pasaporte == "0") {
                cout << "Rechazado: sin pasaporte.\n";
                rechazados++;
                cout << "¿Desea registrar otro pasajero? (S/N): ";
                cin >> cont;
                cont = tolower(cont);
                goto siguiente_pasajero; // ESTO ME HUBERA COSTADO HORAS DE ENTENDER PERO ES TAN SIMPLE COMO DECIR "VE AHI DONDE PONGO LA MARCA"
            }

            if (pasaporte.length() < 5) {
                cout << "Error: número de pasaporte inválido (debe tener al menos 5 caracteres).\n";
                continue; // vuelve a pedirlo
            }

            break; // si pasa las validaciones, salimos del while
        }

        while (true) {
            cout << "¿Cuenta con certificado de salud? (1 = Sí, 0 = No): ";
            cin >> cartilla;
            if (cin.fail() || (cartilla != 0 && cartilla != 1)) {
                cin.clear();
                cout << "Entrada inválida. Intente de nuevo.\n";
                continue; // vuelve a pedirlo
            }
            if (cartilla == 0) {
                cout << "Rechazado: sin certificado de salud.\n";
                rechazados++;
                cout << "¿Desea registrar otro pasajero? (S/N): ";
                cin >> cont;
                cont = tolower(cont);
                goto siguiente_pasajero;
            }
            break;
        }

        while (true) {
            cout << "Costo del vuelo (en euros): €";
            cin >> costo;
            if (cin.fail() || costo < 0) {
                cin.clear();
                cout << "Entrada inválida. Intente de nuevo.\n";
                continue; // vuelve a pedirlo
            }
            break;
            
        }
        costoTotal += costo;
        cout << "Pasajero aceptado exitosamente.\n";
        cout << "¿Desea registrar otro pasajero? (S/N): ";
        cin >> cont;
        cont = tolower(cont);
        siguiente_pasajero:
        continue;

    } while (cont == 's');

    // Reporte final
    cout << "\n=============================================\n";
    cout << "         REPORTE FINAL DEL MANIFIESTO\n";
    cout << "=============================================\n";
    cout << "Total de pasajeros registrados: " << nop << endl;
    cout << fixed << setprecision(2);
    cout << "Total recaudado: $" << costoTotal << endl;
    if (nop > 0) {
        double porcentajeRechazo = (static_cast<double>(rechazados) * 100) / nop;
        cout << "Porcentaje de rechazo por el certificado de salud: " << porcentajeRechazo << "%\n";
    }
    system("pause"); 
    return 0;
}