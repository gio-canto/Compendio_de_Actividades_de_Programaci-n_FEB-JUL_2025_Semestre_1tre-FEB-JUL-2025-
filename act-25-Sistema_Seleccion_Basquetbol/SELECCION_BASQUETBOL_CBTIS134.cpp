// Actividad 25
// Programa: SELECCION_BASQUETBOL_CBTIS134.cpp
// Descripción: Este programa selecciona jugadoras para el equipo de Basquetbol Femenil del CBTIS 134, basándose en su estatura y peso
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Declaración de variables
    string nom; // Nombre de la jugadora
    string espe; // Especialidad de la jugadora
    int semestre; // Semestre de la jugadora (1-6)
    float esta; // Estatura de la jugadora en metros
    double pe; // Peso de la jugadora en kilogramos
    int sele = 0; // Cantidad de alumnas seleccionadas
    int num_alumnas = 500; // Cantidad total de alumnas evaluadas

    // Presentación del sistema
    cout << "==========================================================" << endl;
    cout << "Sistema automatizado de selección deportiva del CBTIS 134" << endl;
    cout << "     Sistema de selección de Basquetbol Femenil" << endl;
    cout << "==========================================================" << endl;

    // Ciclo para evaluar a las alumnas
    for (int i = 0; i < num_alumnas; i++) {
        cout << "\nFavor de indicar los datos solicitados" << endl;
        cin.ignore(); // Limpiar el salto de línea anterior
        cout << "Nombre de la jugadora: ";
        getline(cin, nom);
        cout << "Especialidad de la jugadora: ";
        cin >> espe;
        cout << "Semestre de la jugadora (1-6): ";
        cin >> semestre;
        cout << "Estatura de la jugadora en metros (ejemplo: 1.70): ";
        cin >> esta;
        cout << "Peso de la jugadora en kilogramos (ejemplo: 60.5): ";
        cin >> pe;

        // Evaluación de estatura y peso
        if (esta >= 1.65) {
            if (pe <= 90) {
                sele++;
                cout << "\n==========================================================" << endl;
                cout << "         Sistema de Selección de Básquetbol Femenil       " << endl;
                cout << "----------------------------------------------------------" << endl;
                cout << "Estimada " << nom << "," << endl << endl;
                cout << "Nos complace informarle que ha sido seleccionada para formar parte" << endl;
                cout << "del equipo de Básquetbol Femenil del CBTIS 134. Su estatura y peso" << endl;
                cout << "cumplen con los requisitos establecidos para el proceso de selección." << endl << endl;
                cout << "Atentamente," << endl;
                cout << "Comité de Selección" << endl;
                cout << "CBTIS 134" << endl;
                cout << "==========================================================" << endl;
            } else {
                cout << "\n==========================================================" << endl;
                cout << "         Sistema de Selección de Básquetbol Femenil       " << endl;
                cout << "----------------------------------------------------------" << endl;
                cout << "Estimada " << nom << "," << endl << endl;
                cout << "Lamentamos informarle que no ha sido seleccionada debido a que su peso" << endl;
                cout << "excede el límite máximo permitido de 90 kilogramos." << endl << endl;
                cout << "Le alentamos a seguir participando en futuras convocatorias." << endl << endl;
                cout << "Atentamente," << endl;
                cout << "Comité de Selección" << endl;
                cout << "CBTIS 134" << endl;
                cout << "==========================================================" << endl;
            }
        } else {
            cout << "\n==========================================================" << endl;
            cout << "         Sistema de Selección de Básquetbol Femenil       " << endl;
            cout << "----------------------------------------------------------" << endl;
            cout << "Estimada " << nom << "," << endl << endl;
            cout << "Lamentamos informarle que no ha sido seleccionada debido a que su estatura" << endl;
            cout << "es menor al requisito mínimo establecido de 1.65 metros." << endl << endl;
            cout << "Le alentamos a seguir participando en futuras convocatorias." << endl << endl;
            cout << "Atentamente," << endl;
            cout << "Comité de Selección" << endl;
            cout << "CBTIS 134" << endl;
            cout << "==========================================================" << endl;
        }
    }

    // Resumen de la selección
    cout << "\n==========================================================" << endl;
    cout << "         Sistema de Selección de Básquetbol Femenil       " << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "Resumen de la selección:" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "Total de alumnas seleccionadas: " << sele << endl;
    cout << "==========================================================" << endl;

    system("pause");
    return 0;
}
