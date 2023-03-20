//
// Created by leogo on 1/30/23.
//

#include <iostream>
#include <cmath>

double RaizCuadrada(double var) {
    //Declaración de variables
    double ecuacion = sqrt(pow(var, 3) - 4);    // √2^3-4 = 2
    double b, c, d, e;

    b = pow(ecuacion, 2);                           // 2^2 = 4
    c = b - 4;                                            // 4-4 = 0
    e = 4;
    d = std::cbrt(c);                                 //∛0 = 0

    return d;
}

int main() {


    //Entrada de datos
    cout << "Entre la variable a evaluar:";
    cin >> var;


    RaizCuadrada(var);


    return 100;
}
