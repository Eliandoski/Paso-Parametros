//Estudiante: Cifuentes González Elian
//Fecha de entrega: 12/06/2024
//Curso: 1ro de TI

/*4) Diseñe la función que resuelva el problema de la ecuación cuadrática. La función debe recibir en total 5 parámetros: 
los 3 primeros son los valores a, b y c que representan los coeficientes de la ecuación. 
Los 2 parámetros restantes representan los valores resultantes de la ecuación, en este caso x1, y x2 que se deben 
pasar como referencias. La función devuelve falso, si la ecuación presenta errores; caso contrario devuelve verdadero.
*/

#include <iostream>
#include <cmath>

using namespace std;

//Función que resuelve la ecuación cuadrática
bool EcuacionCuadratica(double a, double b, double c, double& x1, double& x2) {
    double discriminante = b * b - 4 * a * c;
    
    //FALTA CONSIDERA CUANDO LA "A" ES CERO
    
    if (discriminante < 0) {
        return false; 
    }
    
    x1 = (-b + sqrt(discriminante)) / (2 * a);
    x2 = (-b - sqrt(discriminante)) / (2 * a);
    
    return true; 
}

int main() {
    double a, b, c, x1, x2;
    
    cout << "Ingrese los valores de a, b y c: ";
    cin >> a >> b >> c;
    
    if (EcuacionCuadratica(a, b, c, x1, x2)) {
        cout << "Las raíces de la ecuación cuadrática son: " << x1 << " y " << x2 << endl;
    } else {
        cout << "La ecuación cuadrática no tiene raíces reales" << endl;
    }
    
    return 0;
}


