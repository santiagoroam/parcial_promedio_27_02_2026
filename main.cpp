#include <iostream>
using namespace std;

double calcularPromedio(double valores[], int n) {
    double suma = 0.0;

    for (int i = 0; i < n; i++) {
        suma += valores[i];
    }

    return suma / n;
}

int main() {
    int n;

    cout << "Ingrese la cantidad de valores: ";
    cin >> n;

    if (n <= 0) {
        cout << "La cantidad debe ser mayor que 0." << endl;
        return 1;
    }

    double valores[n];

    cout << "Ingrese los valores:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> valores[i];
    }

    double promedio = calcularPromedio(valores, n);

    cout << "El promedio es: " << promedio << endl;

    return 0;
}