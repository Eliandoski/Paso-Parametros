//Estudiante: Cifuentes González Elian
//Fecha de entrega: 12/06/2024
//Curso: 1ro de TI

//3) Ejercicio de sobrecarga de funciones

#include<iostream>
using namespace std;

//Función que devuelve un saludo
string Saludos()
{
    return "Bienvenidos...";
}

string Saludos(string nombre)
{
    return "Bienvenido " + nombre;
}

string Saludos(string nombre, int edad)
{
    if(edad >= 18)
    return "Bienvenido señor " + nombre;
    else
    return "Bienvenido joven " + nombre;
}

int main()
{
    cout << endl << Saludos();
    cout << endl << Saludos("Juan");
    cout << endl << Saludos("Juan Perez", 18);

    string nombre = "Jose Alcivar";
    cout << endl << Saludos(nombre, 16);
    return 0;
}