// Actividad 35
// Programa: CTM.cpp
// Descripción: Este programa calcula cuántos minutos y segundos hay en un día, una semana, un mes de 30 días y un año de 365 días
// Autor: Gio Antonio Canto Gómez
#include <iostream>
using namespace std;

int main() {
    //Declaración de variables
    int min_dia;  // Minutos en un día
    int seg_dia;  // Segundos en un día
    int min_sem;  // Minutos en una semana
    int seg_sem;  // Segundos en una semana
    int min_mes;  // Minutos en un mes de 30 días
    int seg_mes;  // Segundos en un mes de 30 días
    int min_anio; // Minutos en un año de 365 días
    int seg_anio; // Segundos en un año de 365 días

    // Cálculos

    min_dia = 24 * 60;      
    seg_dia = min_dia * 60; 

    min_sem = min_dia * 7;  
    seg_sem = seg_dia * 7;  

    min_mes = min_dia * 30;
    seg_mes = seg_dia * 30; 

    min_anio = min_dia * 365;
    seg_anio = seg_dia * 365; 


    // Resultados


    cout << "\n-----------------------------------------------\n";
    cout << "RESULTADOS DEL CALCULO DE TIEMPOS\n";
    cout << "-----------------------------------------------\n";

    cout << "En un dia hay " << min_dia << " minutos." << endl; 
    cout << "En una semana hay " << min_sem << " minutos y " << seg_sem << " segundos." << endl; 
    cout << "En un mes de 30 dias hay " << min_mes << " minutos y " << seg_mes << " segundos." << endl; 
    cout << "En un año hay " << min_anio << " minutos y " << seg_anio << " segundos." << endl;
    cout << "-----------------------------------------------\n";
    
    system("pause");
    return 0; 
}
