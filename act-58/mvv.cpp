// Actividad 58
// Programa mvv.cpp
// Descripción: Este programa realiza la media, desviacion media, y varianza de X cantidad de datos
// Autor: Gio Antonio Canto Gómez

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

// Función para leer los datos del usuario
vector<double> leerDatos(int cantidad) {
    vector<double> datos(cantidad);
    for (int i = 0; i < cantidad; ++i) {
        cout << "Dato #" << (i + 1) << ": ";
        cin >> datos[i];
    }
    return datos;
}

// Función para calcular la media
double calcularMedia(const vector<double>& datos) {
    double suma = 0.0;
    for (double dato : datos) {
        suma += dato;
    }
    return suma / datos.size();
}

// Función para calcular la desviación media y varianza al mismo tiempo
void calcularDesviacionYVarianza(
    const vector<double>& datos,
    double media,
    double& desviacionMedia,
    double& varianza
) {
    double sumaDesviaciones = 0.0;
    double sumaCuadrados = 0.0;

    for (double dato : datos) {
        double diferencia = dato - media;
        sumaDesviaciones += abs(diferencia);
        sumaCuadrados += diferencia * diferencia;
    }

    int n = datos.size();
    desviacionMedia = sumaDesviaciones / n;
    varianza = sumaCuadrados / n;
}

// Función para mostrar resultados
void mostrarResultados(double media, double desviacionMedia, double varianza) {
    cout << fixed << setprecision(2);
    cout << "\n--- Resultados estadísticos ---" << endl;
    cout << "Media aritmética: " << media << endl;
    cout << "Desviación media: " << desviacionMedia << endl;
    cout << "Varianza: " << varianza << endl;
}

// Función principal
int main() {
    int n;
    cout << "¿Cuántos datos vas a ingresar? ";
    cin >> n;

    vector<double> datos = leerDatos(n);
    double media = calcularMedia(datos);

    double desviacionMedia, varianza;
    calcularDesviacionYVarianza(datos, media, desviacionMedia, varianza);

    mostrarResultados(media, desviacionMedia, varianza);

    system("pause");
    return 0;

}