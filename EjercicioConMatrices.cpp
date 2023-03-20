//
// Created by leogo on 2/14/23.
//

/* Realice un programa que permita entrar valores reales a
una matriz de n filas y n columnas.
Después de entrado estos datos. Calcule:
i.  El menor elemento de la matriz.
ii. El promedio de la diagonal principal de la matriz.
iii.El mayor elemento de la diagonal principal
iv. La suma de las dos primeras posiciones de la diagonal principal.*/

#include <iostream>

using namespace std;

int matriz[3][3];

//Entrada de datos de la matriz
void GuardarDatosMatriz(){
        for (int i = 1; i <= 3; i++) {
            for (int j = 1; j <= 3; j++) {
                co ut << "Entre el valor de la coordenada " << i << "," << j << " = ";
                cin >> matriz[i][j];
                cout << endl;
            }
        }
}

//Mostrar los elementos guardados en la matriz
void MostrarElementosMatriz(int t[3][3]) {
    for (int i = 1; i <= 3; i++) {
        cout << endl;
        for (int j = 1; j <= 3; j++) {
            cout << t[i][j] << '\t';
        }
    }
    cout<<endl;
}

//Buscar el elemento mayor de la matriz
void BuscarMayorElementoMatriz(int t[3][3]) {
    int mayor = t[1][1];
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (t[i][j] > mayor) {
                mayor = t[i][j];
            }
        }
    }
    cout << endl;
    cout << "El mayor elemento de la matriz es: " << mayor << endl;
}

//Buscar el elemento menor de la matriz
void BuscarMenorElementoMatriz(int t[3][3]) {


    int menor = t[1][1];
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (t[i][j] < menor) {
                menor = t[i][j];
            }
        }
    }
    cout <<
         endl;
    cout << "El menor elemento de la matriz es: " << menor <<
         endl;
}

//Promedio de elementos de la matriz
void PromedioElementosMatriz(int t[3][3]) {
    float suma = 0;
    float contador = 0;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            suma += t[i][j];
            contador++;
        }
    }
    float promedio = suma / contador;
    cout << endl;
    cout << "La suma de elementos de la matriz es: " << suma << endl;
    cout << endl;
    cout << "El promedio es: " << promedio << endl;
}

//Sumar los dos primeros elementos de la diagonal principal
void SumarElementosDiagonalPrincipal(int t[3][3]) {
    float suma_dos_diagonal = 0;
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
//Verificar que estoy en la diagonal principal
            if (i == j) {
                suma_dos_diagonal += t[i][j];
            }
        }
    }
    cout << endl;
    cout << "La suma de los dos primeros valores de la diagonal principal es: " << suma_dos_diagonal << endl;
}

//Llamar las funciones desde el main()
int main() {

    GuardarDatosMatriz();
    MostrarElementosMatriz(matriz);
    BuscarMayorElementoMatriz(matriz);
    BuscarMenorElementoMatriz(matriz);
    PromedioElementosMatriz(matriz);
    SumarElementosDiagonalPrincipal(matriz);
    return 0;
}