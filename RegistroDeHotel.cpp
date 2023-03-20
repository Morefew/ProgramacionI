//
// Created by leogo on 2/10/23.
//
#include <iostream>


using namespace std;



/* Desarrollar una aplicación para registro de visitantes para el Hotel Platys Gialos.
 *
 * El registro debe contener nombre, cédula, fecha de ingreso y salida, país de procedencia.
 * - REQUERIMIENTOS -
 * La aplicación debe lograr lo siguiente:
 * a) Mostrar la información de los turistas que visitan.
 * b) Conocer la cantidad de huéspedes que hay en el hotel en una fecha determinada.
 * c) Conocer la cantidad de huéspedes por país.
 *
 * Lógica por Requerimiento:
 * - Registrar visitante -> opcional: asegurar que no esté registrado.
 * a) Búsqueda lineal en un arreglo usando los atributos de la estructura "Visitante" (módulo de reportes)
 * b) Búsqueda lineal por fecha de ingreso
 * c) Búsqueda lineal por país.
*/


// Declaración de variables:
struct visitante {
    string nombre;
    string cedula;
    string fechaIngreso;
    string fechaSalida;
    string paisProcedencia;
};

int huespedesTotal = 0;
visitante arregloHuespedes[6];
int noDeRegistros;
int arrayLength = sizeof(arregloHuespedes) / sizeof(visitante);


//Las funciones pueden ser: IngresarHuésped, RetirarHuésped, BuscarProcedencia, TotalDeHuéspedes, HabitaciónDeVisitante.

void IngresarHuesped() {
    cout << "                     Sistema de Gestión Hotel Platys Gialos                     " << endl;
    cout << "≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" << endl;
    cout << endl;
    cout << "                      _    _           _            _                     " << endl;
    cout << "                     | |  | |         | |          | |                     " << endl;
    cout << "                     | |__| |   ___   | |_    ___  | |                     " << endl;
    cout << "                     |  __  |  / _ \\  | __|  / _ \\ | |                     " << endl;
    cout << "                     | |  | | | (_) | | |_  | ___/ | |                     " << endl;
    cout << "                     |_|  |_|  \\___/   \\__|  \\___| |_|                     " << endl;
    cout << " _____    _           _                      _____   _           _" << endl;
    cout << "|  __ \\  | |         | |                    / ____| (_)         | |" << endl;
    cout << "| |__) | | |   __ _  | |_   _   _   ___    | |  __   _    __ _  | |   ___    ___" << endl;
    cout << "|  ___/  | |  / _` | | __| | | | | / __|   | | |_ | | |  / _` | | |  / _ \\  / __|" << endl;
    cout << "| |      | | | (_| | | |_  | |_| | \\__ \\   | |__| | | | | (_| | | | | (_) | \\__ \\" << endl;
    cout << "|_|      |_|  \\__,_|  \\__|  \\__, | |___/    \\_____| |_|  \\__,_| |_|  \\___/  |___/" << endl;
    cout << "                             __/ |" << endl;
    cout << "                            |___/" << endl;

    cout << "≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" << endl;
    cout << "≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣ ACTUALMENTE CONTAMOS CON: " << (arrayLength - 1) - huespedesTotal
         << " HABITACIONES ≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" << endl;
    cout << endl;
    cout << endl;
    cout << "Introduzca la cantidad de huéspedes a registrar: ";
    cin >> noDeRegistros;
    if (noDeRegistros > arrayLength - 1)
    {
        cout << "- No disponemos de la cantidad de habitaciones requeridas -" << endl;
        cout << " INTRODUZCA UNA CANTIDAD MENOR QUE EL TOTAL DE HABITACIONES: "
             << arrayLength - 1<< endl;
        cout << "Introduzca la cantidad de huéspedes a registrar: " << endl;
        cin >> noDeRegistros;
        goto ingreso;
    }
    else
    {
        ingreso:
        {
            for (int i = 1; i <= noDeRegistros; i++)
            {
                cout << "Entre los datos del huésped: " << i << endl;
                cout << "Nombre: ";
                cin >> arregloHuespedes[i].nombre;
                cout << "Cédula: ";
                cin >> arregloHuespedes[i].cedula;
                cout << "Fecha de Ingreso: ";
                cin >> arregloHuespedes[i].fechaIngreso;
                cout << "Fecha de Salida: ";
                cin >> arregloHuespedes[i].fechaSalida;
                cout << "Pais de Procedencia: ";
                cin >> arregloHuespedes[i].paisProcedencia;
                huespedesTotal++;
            }
            cout << "Bienvenidos al Hotel Platys Gialos" << endl;
            cout << "≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" << endl;
            cout << endl;
        }
    }
}

void RetirarHuesped(string nombre) {
    cout << endl;
    cout << "Sistema de Registro Hotel Platys Gialos" << endl;
    cout << "Módulo para el Retiro de Huéspedes" << endl;
    cout << endl;
    bool encontrado = false;
    for (int i = 1; i <= sizeof(arregloHuespedes) / sizeof(visitante); i++) {
        if (nombre == arregloHuespedes[i].nombre) {
            cout << "El Huésped " << arregloHuespedes[i].nombre << ", hospedado en la habitación " << i
                 << " se ha retirado " << endl;
            huespedesTotal--;
            encontrado = true;
            arregloHuespedes[i].nombre = "";
            arregloHuespedes[i].cedula = "";
            arregloHuespedes[i].fechaIngreso = "";
            arregloHuespedes[i].fechaSalida = "";
            arregloHuespedes[i].paisProcedencia = "";
        }

    }
    if(!encontrado){
        cout<<"La persona buscada no está hospedada con nosotros"<<endl;
    }
    cout << "≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" << endl;
}

void TotalDeHuespedes() {
    cout << "≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" << endl;
    cout << endl;
    cout << endl;
    cout << "El total de Huéspedes alojados es: " << huespedesTotal << endl;
    cout << endl;
    cout << endl;
    cout << "≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" << endl;
}

void HabitacionDeHuesped(string nombre) {
    bool hospedado = false;

    cout << endl;
    cout << "Sistema de Gestión Hotel Platys Gialos" << endl;
    cout << "Módulo Búsqueda de Huéspedes por Habitación" << endl;
    cout << "Buscando el nombre: " << nombre << endl;
    cout << endl;
    for (int i = 1; i < sizeof(arregloHuespedes) / sizeof(visitante); i++) {
        if (nombre == arregloHuespedes[i].nombre) {
            hospedado = true;
            cout << nombre << " se encuentra en la habitación: " << i << endl;
            cout << "FECHA DE INGRESO" << "\t" << "FECHA DE SALIDA" << endl;
            cout << arregloHuespedes[i].fechaIngreso << "\t\t\t\t\t" << arregloHuespedes[i].fechaSalida << endl;
            break;
        }
    }
    if (!hospedado) {
        cout << "La persona que busca no está hospedada con nosotros" << endl;
    }
    cout << "≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" << endl;
}

void BuscarPorFecha(string fecha) {
    int cantidadDeHuespedes = 0;

    cout << endl;
    cout << "Sistema de Gestión Hotel Platys Gialos" << endl;
    cout << "Buscando Cantidad de Huéspedes alojados en la fecha " << fecha << endl;
    cout << endl;

    for (int i = 1; i < sizeof(arregloHuespedes) / sizeof(visitante); i++) {
        if (fecha == arregloHuespedes[i].fechaIngreso) {
            cantidadDeHuespedes++;

        }
    }
    cout << "Contamos con " << cantidadDeHuespedes << " huéspedes para la fecha: " << fecha
         << " alojados en nuestro Hotel" << endl;
    cout << "≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" << endl;
}

void BuscarProcedencia(string pais) {
    int cantidadDeHuespedes = 0;

    cout << endl;
    cout << "Módulo Búsqueda de Huéspedes por País" << endl;
    cout << "Buscando Huéspedes del País: " << pais << endl;
    cout << endl;

    for (int i = 1; i < sizeof(arregloHuespedes) / sizeof(visitante); i++) {
        if (pais == arregloHuespedes[i].paisProcedencia) {
            cantidadDeHuespedes++;
        }
    }
    cout << "Contamos con " << cantidadDeHuespedes << " huéspedes del país " << pais
         << " alojados en nuestras instalaciones" << endl;
    cout << "≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" << endl;
}

void BuscarHuespedPorNombre(string nombre) {
    bool encontrado = false;

    cout << endl;
    cout << "Sistema de Gestión Hotel Platys Gialos" << endl;
    cout << "Módulo Búsqueda de Huéspedes por Nombre" << endl;
    cout << "Buscando el nombre: " << nombre << endl;

    for (int i = 1; i < sizeof(arregloHuespedes) / sizeof(visitante); i++) {
        if (nombre == arregloHuespedes[i].nombre) {
            encontrado = true;
            cout << "NOMBRE" << "\t" << "CÉDULA" << "\t" << "HABITACION" "\t" << "FECHA DE INGRESO" << "\t"
                 << "FECHA DE SALIDA" << "\t" << endl;
            cout << nombre << "\t" << arregloHuespedes[i].cedula << "\t\t\t" << i << "\t\t\t"
                 << arregloHuespedes[i].fechaIngreso << "\t\t\t\t\t" << arregloHuespedes[i].fechaSalida << endl;
            cout << endl;
            break;
        }
    }
    if (!encontrado) {
        cout << "La persona que busca no está hospedada con nosotros" << endl;
    }
    cout << "≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" << endl;

}

int main() {
    string nombre;
    string fecha;
    string pais;
    IngresarHuesped();
    TotalDeHuespedes();
    cout << "Introduzca el nombre del huésped que desea retirar: ";
    cin >> nombre;
    RetirarHuesped(nombre);
    TotalDeHuespedes();
    cout << "Introduzca el nombre del huésped que desea buscar: ";
    cin >> nombre;
    BuscarHuespedPorNombre(nombre);
    cout << "Introduzca el país que desea buscar: ";
    cin >> pais;
    BuscarProcedencia(pais);
    cout << "Introduzca la fecha que desea buscar: ";
    cin >> fecha;
    BuscarPorFecha(fecha);
    cout << "Introduzca el nombre del huésped que desea buscar: ";
    cin >> nombre;
    HabitacionDeHuesped(nombre);
    TotalDeHuespedes();
    return 0;
}