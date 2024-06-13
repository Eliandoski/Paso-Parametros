//Estudiante: Cifuentes González Elian
//Fecha de entrega: 12/06/2024
//Curso: 1ro de TI

//1) Ejercicio de paso de parámetros por valor

#include<iostream>
using namespace std;

//Función que recibe un parámetro por valor
int FuncionPasoporValor(int num)
{
    num = num * 10;
    cout << endl << "El valor de la variable num dentro de la funcion: " << num;
    return 1;
}
 int main()
 {
    int num = 2;
    cout << endl <<"El valor de la variable num antes de la llamada: " << num;
    FuncionPasoporValor(num);
    cout << endl <<"El valor de la variable num despues de la llamada: " << num;
    return 0;
 }
