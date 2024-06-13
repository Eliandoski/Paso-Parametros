//Estudiante: Cifuentes González Elian
//Fecha de entrega: 12/06/2024
//Curso: 1ro de TI

//7) Escriba la función que determina si un número pasado como parámetro es múltiplo de 7

#include <iostream>

using namespace std;

//Función que determina si un número es múltiplo de 7
bool Multiplo7(int num) {
    if (num % 7 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    if (Multiplo7(num)) {
        cout << "El número " << num << " es múltiplo de 7" << endl;
    } else {
        cout << "El número " << num << " no es múltiplo de 7" << endl;
    }

    return 0;
}