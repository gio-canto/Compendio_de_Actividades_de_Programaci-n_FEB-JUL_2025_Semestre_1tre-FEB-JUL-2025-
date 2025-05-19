// Actividad 61, del ejemplo 9 del libro "ELEMENTOS BÁSICOS DEL LENGUAJE" (Version 2.0)
// Programa SEGURO1.cpp
// Descripción: Se utiliza para tramitar solicitudes de seguro
// Autor: Ing. Victor M. Valdez Castro
// Adaptado por: Gio Antonio Canto Gómez

#include <iostream>
#include <string>  
#include <iomanip> 
using namespace std;

int main() {

    // Declaración de variables
    int ncf_s;          // Número de cigarros que fuma el solicitante al día
    int csa = 0;        // Cantidad de solicitudes aceptadas
    int csna = 0;       // Cantidad de solicitudes rechazadas
    double sumacfna = 0; // Suma de cigarros fumados por solicitantes no aceptados
    int num_sol;        // Número de solicitud
    string nom_s;       // Nombre del solicitante
    char resp = 'S';    // Respuesta del usuario para continuar (S/N)
    double Pcfna;       // Promedio de cigarros fumados por los no aceptados
    double peso_s;      // Peso del solicitante

    // Presentación del sistema
    cout << "=====================================" << endl;
    cout << "       SOLICITUD DE SEGURO DE VIDA" << endl;
    cout << "                V2.3" << endl;
    cout << "=====================================" << endl;

    while (resp == 's' || resp == 'S') {
        cout << "\n=====================================" << endl;
        cout << "       NUEVA SOLICITUD DE SEGURO" << endl;
        cout << "=====================================" << endl;

        // Solicitar datos del solicitante
        cout << "Ingrese el número de solicitud: ";
        cin >> num_sol;
        cout << "Ingrese el nombre del solicitante: ";
        cin.ignore(); // Limpiar el buffer
        getline(cin, nom_s);
        cout << "Ingrese el peso del solicitante (kg): ";
        cin >> peso_s;
        cout << "¿Cuántos cigarros fuma al día?: ";
        cin >> ncf_s;

        // Evaluación de la solicitud
        if (peso_s > 90) {
            // Solicitud rechazada por peso alto
            cout << "\n------------------------------------------------------------------------------------" << endl;
            cout << "Estimado(a): " << nom_s << endl;
            cout << "\nDespués de realizar las evaluaciones preliminares de su perfil, se informa que:" << endl;
            cout << "La solicitud No. " << num_sol << " fue RECHAZADA." << endl;
            cout << "Motivo 001: Usted cuenta con un peso alto, lo que implica riesgos para la salud." << endl;
            cout << "Atentamente," << endl;
            cout << "Seguros ALP" << endl;
            cout << "------------------------------------------------------------------------------------" << endl;

            csna++;
            sumacfna += ncf_s;

        } else if (ncf_s > 3) {
            // Solicitud rechazada por fumar en exceso
            cout << "\n------------------------------------------------------------------------------------" << endl;
            cout << "Estimado(a): " << nom_s << endl;
            cout << "\nDespués de realizar las evaluaciones preliminares de su perfil, se informa que:" << endl;
            cout << "La solicitud No. " << num_sol << " fue RECHAZADA." << endl;
            cout << "Motivo 002: Usted tiene hábitos de salud poco saludables (fumar en exceso)." << endl;
            cout << "Atentamente," << endl;
            cout << "Seguros ALP" << endl;
            cout << "------------------------------------------------------------------------------------" << endl;

            csna++;
            sumacfna += ncf_s;

        } else {
            // Solicitud aceptada
            cout << "\n------------------------------------------------------------------------------------" << endl;
            cout << "Estimado(a): " << nom_s << endl;
            cout << "\nDespués de realizar las evaluaciones preliminares de su perfil, se informa que:" << endl;
            cout << "La solicitud No. " << num_sol << " fue ACEPTADA." << endl;
            cout << "Motivo A12: Usted cumple con los requisitos preliminares." << endl;
            cout << "Atentamente," << endl;
            cout << "Seguros ALP" << endl;
            cout << "------------------------------------------------------------------------------------" << endl;

            csa++;
        }

        // Preguntar si desea procesar otra solicitud
        cout << "\n¿Desea procesar otra solicitud? (S para Sí, N para No): ";
        cin >> resp;
    }

    // Calcular promedio de cigarros fumados por los no aceptados
    Pcfna = (csna > 0) ? (sumacfna / csna) : 0;

    // Mostrar resultados finales
    cout << "\n============================================" << endl;
    cout << "         RESULTADOS DEL PERIODO" << endl;
    cout << "============================================" << endl;
    cout << "Solicitudes aceptadas: " << csa << endl;
    cout << "Promedio de cigarros fumados por los no aceptados: " << fixed << setprecision(2) << Pcfna << endl;

    system("pause");
    return 0;
}
