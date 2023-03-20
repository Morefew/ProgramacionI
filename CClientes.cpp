#include <iostream>

using namespace std;

//Declarando clase padre cliente

class Cliente {
private:
    string nombre;
    char sexo;
    bool clienteFrecuente;
    float precioBasico;


public:
    //Nombre de las variables y parametros
    Cliente();
    Cliente(string nom, char sex, bool clienteF, float precioB);

    //declarando metodos de escritura (Set) y (Get) de la clase padre

    void SetNombre(string nom);

    void SetSexo(char sex);

    void SetClienteFrecuente(bool clienteF);

    void SetPrecioBasico(float precioB);


    string GetNombre();

    char GetSexo();

    bool GetClienteFrecuente();

    float GetPrecioBasico();

};

//clase hija cliente dominicano


class ClienteDominicano : public Cliente
{
private:
    string cedula;
    string direccionParticular;

public:

    ClienteDominicano(string nom, char sex, bool clienteF, float precioB, string ced, string direccionP);

    void SetCedula(string ced);

    void SetdireccionParticular(string direccionP);

    string GetCedula();

    string GetDireccionParticular();

};



//clase hija cliente extranjero
class ClienteExtranjero : public Cliente
{
private:
    string paisNacimiento;
    string nacionalidad;
    string numeroPasaporte;
    string dni;

public:
    clienteExtranjero(string nom, char sexo, bool clienteF, float precioB, string paisN, string nacionalidad, string numeroP, string dni);


    void SetPaisNacimiento(string paisNac);

    void SetNacionalidad(string nacionalidad);

    void SetNumeroPasaporte(string numPassport);

    void SetDni(string dni);

    string GetPaisNacimiento();

    string GetNacionalidad();

    string GetNumeroPasaporte();

    string GetDni();




};


//inicializando constructores de la clase padre cliente

Cliente::Cliente(string nom, char sex, bool clienteF, float precioB)
{
    this->nombre = nom;
    this->sexo = sex;
    this->clienteFrecuente = clienteF;
    this->precioBasico = precioB;

}

clienteDominicano::clienteDominicano(string nom, char sex, bool clienteF, float precioB, string ced, string direccionP)

{
    this->cedula=ced;
    this->direccionParticular=direccionP;
}


ClienteExtranjero::Cliente(string nom, char sex, bool clienteF, float precioB)
{
this->paisNacimiento=paisN;
this->nacionalidad=nacionalidad;
this->numeroPasaporte=numP;
this->dni=dni;
}


//metodos de escritura (Set) y lectura (Get) de todas las clases clientes



void Cliente::Cliente(string nom, char sex, bool clienteF, float precioB) {
    this->
}

void Cliente::SetSexo(char sex){
    sexo = sex;
}

float Cliente::GetPrecioBasico() {
    return precioBasico;
}

void cliente::SetclienteFrecuente(bool clienteF)
clienteFrecuente = clienteF:{
}

void cliente::SetprecioBasico(float precioB)
precioBasico=precioP;{
}


string viaje::GetNombre()
return nom;{
}

char viaje::GetSexo()
return sex;{
}

bool viaje::GetClienteFrecuente()
return clienteF;{
}

float viaje::GetPrecioBasico()
return precioB;{
}



void clienteDominicano::SetCedula(string ced);
cedula=ced;{
}

void clienteDominicano::SetDireccionParticular(string direccionP);
direccionParticular=direccipnP;{
}

string clienteDominicano::GetCedula()
return ced;{
}

string clienteDominicano::GetDireccionParticular()
return direccionP;{
}


void clienteExtranjero::SetPaisNacimiento(string paisN);
paisNacimiento=paisN;{
}

void clienteExtranjero::SetNacionalidad(string nacionalidad);
nacionalidad=nacionalidad;{
}

void clienteExtranjero::SetNumeroPasaporte(string numPassport);
numeroPasaporte=numPassport;{
}

void clienteExtranjero::SetDni();
dni=dni;{
}


string clienteExtranjero::GetPaisNacimiento()
return clienteF;{
}

string clienteDominicano::GetNacionalidad()
return nacionalidad;{
}

string clienteExtranjero::GetNumeroPasaporte()
return numPassport;{
}

string clienteDominicano::GetDni()
return dni;{
}


