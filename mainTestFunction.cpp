#include <iostream>
#include <cmath>

using namespace std;

/* FUNCIÓN RADICAL
 * f(x) = √x^3-4 ≥ 0.
 *
 * Cuando hay una raíz par en la fórmula excluimos cualquier número real
 * que resulte en un número negativo en el radicando.
 * Establecemos el radicando mayor o igual a cero y resolvemos para x.
 *
 *
 */

double FuncionRadical(double constante){
    double x = 1.587401052;
    double ecuacion, simplconst, simplraiz, simplexpo, segundoterm;

    ecuacion = sqrt(pow(x,3) - constante);                // √x^3-4 =  2
    simplraiz = pow(ecuacion, 2);                         // x^3-4  =  4
    simplconst = simplraiz + constante;                         // x^3    =  8
    simplexpo = ::cbrt(simplconst);                          // ∛x^3   =  2
    segundoterm = ::cbrt(simplexpo);                         // ∛4     = 1.25992105

    if (x >= segundoterm) {
        cout << "Resuelva la siguiente función radical:" << endl;
        cout << endl;
        cout << "f(x) = √"<< constante <<"^3 − 4" << endl;
        cout << endl;
        cout << endl;
        cout << "≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣ Proceso ≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" << endl;
        cout << endl;
        cout << "Igualamos x a " << constante << endl;
        cout << "ecuación √"<< constante <<"^3 − 4= " << ecuacion << endl;
        cout << "Simplificamos la raíz cuadrada = " << simplraiz << endl;
        cout << "Simplificamos la constante = " << simplconst << endl;
        cout << "Simplificamos el exponente = " << simplexpo << endl;
        cout << endl;
        cout << "≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" << endl;
        cout << "≣≣≣≣≣≣≣≣≣      El Limite es:        ≣≣≣≣≣≣≣≣≣≣≣" << endl;
        cout << "≣≣≣≣≣≣≣≣≣    x ≥ ∛4 ó x ≥ " << x << "    ≣≣≣≣≣≣≣≣≣≣≣" << endl;
        cout << "≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" << endl;
    } else {
        cout << "-----------------ERROR------------------------" << endl;
        cout << endl;
        cout << "El valor no es el correcto = " << segundoterm << endl;

    }
    return segundoterm;
}

int main() {
    //Variables
    double valor;


    //Entrada de datos

    cout<<"Entre el valor:";
    cin>>valor;


    FuncionRadical(valor);



    return 100;


}
