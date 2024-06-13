//Estudiante: Cifuentes González Elian
//Fecha de entrega: 12/06/2024
//Curso: 1ro de TI

//5) Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve el promedio de estos números

#include <iostream>

using namespace std;

//Función que calcula el promedio de 3 números reales
double calcularPromedio(double num1, double num2, double num3) {
    double promedio = (num1 + num2 + num3) / 3;
    return promedio;
}

int main() {
    double num1, num2, num3;
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    double promedio = calcularPromedio(num1, num2, num3);
    cout << "El promedio de los números ingresados es: " << promedio << endl;

    return 0;
}

