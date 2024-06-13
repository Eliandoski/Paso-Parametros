//Estudiante: Cifuentes González Elian
//Fecha de entrega: 12/06/2024
//Curso: 1ro de TI


//8) Escriba la función que recibe como parámetro un entero y devuelve el cubo del mismo

#include <iostream>

using namespace std;

//Función que calcula el cubo de un número entero
int cubo(int num) {
    return num * num * num;
}

int main() {
    int num;
    cout << "Ingrese un número entero: ";
    cin >> num;
    cout << "El cubo del número es: " << cubo(num) << endl;
    return 0;
}