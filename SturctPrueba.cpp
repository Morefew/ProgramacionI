//
// Created by leogo on 2/8/23.
//


#include <iostream>

using namespace std;

//estructura de datos de tipo trabajador

struct trabajador {
    string nombre;
    int edad;
    int cedula;
};

//Declarando arreglo universal de registro con el tipo de dato trabajador
trabajador arrempleado[10];
int cantreal = 0;

//Función Adicionar o Guardar trabajador

void GuardarTrabajador() {
    cout << "Entre la cantidad de trabajadores a guardar: ";
    cin >> cantreal;

    //Recorrido del arreglo mediante ciclo for o estructura repetitiva for
    for (int i = 1; i <= cantreal; i++) {
        //Guardar datos de tipo trabajador según los atributos que tiene la estructura trabajador
        cout << "Entre los datos del trabajor: " << i << endl;
        cout << "Nombre:";
        cin >> arrempleado[i].nombre;
        cout << "Edad:";
        cin >> arrempleado[i].edad;
        cout << "Cédula:";
        cin >> arrempleado[i].cedula;

    }
}

//Desarrolando función para mostrar los datos del arreglo de estrutura de tipo trabajador
void MostrarDatosTrabajador(trabajador emp[]) {
    cout << "LISTAR TRABAJADORES" << endl;
    cout << "NOMBRE" << '\t' << "EDAD" << '\t' << "CÉDULA" << endl;
    //Estructura repetitiva para recorrer el arreglo de tipo trabajador y mostrar sus datos
    for (int i = 1; i <= cantreal; i++) {
        //Accediendo a los datos (atributos) de la estructura trabajador para mostrarlos
        cout << emp[i].nombre << '\t' << emp[i].edad << '\t' << emp[i].cedula << endl;
    }

}

//Declarando función de búsqueda de Trabajador según su nombre

void BuscarTrabajadorSegunNombre(string nom, trabajador emp[])
{
    //Estructura repetitiva para recorrer el arreglo de tipo trabajador y buscar el dato solicitado

    for (int i = 1; i <= cantreal; i++)
    {
        //Declarando estructura condicional para chequear que el trabajador está
        if (emp[i].nombre == nom)
        {
            cout << nom << " tiene " << emp[i].edad << " años " << " cédula es " << emp[i].cedula;
            return;
        }
    }
    cout<<"No existe trabajador con ese nombre";
}


int main() {
    string nombt;
    GuardarTrabajador();
    MostrarDatosTrabajador(arrempleado);
    cout << "Entre el nombre del trabajador que desea buscar: ";
    cin >> nombt;
    BuscarTrabajadorSegunNombre(nombt, arrempleado);

    return 0;
}
