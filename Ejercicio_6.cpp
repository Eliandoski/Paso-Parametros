//Estudiante: Cifuentes González Elian
//Fecha de entrega: 12/06/2024
//Curso: 1ro de TI

/*6) Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números. 
Además, en un parámetro pasado por referencia devuelve la sumatoria de los mismos*/

#include <iostream>

using namespace std;

//Función que calcula el promedio de 3 números reales y devuelve la sumatoria de los mismos
double calcularPromedioySumatoria(double num1, double num2, double num3, double& sumatoria) {
    sumatoria = num1 + num2 + num3;
    return sumatoria / 3;
}

int main() {
    double num1, num2, num3;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercer número: ";
    cin >> num3;

    double sumatoria;
    double promedio = calcularPromedioySumatoria(num1, num2, num3, sumatoria);

    cout << "El promedio de los números es: " << promedio << endl;
    cout << "La sumatoria de los números es: " << sumatoria << endl;

    return 0;
}