// Actividad 70 
// Programa: libro.cpp
// Descripción: Este programa solicita al usuario el título de un libro, lo muestra en pantalla y cuenta la cantidad de letras consonantes que contiene el título.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <cstring>   
#include <cctype>    

using namespace std;

int main() {
    char titulo[251]; // Arreglo para almacenar el título del libro (máx. 250 caracteres + 1 para '\0')
    int consonantes = 0; // Contador de letras consonantes en el título


    cout << "Ingrese el título del libro (máx. 250 caracteres):" << endl;
    cin.getline(titulo, 251); 


    cout << "\nTítulo ingresado: " << titulo << endl;


    for (int i = 0; i < strlen(titulo); i++) {
        char c = tolower(titulo[i]); // Variable temporal para almacenar el carácter actual en minúscula

        if (isalpha(c)) { // Verifica si es una letra
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                consonantes++; 
            }
        }
    }


    cout << "Cantidad de letras consonantes: " << consonantes << endl;

    system("pause");
    
    return 0;
}
