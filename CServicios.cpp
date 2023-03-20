#include <iostream>

using namespace std;

class Servicios {
private:
    string destino;
    string tipoDeServicio;
    int numeroViaje;
    int cantidadTuristas;
    float precioBasico;
    int vehiculoUtilizado;
    string *listadoClientes;

public:
    // los nombres de las variables y los parametros nombres diferentes
    Servicios(); // Contructor Default
    Servicios(string dest, string tipoServ, int numViaje, int cantTuristas, int *listaClie[], int vehicUtiliz, float precioB);

    //Declarando Métodos de escritura
    void SetDestino(string dest);

    void SetTipoDeServicio(string tipoServ);

    void SetCantidadTuristas(int cantTuristas);

    void SetListadoClientes(int listaClie);

    void SetVehiculoUtilizado(int vehicUtiliz);

    void SetPrecioBasico(float precioB);

    //Declarando Métodos de lectura y devuelve el valor
    string GetDestino();

    string GetTipoDeServicio();

    int GetNumeroViaje();

    int GetCantidadTuristas();

    int GetListadoClientes();

    int GetVehiculoUtilizado();

    float GetPrecioBasico();

    void SetNumeroViaje(int numViaje);
};

// Clase hija Viaje hereda de Padre Servicios

class Viajes : Servicios {
private:
    string lineaAerea;
    string horaVuelo;

public:
    Viajes();
    Viajes(string dest, string tipoServ, int numViaje, int cantTuristas, int *listaClie[], int vehicUtiliz, float precioB, string liAerea, string horaVu);

    void SetLineaAerea(string liAerea);
    void SetHoraVuelo(string horaVu);

};

// Clase hija Excursiones

class Excursiones : Servicios {
private:
    string nombreDelGuia;
    string lugarAlmuerzo;

public:
    Excursiones(); // Contructor Default
    Excursiones(string destino, string tipoServ, int numViaje, int cantTuristas,int *listaClie, int vehicUtiliz, float precioB, string guia, string almuerzo);

    void SetNombreDelGuia(string guia);

    void SetLugarAlmuerzo(string almuerzo);

    string GetNombreGuia();

    string GetLugarAlmuerzo();
};


// Inicializando Constructores de las Clases Servicio, Viaje y Excursiones.

Servicios::Servicios(string dest, string tipoServ, int numViaje, int cantTuristas, int *listaClie, int vehicUtiliz, float precioB)
{
    this->destino = dest;
    this->tipoDeServicio = tipoServ;
    this->numeroViaje = numViaje;
    this->cantidadTuristas = cantTuristas;
    this->listadoClientes = new listaClie;
    this->vehiculoUtilizado = vehicUtiliz;
    this->precioBasico = precioB;
};

Viajes::Viajes(string dest, string tipoServ, int numViaje, int cantTuristas, int *listaClie[], int vehicUtiliz, float precioB, string liAerea, string horaVu):Servicios(dest, tipoServ, numViaje, cantTuristas,  *listaClie[], vehicUtiliz, precioB)
{
    this->lineaAerea = liAerea;
    this->horaVuelo = horaVu;
};

Excursiones(string destino, string tipoServ, int numeroViaje, int cantTuristas, int *listaClie[], int vehicUtiliz, float precioB, string guia, string almuerzo): Servicios(dest, tipoServ, numViaje, cantTuristas,  *listaClie[], vehicUtiliz, precioB)
{
this->nombreDelGuia = guia;
this->lugarAlmuerzo = almuerzo;


};

//Métodos de lectura (Get) y escritura (Set) de las Clases Servicio

void Viajes::SetDestino(string dest) {
    destino = dest;
}

void Viajes::SetTipoDeServicio(string tipoServ) {
    tipoDeServicio = tipoServ;
}

string Viajes::GetDestino() {
    return destino;
}

string Viajes::GetTipoDeServicio() {
    return TipoServ;
}

void Viajes::GetCantidadDeTuristas(string cantTuristas) {
    CantidadDeTuristas = cantTuristas;
}

void Viajes::GetListadoClientes(string listaClie) {
    ListadoClientes = listaClie;
}

void Viajes::GetVehiculoUtilizado(string vehicUtiliz) {
    VehiculoUtilizado = vehicUtiliz;
}

void Viajes::GetPrecioBasico(string precioB) {
    PrecioBasico = precioB;
}

void Excursiones::SetNombreDelGuia(string guia) {
    NombreDelGuia = guia;
}


void Excursiones::SetLugarAlmuerzo(string almuerzo) {
    LugarAlmuerzo = almuerzo;
}
