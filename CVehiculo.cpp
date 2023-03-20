//--------------------------------------------------------------------------------------------------------
//                                FAMILIA DE CLASES VEHICULO                                //
//Declarando clase PADRE: VEHICULO
class Vehiculo {
private:
    //ATRIBUTOS DE LA CLASE
    string matricula;
    int capacidadPasajeros;
    string nombreChofer;
    string tipoDeCombustible;
    int tipoDeVehiculo;

public:
    //METODOS DE LA CLASE
    // Constructores
    Vehiculo(); // constructor default
    Vehiculo(string mat, int capPasajeros, string nomChofer, string tipoCombu, int tipoVehic); // constructor parametrizado.

    //Declarando los Métodos de escritura SETTERS
    void SetMatricula(string mat);
    void SetCapacidadPasajeros(int capPasajeros);
    void SetNombreChofer(string nomChofer);
    void SetTipoDeCombustible(string tipoCombu);
    void SetTipoDeVehiculo(int tipoVehic);

    //Declarando los Métodos de lectura GETTERS
    string GetMatricula();
    int GetCapacidadPasajeros();
    string GetNombreChofer();
    string GetTipoDeCombustible();
    int GetTipoDeVehiculo();

    // Declarando Métodos polimórficos
    virtual void MostrarDatosVehiculo();
};



//Declarando clase HIJA de Vehiculo: TAXI
class Taxi : Vehiculo {

private:
    string marca;

public:
    //METODOS DE LA CLASE
    // Constructores
    Taxi(); // constructor default
    Taxi(string mat, int capPasajeros, string nomChofer, string tipoCombu, int tipoVehic, string marc);// constructor parametrizado.

    //Declarando los Métodos de escritura SETTERS
    void SetMarca(string marc);

    //Declarando los Métodos de lectura GETTERS
    string GetMarca();

    // Declarando Métodos polimórficos
    void MostrarDatosVehiculo() override;
};



//Declarando clase HIJA de Vehiculo: AUTOBUS
class Autobus : Vehiculo {
private:
    //ATRIBUTOS DE LA CLASE
    int cantMantenimientosRealizados;
    string proximoMantenimiento;

public:
    //METODOS DE LA CLASE
    // Constructores
    Autobus();
    Autobus(string mat, int capPasajeros, string nomChofer, string tipoCombu, int tipoVehic, int cantMantRea, string proxMant);

    //Declarando los Métodos de escritura SETTERS
    void SetCantMantRealizados(int cantMantRea);
    void SetProximoMant(string proxMant);

    //Declarando los Métodos de lectura GETTERS
    int GetCantMantRealizados();
    string GetProximoMant();

    // Declarando Métodos polimórficos
    void MostrarDatosVehiculo() override;

};

// Inicializando Constructores de las Clases Padre Cliente
Vehiculo::Vehiculo(string mat, int capPasajeros, string nomChofer, string tipoCombu, int tipoVehic) {
    this->matricula = mat;
    this->capacidadPasajeros = capPasajeros;
    this->nombreChofer = nomChofer;
    this-> tipoDeCombustible = tipoCombu;
    this-> tipoDeVehiculo = tipoVehic;
}

// Inicializando Constructores de la Clase Hija: TAXI
Taxi::Taxi(string mat, int capPasajeros, string nomChofer, string tipoCombu, int tipoVehic, string marc) : Vehiculo(mat,capPasajeros,nomChofer,tipoCombu,tipoVehic)
{
    this->marca = marc;
}

// Inicializando Constructor de la Clase Hija: AUTOBUS
Autobus::Autobus(string mat, int capPasajeros, string nomChofer, string tipoCombu, int tipoVehic, int cantMantRea, string proxMant) : Vehiculo(mat,capPasajeros,nomChofer,tipoCombu,tipoVehic)
{
    this->cantMantenimientosRealizados = cantMantRea;
    this->proximoMantenimiento = proxMant;
}

//IMPLEMENTACIÓN de GETTERS y SETTERS de la Clase Padre: VEHICULO

// SETTERS
void Vehiculo::SetMatricula(string mat) {
    matricula = mat;
}
void Vehiculo::SetCapacidadPasajeros(int capPasajeros) {
    capacidadPasajeros = capPasajeros;
}
void Vehiculo::SetNombreChofer(string nomChofer) {
    nombreChofer = nomChofer;
}
void Vehiculo::SetTipoDeCombustible(string tipoCombu) {
    tipoDeCombustible = tipoCombu;
}
void Vehiculo::SetTipoDeVehiculo(int tipoVehic) {
    tipoDeVehiculo = tipoVehic;
}

// GETTERS
string Vehiculo::GetMatricula() {
    return matricula;
}
int Vehiculo::GetCapacidadPasajeros() {
    return capacidadPasajeros;
}
string Vehiculo::GetNombreChofer() {
    return nombreChofer;
}
string Vehiculo::GetTipoDeCombustible() {
    return tipoDeCombustible;
}
int Vehiculo::GetTipoDeVehiculo() {
    return tipoDeVehiculo;
}

//IMPLEMENTACIÓN de GETTERS y SETTERS de la Clase Hija: TAXI

// SETTERS
void Taxi::SetMarca(string marc) {
    marca = marc;
}
// GETTERS
string Taxi::GetMarca() {
    return marca;
}

//IMPLEMENTACIÓN de GETTERS y SETTERS de la Clase Hija: AUTOBUS

// SETTERS
void Autobus::SetCantMantRealizados(int cantMantRea) {
    cantMantenimientosRealizados = cantMantRea;
}
void Autobus::SetProximoMant(string proxMant) {
    proximoMantenimiento=proxMant;
}
// GETTERS
int Autobus::GetCantMantRealizados() {
    return cantMantenimientosRealizados;
}
string Autobus::GetProximoMant() {
    return proximoMantenimiento;
}

//IMPLEMENTACIÓN de MÉTODO POLIMÓRFICO de la Clase PADRE: VEHICULO
void Vehiculo::MostrarDatosVehiculo(){
    cout<<"Matricula: "<< this->GetMatricula()<<"\t"<<"Capacidad de Pasajeros: "<< this->GetCapacidadPasajeros()<<"\t"<<"Nombre del Chofer: "<< this->GetNombreChofer()<<"\t"<<" Tipo de Combustible: "<< this->GetTipoDeCombustible()<<"\t"<<"Tipo de Vehiculo: "<< this->GetTipoDeVehiculo()<<"\n";
}

//IMPLEMENTACIÓN de MÉTODO POLIMÓRFICO de la Clase HIJA: TAXI
void Taxi::MostrarDatosVehiculo(){
    cout<<"Matricula: "<< this->GetMatricula()<<"\t"<<"Capacidad de Pasajeros: "<< this->GetCapacidadPasajeros()<<"\t"<<"Nombre del Chofer: "<< this->GetNombreChofer()<<"\t"<<" Tipo de Combustible: "<< this->GetTipoDeCombustible()<<"\t"<<"Tipo de Vehiculo: "<< this->GetTipoDeVehiculo()<<"Marca: "<< this->GetMarca()<<"\n";
}

//IMPLEMENTACIÓN de MÉTODO POLIMÓRFICO de la Clase HIJA: AUTOBUS
void Autobus::MostrarDatosVehiculo(){
    cout<<"Matricula: "<< this->GetMatricula()<<"\t"<<"Capacidad de Pasajeros: "<< this->GetCapacidadPasajeros()<<"\t"<<"Nombre del Chofer: "<< this->GetNombreChofer()<<"\t"<<" Tipo de Combustible: "<< this->GetTipoDeCombustible()<<"\t"<<"Tipo de Vehiculo: "<< this->GetTipoDeVehiculo()<<"\t"<<"Cantidad de Mantenimientos Realizados"<< this->GetCantMantRealizados()<<"\t"<<"Proximo Mantenimiento"<< this->GetProximoMant()<<"\n";
}




