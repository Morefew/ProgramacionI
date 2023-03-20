#include <iostream>
#include <vector>
#include <string>

using namespace std;




//--------------------------------------------------------------------------------------------------------
//                                FAMILIA DE CLASES CLIENTE

//Declarando clase PADRE: CLIENTE
class Cliente {
private:
    //ATRIBUTOS DE LA CLASE
    string nombre;
    char sexo;
    bool clienteFrecuente;
    float tarifaCliente;
    int tipoDeCliente;



public:
    //METODOS DE LA CLASE
    // Constructores
    Cliente(); // constructor default
    Cliente(string nom, char sex, bool clienteF) {
        this->nombre = nom;
        this->sexo = sex;
        this->clienteFrecuente = clienteF;
        this->tarifaCliente = 0;
        this->tipoDeCliente = 0;
    }; // constructor parametrizado.

    // SETTERS
    void SetNombre(string nom) {
        nombre = nom;
    }
    void SetSexo(char sex) {
        sexo = sex;
    }
    void SetClienteFrecuente(bool clienteF) {
        clienteFrecuente = clienteF;
    }
    void SetTarifaCliente(float tarifa) {
        tarifaCliente = tarifa;
    }
    void SetTipoDeCliente(int tipoCliente) {
        tipoDeCliente = tipoCliente;
    }


// GETTERS
    string GetNombre() {
        return nombre;
    }
    char GetSexo() {
        return sexo;
    }
    bool GetClienteFrecuente() {
        return clienteFrecuente;
    }
    float GetTarifaCliente() {
        return tarifaCliente;
    }
    int GetTipoDeCliente() {
        return tipoDeCliente;
    }
    int GetCantDeClientes() {
        return cantDeClientes;
    }

    virtual void MostrarDatosCliente() {
        cout<<"Nombre: "<< this->nombre<<"Sexo: "<< this->sexo<<"Cliente Frecuente: "<<this->clienteFrecuente<<this->tarifaCliente;
    }

    int GetCantidadClienteDom() {
        return cantDeClientesDom;
    }
};

//Declarando clase HIJA de Cliente: CLIENTEDOMINICANO
class ClienteDominicano : public Cliente {
private:
    //ATRIBUTOS DE LA CLASE
    string cedula;
    string direccionParticular;

public:
    //METODOS DE LA CLASE
    // Constructores
    ClienteDominicano(); // constructor default
    ClienteDominicano(string nom, char sex, bool clienteF, string ced, string direccionP) : Cliente(nom,sex,clienteF) {
        this->cedula = ced;
        this->direccionParticular = direccionP;
        this->SetTarifaCliente(500);
        this->SetTipoDeCliente(1);
        cantDeClientesDom++;
    } // constructor parametrizado.

// SETTERS
    void SetCedula(string ced) {
        cedula = ced;
    }
    void SetDireccionParticular(string direccionP) {
        direccionParticular = direccionP;
    }

// GETTERS
    string GetCedula() {
        return cedula;
    }
    string GetDireccionParticular() {
        return direccionParticular;
    }

    // Declarando MÉTODOS POLIMÓRFICOS heredados
    void MostrarDatosCliente() override {
        cout<<"Cliente Dominicano"<<"\n";
        cout<<"Nombre: "<< this->GetNombre()
            <<"Cédula: "<< this->GetCedula()
            << '\t'<<"Sexo: "
            << this->GetSexo()<< '\t'
            <<"Cliente Frecuente: "
            <<this->GetClienteFrecuente()<< '\n';
    }

};

//Declarando clase HIJA de Cliente: CLIENTEEXTRANJERO
class ClienteExtranjero : public Cliente {
private:
    //ATRIBUTOS DE LA CLASE
    string paisNacimiento;
    string nacionalidad;
    string numeroPasaporte;
    string dni;

public:
    //METODOS DE LA CLASE
    // Constructores
    ClienteExtranjero(); // constructor default
    ClienteExtranjero(string nom, char sex, bool clienteF, string paisNac, string nacion, string numPassport, string idnacional) : Cliente(nom, sex, clienteF) {
        this->paisNacimiento = paisNac;
        this->nacionalidad = nacion;
        this->numeroPasaporte = numPassport;
        this->dni = idnacional;
        this->SetTarifaCliente(800);
        cantDeClientesExtran++;
    }; // constructor parametrizado.

// SETTERS
    void SetPaisNacimiento(string paisNac) {
        paisNacimiento = paisNac;
    }
    void SetNacionalidad(string nacion) {
        nacionalidad = nacion;
    }
    void SetNumeroPasaporte(string numPassport) {
        numeroPasaporte = numPassport;
    }
    void SetDni(string idnacional) {
        dni = idnacional;
    }

// GETTERS
    string GetPaisNacimiento() {
        return paisNacimiento;
    }
    string GetNacionalidad() {
        return nacionalidad;
    }
    string GetNumeroPasaporte() {
        return numeroPasaporte;
    }
    string GetDni() {
        return dni;
    }

    // Declarando MÉTODOS POLIMÓRFICOS heredados
    void MostrarDatosCliente() override {
        cout<<"Cliente Extranjero"<<"\n";
        cout<<"Nombre: "<< this->GetNombre()<< '\t'<<"Sexo: "<< this->GetSexo()<< '\t'<<"Cliente Frecuente: "<<this->GetClienteFrecuente()<< '\n';
        cout<<"Pais de Nacimiento: "<<this->GetPaisNacimiento()<< '\t'<<"Nacionalidad: "<< this->GetNacionalidad()<< '\t'<<"Numero de Pasaporte: "<< this->GetNumeroPasaporte()<< '\t'<<"Documento de ID Nacional: "<< this->GetDni()<< '\n';
    }
};

//Declarando clase VIAJE
class Viajes {
private:
    //ATRIBUTOS DE LA CLASE
    string destino;
    int tipoDeServicio;
    int numeroServicio;
    int cantidadTuristas;
    Cliente* cliente;
    string lineaAerea;
    string horaVuelo;
    float precioBaseVuelo;
    Cliente** listaClientes;

//--------------------------------------------------------------------------------------------------------
//                                FAMILIA DE CLASE VIAJES                                //

public:
    //METODOS DE LA CLASE
    // Constructores
    Viajes();// constructor default
    Viajes(string dest, int tipoServ, int numServ, int cantTuristas, string linAe, string horaV, float precioB){
        this->destino = dest;
        this->tipoDeServicio = tipoServ;
        this->numeroServicio = numServ;
        this->cantidadTuristas = cantTuristas;
        this->lineaAerea = linAe;
        this->horaVuelo = horaV;
        this->precioBaseVuelo = precioB;
    }
// SETTERS
    void SetDestino(string dest){
        destino = dest;
    }
    void SetTipoDeServicio(int tipoServ){
        tipoDeServicio = tipoServ;
    }
    void SetNumeroServicio(int numServ){
        numeroServicio = numServ;
    }
    void SetCantidadTuristas(int cantTuristas){
        cantidadTuristas = cantTuristas;
    }
    void SetLineaAerea(string linAe){
        lineaAerea = linAe;
    }
    void SetHoraVuelo(string horaV){
        horaVuelo = horaV;
    }
    void SetPrecioBaseVuelo(float precioB){
        precioBaseVuelo = precioB;
    }
    void SetListaDeClientes(Cliente **lista[]) {
        listaClientes = *lista;
    }


// GETTERS
    string GetLineaAerea(){
        return lineaAerea;
    }
    string GetHoraVuelo(){
        return horaVuelo;
    }
    float GetPrecioBaseVuelo() {
        return precioBaseVuelo;
    }
    string GetDestino(){
        return destino;
    }
    int GetTipoDeServicio(){
        return tipoDeServicio;
    }
    int GetNumeroServicio(){
        return numeroServicio;
    }
    int GetCantidadTuristas(){
        return cantidadTuristas;
    }
    Cliente** GetListadeCliente() {
        return listaClientes;
    }

 //   Métodos polimórficos de la Clase VIAJE.
//CostoTotal = Tarifa a pagar por el pasajero / 27 + precio básico del Servicio
    float CostoTotalPasaje(Cliente* cliente) {
        float costo;
        float tarf = cliente->GetTarifaCliente();
        float preB = GetPrecioBaseVuelo();
        costo = (tarf / 27) + preB;
        return costo;
    }
};
// Declarando la lista de clientes como nullptr
Cliente** Viajes::listaClientes = nullptr;

//Inicializando CONSTRUCTORES de la Clase VIAJE


//IMPLEMENTACIÓN de GETTERS y SETTERS de la Clase VIAJE.




//--------------------------------------------------------------------------------------------------------
//                                CLASE SERVICIOS                                //

//Declarando clase PADRE: SERVICIOS
class Servicios {
private:
    //ATRIBUTOS DE LA CLASE
    int cantTuristas = 0;
    Cliente **cliente;
protected:
    int cantDeClientesDom = 0;
    int cantDeClientesExtran = 0;
    int cantDeClientes = cantDeClientesExtran + cantDeClientesDom;


public:

    //METODOS DE LA CLASE
    // Constructores
    Servicios(){
        cantTuristas = 0;
        cliente = new Cliente *[100];
    }; // Contructor Default
    ~Servicios() {
        for (int i = 0; i < cantTuristas; i++) {
            delete cliente[i];
        }
        delete[]cliente;
    }; // Destructor

    void CrearOrden(Cliente *client){
        cliente[cantTuristas] = client;
        cantTuristas++;
    };


};

/*  Dado una tarifa liste los pasajeros extranjeros que superan ese monto. - Lenny */
void MaximoMontoExtranjero(float tarif) {
    for (int i = 1; i < ClienteExtranjero::GetCantDeClientes(); i++) {
        if (Servicios::GetListadeCliente()[i]->GetTarifaCliente() == tarif) {
            cout <<
                 "Nombre: " << Viajes::listaClientes[i]->GetNombre() << '\t' <<
                 "Sexo: " << Viajes::listaClientes[i]->GetSexo() << '\t' <<
                 "Cliente Frecuente: " << Viajes::listaClientes[i]->GetClienteFrecuente() << '\t'<<
                "Pais de Nacimiento: "<<Viajes::listaClientes[i]->GetPaisNacimiento()<<'\t'<<;
        }
    }
}


/*  Listar los pasajeros que han viajado anteriormente con DiMar (Viajeros Frecuente). - Eliana */
void ListadoDeClientesFrecuentes() {
    for (int i = 1; i < Cliente::GetCantDeClientes(); i++) {
        if (Servicios::GetListadeCliente().GetClienteFrecuente() == 'v') {
            cout <<
                 "Nombre: " <<Servicios::listaClientes[i] << '\t' <<
                 "Sexo: " << Servicios::listaClientes[i]->GetSexo() << '\t' <<
                 "Cliente Frecuente: " << Servicios::listaClientes[i]->GetClienteFrecuente() << '\t' <<
                 "Pais de Nacimiento: "<<Servicios::listaClientes[i]->GetPaisNacimiento()<< '\t';
        }
    }
}
/*  Cantidad de pasajeros nacionales. - Ernesto */

void CantidadClienteDominicano(){
    cout<<"La Cantidad de Clientes Nacionales es: "<<&Cliente::GetCantidadClienteDom<<'\n';
}


/*  Dada la cedula de un ClienteDominicano, muestre sus datos. - Fernanda */
void BuscarPorCedula(ClienteDominicano clienteDo, string ced) {
    if(clienteDo.GetCedula() == ced ){
        cout<<"Nombre: "<< clienteDo.GetNombre()<<'\t'
            <<"Cédula: "<< clienteDo.GetCedula()<<'\t'
            <<"Sexo: "<< clienteDo.GetSexo()<< '\t'
            <<"Cliente Frecuente: "<<clienteDo.GetClienteFrecuente()<< '\n';
    }
}
/*  Determine la tarifa (precio base) de pasaje según el tipo de cliente (dominicano y extranjero). - Fernanda*/

void TarifaSegunCliente(int tipoCliente){
    if(tipoCliente == 1){
        cout<<"Tarifa para Cliente Dominicano = "<<ClienteDominicano::GetTarifaCliente();
    } else cout<<"Tarifa para Cliente Extranjero = "<<ClienteExtranjero::GetTarifaCliente<<'\n';
}

/*  Muestre los datos de los Clientes de sexo masculino. - Ernesto */
void BuscarClientePorSexo() {
    for (int i = 0; i < cantDeClientes; i++) {
        if (Servicios::listaClientes[i].GetSexo() == 'M') {
            cout << "Nombre: " << Viajes::listaClientes[i].GetNombre() << '\t'
                 << "Cédula: " << Viajes::listaClientes[i].GetCedula() << '\t'
                 << "Sexo: " << Viajes::listaClientes[i].GetSexo() << '\t'
                 << "Cliente Frecuente: " << Viajes::listaClientes[i].GetClienteFrecuente() << '\n';
        }
    }
}

//Función MAIN para la ejecución del programa en consola
int main(){
int tipoDeCliente = 0;
        cout<<"Ingrese 1 para buscar la TARIFA de CLIENTES DOMINICANOS"<<'\n'
    <<"Ingrese 2 para buscar la TARIFA de CLIENTES EXTRANJEROS"<<'\n';
cin>>tipoDeCliente;
    TarifaSegunCliente(tipoDeCliente);


return 0;
}