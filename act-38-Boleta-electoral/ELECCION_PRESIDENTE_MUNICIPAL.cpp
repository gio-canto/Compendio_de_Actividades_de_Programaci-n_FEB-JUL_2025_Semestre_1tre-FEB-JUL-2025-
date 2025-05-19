// Actividad 38
// Programa: ELECCION_PRESIDENTE_MUNICIPAL.cpp
// Descripción: Este programa simula un sistema de votación para elegir un presidente municipal.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <string>
using namespace std;

int main() {
    int cat1 = 0;  // Votos para el Candidato 1
    int cat2 = 0;  // Votos para el Candidato 2
    int cat3 = 0;  // Votos para el Candidato 3
    int nulo = 0;  // Votos nulos
    int voto;
    string nombre, sexo;

    cout << "============================================\n";
    cout << "  SISTEMA ELECTORAL  - COMUNIDAD EL AMATE\n";
    cout << "============================================\n";

    for (int i = 1; i <= 300; i++) {
        cout << "\n============================================\n";
        cout << "Boleta de votación número " << i << "\n";
        cout << "Elija al candidato de su preferencia:\n";
        cout << "  (1) Candidato 1\n";
        cout << "  (2) Candidato 2\n";
        cout << "  (3) Candidato 3\n";
        cout << "============================================\n";
        cout << "Indique su voto: ";
        cin >> voto;

        cout << "Nombre del votante: ";
        cin.ignore();
        getline(cin, nombre);
        cout << "Sexo (M/F): ";
        cin >> sexo;

        if (voto == 1) {
            cat1++;
        } else if (voto == 2) {
            cat2++;
        } else if (voto == 3) {
            cat3++;
        } else {
            cout << ">>> Voto no válido. Se registra como nulo.\n";
            nulo++;
        }
    }

    cout << "\n============================================\n";
    cout << "           RESULTADOS OFICIALES\n";
    cout << "============================================\n";
    cout << "Candidato 1: " << cat1 << " votos\n";
    cout << "Candidato 2: " << cat2 << " votos\n";
    cout << "Candidato 3: " << cat3 << " votos\n";
    cout << "Votos nulos: " << nulo << "\n";
    cout << "============================================\n";

    // Lógica para determinar al ganador o empates
    if (cat1 > cat2 && cat1 > cat3) {
        cout << "Ganador: Candidato 1 con " << cat1 << " votos\n";
    } else if (cat2 > cat1 && cat2 > cat3) {
        cout << "Ganador: Candidato 2 con " << cat2 << " votos\n";
    } else if (cat3 > cat1 && cat3 > cat2) {
        cout << "Ganador: Candidato 3 con " << cat3 << " votos\n";
    } else if (cat1 == cat2 && cat1 > cat3) {
        cout << "Empate entre Candidato 1 y Candidato 2 con " << cat1 << " votos\n";
    } else if (cat1 == cat3 && cat1 > cat2) {
        cout << "Empate entre Candidato 1 y Candidato 3 con " << cat1 << " votos\n";
    } else if (cat2 == cat3 && cat2 > cat1) {
        cout << "Empate entre Candidato 2 y Candidato 3 con " << cat2 << " votos\n";
    } else if (cat1 == cat2 && cat2 == cat3) {
        cout << "Empate total entre los tres candidatos con " << cat1 << " votos cada uno\n";
    }
    
    system("pause");
    return 0;
}
