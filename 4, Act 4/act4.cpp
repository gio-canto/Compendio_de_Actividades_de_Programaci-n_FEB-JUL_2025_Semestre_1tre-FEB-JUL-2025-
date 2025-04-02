// Actividad 4
// Programa: sacar.cpp 
// Descripción: Este programa calcula el área y perímetro de un triángulo y un trapecio, solicitando los datos al usuario y mostrando los resultados en pantalla.
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declaraciones para el triángulo
    float base_triangulo, altura_triangulo, area_triangulo, perimetro_triangulo;

    // Declaraciones para el trapecio
    float base_mayor, base_menor, altura_trapecio;
    float lado1, lado2, area_trapecio, perimetro_trapecio;

    // Entrada de datos - triángulo
    cout << "Ingrese la base del triángulo: ";
    cin >> base_triangulo;
    cout << "Ingrese la altura del triángulo: ";
    cin >> altura_triangulo;

    // Cálculos - triángulo
    area_triangulo = (base_triangulo * altura_triangulo) / 2;
    perimetro_triangulo = base_triangulo * 3;

    // Entrada de datos - trapecio
    cout << "Ingrese la base mayor del trapecio: ";
    cin >> base_mayor;
    cout << "Ingrese la base menor del trapecio: ";
    cin >> base_menor;
    cout << "Ingrese la altura del trapecio: ";
    cin >> altura_trapecio;
    cout << "Ingrese el primer lado no paralelo: ";
    cin >> lado1;
    cout << "Ingrese el segundo lado no paralelo: ";
    cin >> lado2;

    // Cálculos - trapecio
    area_trapecio = ((base_mayor + base_menor) * altura_trapecio) / 2;
    perimetro_trapecio = base_mayor + base_menor + lado1 + lado2;

    // Salida de datos
    cout << "\n--------------- RESULTADOS ----------------" << endl;
    cout << "ÁREA del triángulo:       " << area_triangulo << " cm²" << endl;
    cout << "PERÍMETRO del triángulo:  " << perimetro_triangulo << " cm" << endl;
    cout << "------------------------------------------" << endl;
    cout << "ÁREA del trapecio:        " << area_trapecio << " cm²" << endl;
    cout << "PERÍMETRO del trapecio:   " << perimetro_trapecio << " cm" << endl;
    system("pause");

    return 0;
}
