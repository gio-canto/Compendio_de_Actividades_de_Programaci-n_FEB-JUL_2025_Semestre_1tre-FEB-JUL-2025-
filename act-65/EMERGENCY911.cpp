// Actividad 65
// Programa: EMERGENCY911.cpp
// Descripción: Este programa gestiona un censo hospitalario, registrando pacientes, su aseguramiento y la cantidad de jóvenes hospitalizados
// Autor: Gio Antonio Canto Gómez
#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

int main() {
    string nom, dom; // Nombre y domicilio del paciente
    int eda; // Edad del paciente
    char sex, ass; //Sexo del paciente (H= Hombre, M= Mujer, X= Otros) y Aseguramiento del paciente (V=Asegurado, F=No asegurado)
    int jov_hos = 0; // Contador de pacientes jóvenes (13-30 años)
    int hos_no = 0; // Contador de pacientes no asegurados
    int hos_si = 0; //Contador de pacientes asegurados
    int hos = 0; //Contador total de pacientes hospitalizados
    float tacasa; //Porcentaje de jóvenes hospitalizados
    char H1 = 'V'; //Respuesta de continuación
    int H2 = 1 ; //El número de paciente
 
    cout << "==========================================" << endl;
    cout << "      *** SISTEMA DE CENSO HOSPITALARIO ***" << endl;
    cout << "==========================================" << endl << endl;

    while (H1 == 'V' || H1 == 'v') {
        cout << "------------------------------------------" << endl;
        cout << "PACIENTE #" << H2 << endl;
        cout << "------------------------------------------" << endl;

        cout << "Ingrese el nombre del paciente: ";
        getline(cin, nom);

        cout << "Ingrese la edad del paciente: ";
        cin >> eda;
        cin.ignore(); // Limpiar buffer

        cout << "Ingrese el sexo del paciente (H = Hombre, M = Mujer, X = Otros): ";
        cin >> sex;
        cin.ignore(); // Limpiar buffer

        cout << "Ingrese el domicilio del paciente: ";
        getline(cin, dom);

        cout << "¿El paciente se encuentra asegurado? (V = Asegurado, F = No asegurado): ";
        cin >> ass;
        ass = tolower(ass); // Convertimos a minúscula
        cin.ignore();
        
        if (eda >= 13 && eda <= 30) {
            jov_hos++;
        }

        if (ass == 'V' || ass == 'v') {
            hos_si++;
        } else {
            hos_no++;
        }

        hos++;
    

        cout << "------------------------------------------" << endl;
        cout << "Registro del paciente #" << H1 << " completado." << endl << endl;
        cout << "¿Desea ingresar otro? (V= Sí F = No)" << endl << endl;
        cin >> H1 ;
        H2++ ;
    }

    cout << endl << "==========================================" << endl;
    cout << "        *** RESUMEN DEL CENSO ***" << endl;
    cout << "==========================================" << endl;

    if (hos_si > hos_no) {
        cout << "Más pacientes asegurados fueron registrados." << endl;
    } else if (hos_si < hos_no) {
        cout << "Más pacientes NO asegurados fueron registrados." << endl;
    } else {
        cout << "El número de pacientes asegurados y no asegurados es el mismo." << endl;
    }

    cout << "------------------------------------------" << endl;
    cout << "Total de pacientes ingresados: " << hos << endl;

    if (hos > 0) {
        tacasa = (static_cast<float>(jov_hos) / hos) * 100;
        cout << fixed << setprecision(2); // Formato a 2 decimales
        cout << "Porcentaje de pacientes jóvenes (13-30 años): " << tacasa << "%" << endl;
    } else {
        cout << "No se registraron pacientes." << endl;
    }

    cout << "==========================================" << endl;
    cout << "         ¡Gracias por usar el sistema!" << endl;
    cout << "==========================================" << endl;

    system("pause");
    return 0;
}
