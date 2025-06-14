// Actividad 69 – Estadística básica con arreglo de 350 números
// Programa: numo.cpp
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    std::vector<int> datos;
    int numero;
    int sumaPosPar = 0;
    int contadorPosPar = 0;
    int contadorNegativos = 0;

    const int TOTAL = 350;

    for (int i = 0; i < TOTAL; ++i) {
        std::cout << "Ingrese el dato " << i + 1 << ": ";
        while (!(std::cin >> numero)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Entrada invalida. Ingrese un numero: ";
        }
        datos.push_back(numero);
    }

    for (size_t i = 0; i < datos.size(); ++i) {
        if (i % 2 == 0) { // posición par
            sumaPosPar += datos[i];
            contadorPosPar++;
        }
        if (datos[i] < 0) {
            contadorNegativos++;
        }
    }

    double mediaPosPar = (contadorPosPar > 0) ? static_cast<double>(sumaPosPar) / contadorPosPar : 0.0;
    double porcentajeNegativos = static_cast<double>(contadorNegativos) * 100 / TOTAL;

    std::cout << "\n================================\n";
    std::cout << "RESULTADOS ESTADISTICOS\n";
    std::cout << "================================\n";
    std::cout << "Media de los valores en posiciones pares: " << std::fixed << std::setprecision(2) << mediaPosPar << std::endl;
    std::cout << "Porcentaje de números negativos: " << std::fixed << std::setprecision(2) << porcentajeNegativos << "%" << std::endl;

    system("pause");
    return 0;
}
