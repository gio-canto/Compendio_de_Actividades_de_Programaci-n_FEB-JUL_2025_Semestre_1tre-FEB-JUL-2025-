// Actividad 28
// Programa: ANALIZAR_GRUPO.cpp
// Descripción: Este programa analiza un grupo de personas, clasificándolas por sexo, estado civil y edad. 
// Calcula porcentajes de hombres, mujeres, menores de edad y hombres casados. También identifica  las personas que "No se mandan".
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>  
#include <string>
using namespace std;

int main() {
    int total_personas;
    int hombres = 0, mujeres = 0, menores = 0, hombres_casados = 0, elpepe = 0;
    string nombre ;

    cout << "============================================\n";
    cout << "      CENSO DE GRUPO DE PERSONAS       \n";
    cout << "============================================\n\n";

    cout << "Ingrese el número total de personas a evaluar: ";
    cin >> total_personas;
    cout << "\n";

    for (int i = 1; i <= total_personas; i++) {
        string nombre, sex, esta;
        int edad;

        cout << "--------------------------------------------\n";
        cout << " Persona #" << i << endl;
        cout << "--------------------------------------------\n";

        cin.ignore (); // Limpiar el buffer de entrada
        cout << "Ingrese el nombre: ";
        getline (cin, nombre);

        cout << "Ingrese su edad: ";
        cin >> edad;

        cout << "Ingrese su sexo (H=Hombre, M=Mujer, X=Otro): ";
        cin >> sex;

        cout << "Ingrese su estado civil (C=Casado, S=Soltero, UN=Union libre, V=Viudo): ";
        cin >> esta;

        if (sex == "H" || sex == "h") {
            hombres++;
            if (esta == "C" || esta == "c") {
                hombres_casados++;
            }
        } else if (sex == "M" || sex == "m") {
            mujeres++;
        }

        if (edad < 18) {
            menores++;
        }

        if ((sex == "H" && esta == "C") || (sex == "M" && edad < 18)) {
            cout << "** Nota: Usted no se manda. **\n";
            elpepe++;
        }

        cout << "\n";
    }

   
    double porc_hombres = (hombres * 100.0) / total_personas;
    double porc_mujeres = (mujeres * 100.0) / total_personas;
    double porc_menores = (menores * 100.0) / total_personas;
    double porc_hombres_casados = (hombres_casados * 100.0) / total_personas;
    double porc_no_se_mandan = (elpepe * 100.0) / total_personas;

    cout << fixed << setprecision(2);
    cout << "\n========== RESULTADOS DEL ANALISIS ==========\n";
    cout << "Porcentaje de hombres en el grupo      : " << porc_hombres << " %\n";
    cout << "Porcentaje de mujeres en el grupo      : " << porc_mujeres << " %\n";
    cout << "Porcentaje de menores de edad          : " << porc_menores << " %\n";
    cout << "Porcentaje de hombres casados          : " << porc_hombres_casados << " %\n";
    cout << "Porcentaje de personas que no se mandan: " << porc_no_se_mandan << " %\n";
    cout << "============================================\n";
    
    system("pause");
    return 0;
}
