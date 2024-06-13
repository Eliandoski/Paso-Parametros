//Estudiante: Cifuentes González Elian
//Fecha de entrega: 12/06/2024
//Curso: 1ro de TI

//2) Ejercicio de paso de parámetros por referencia

#include<iostream>
using namespace std;

//Función que recibe un parámetro por referencia
int FuncionPasoReferencia(int& num)
{
    num = num * 10;
    cout << endl << "El valor de num dentro de la funcion: " << num;
    return 1;
}
 //Funcion  que no retorna valores, pero que intercambia los valores de a y b
 //Sean 2 variables a=10 y b=20. La funcion debe hacer que a igual a 20 y b igual 10.
 void Intercambio(int& a, int& b)
 {
    int aux = a;
    a = b;
    b = aux;
}
int main()
{
    int num = 2;
    cout << endl << "El valor de num antes de la llamada: " << num;
    FuncionPasoReferencia(num);
    cout << endl << "El valor de num despues de la llamada: " << num << endl;

    int a = 10, b = 20;
    cout << endl << "El valor de a antes del intercambio: " << a;
    cout << endl << "El valor de b antes del intercambio: " << b << endl;
    Intercambio(a, b);
    cout << endl << "El valor de a después del intercambio: " << a;
    cout << endl << "El valor de b antes del intercambio: " << b;
    return 0;
}