#include <iostream>
#include <cstring>


using namespace std;

//Declarando clase padre Aeronave
class Aeronave {
private:
    string matricula;
    double capacidad;
    int kmRecorridos;
    int tipoaeronave;
    double impuesto;
public:
    Aeronave();

    Aeronave(string matricula, double capacidad, int kmRecorridos, int tipoaeronave, double
    impuesto) {
        this->matricula = matricula;
        this->capacidad = capacidad;
        this->kmRecorridos = kmRecorridos;
        this->tipoaeronave = tipoaeronave;
        this->impuesto = impuesto;
    }

//Métodos de escritura
    void SetMatricula(string m){
        matricula = m;
    };
    void SetCapacidad(double c) {
        capacidad = c;
    };
    void SetKmRecorridos(int k) {
        kmRecorridos = k;
    };
    void SetTipoAeronave(int ti) {
        tipoaeronave = ti;
    };

    string GetMatricula() {
        return matricula;
    }

    double GetCapacidad() {
        return capacidad;
    }

    int GetKmRecorridos() {
        return kmRecorridos;
    }

    int GetTipoAeronave() {
        return tipoaeronave;
    }

    virtual double Impuesto() {
        return impuesto;
    }
    virtual void MostrarDatosAeronave() {
        cout << "Matrícula: " << this->GetMatricula() << '\t' << "Capacidad: " << this->GetCapacidad() << '\t'<< "KmRecorridos:" << this->GetKmRecorridos() << endl;
    }
};

//Declarando clases hijas que heredan de la clase Padre Aeronave
class Pasajero : public Aeronave {
private:
    int cantPrimera, cantTuristica;
public:
    Pasajero();

    Pasajero(string matricula, int capacidad, int kmRecorridos, int tipoaeronave, double impuesto, int cantPrimera, int cantTuristica) : Aeronave(matricula, capacidad, kmRecorridos, tipoaeronave, impuesto) {
        this->cantPrimera = cantPrimera;
        this->cantTuristica = cantTuristica;
    }

    void SetCantPrimera(int cantP) {
        cantPrimera = cantP;
    }

    void SetCantTurista(int cantT) {
        cantTuristica = cantT;
    }

    int GetPasajerosPClase() {
        return cantPrimera;
    }

    int GetPasajetosClaseT() {
        return cantTuristica;
    }

    double Impuesto() override{
        double impues;
        double ca = GetCapacidad();
        int pPC = GetPasajerosPClase();
        int pCT = GetPasajetosClaseT();
        int kmr = GetKmRecorridos();
        impues = (ca * (pPC + pCT)) * kmr;
        return impues;
    }
    void MostrarDatosAeronave() override {
        cout<<"Aeronave tipo Pasajero"<<endl;
        cout << "Matrícula: " << this->GetMatricula() << '\t' << "Capacidad: " << this->GetCapacidad() << '\t' << "Kms Recorridos:"<<this->GetKmRecorridos()<<'\t'<<"1era Clase:"<<this->GetPasajerosPClase()<<'\t'<<"Clase Turista:    "<<this->GetPasajetosClaseT()<<endl;cout << "Impuesto espacio aéreo: " << (this->GetCapacidad() * (this->GetPasajerosPClase() + this -> GetPasajetosClaseT())) * this->GetKmRecorridos()<< "DOP" << endl;
    }
};

class Jets : public Aeronave {
private:
    string firma;
    double precio;
public:
    Jets();

    Jets(string matricula, int capacidad, int kmRecorridos, int tipoaeronave, double impuesto, string firma,
         double precio) : Aeronave(matricula, capacidad, kmRecorridos, tipoaeronave, impuesto) {
        this->firma = firma;
        this->precio = precio;
    }

    void SetFirma(string fir) {
        firma = fir;
    }
    void SetPrecio(double pre) {
        precio = pre;
    }
    string GetFirma() {
        return firma;
    }

    double GetPrecio() {
        return precio;
    }

//Método polimórfico para calcular el impuesto de la Aeronave Jets
    double Impuesto() override {
        double impues;
        double ca = GetCapacidad();
        double precp = GetPrecio();
        int kmr = GetKmRecorridos();
        impues = ca * precp / kmr;
        return impues;
    }

//Método mostrar datos de los objetos Aeronave tipo Jets
    void MostrarDatosAeronave() override {
        cout<<"Aeronave tipo Jet"<<endl;
        cout << "Matrícula: " << this->GetMatricula()<< '\t' << "Capacidad: " << this->GetCapacidad() << '\t' << "KmsRecorridos:"<<this->GetKmRecorridos()<<'\t'<<"Firma: "<<this->GetFirma()<<'\t'<<"Precio: "<<this-> GetPrecio() << endl;
        cout << "Impuesto espacio aéreo: " << (this->GetCapacidad() * this -> GetPrecio()) / GetKmRecorridos() << "DOP" << endl;
    }
};

//Definiendo la clase controladora Torre
class Torre {
protected:
    Aeronave **aeronaves;
    int cantReal;
public:
    Torre() {
        cantReal = 0;
        aeronaves = new Aeronave *[100];
    }

    ~Torre() {
        for (int i = 0; i < cantReal; i++)
            delete aeronaves[i];
        delete[]aeronaves;
    };

    int GetCantReal() {
        return cantReal;
    };

    void Adicionar(Aeronave * aero){
        aeronaves[cantReal] = aero;
        cantReal++;
    };

    void MostrarDatosAeronave();

    string MatriculaAvionMayorImpuesto() {
        double mayor_impuesto;
        string mat_aer;
        mayor_impuesto = 0;
        for (int i = 0; i < cantReal; i++) {
            if (aeronaves[i]->Impuesto() > mayor_impuesto) {
                mayor_impuesto = aeronaves[i]->Impuesto();
            }
            mat_aer = aeronaves[i]->GetMatricula();
        }
        return mat_aer;
    }; //Devuelve matrícula del avión que pagará un mayor impuesto por la utilización del espacio aéreo
    int CantidadJetsVolandoEspacioAereo() {
        int cant_jets_vol = 0;
        for (int i = 0; i < cantReal; i++) {
            if (aeronaves[i]->GetTipoAeronave() == 2)
                cant_jets_vol++;
        }
        return cant_jets_vol;
    }; //Devuelve la cantidad de Jets que están sobrevolando el espacio aéreo.
};

//Función principal para la ejecución del programa en consola
int main() {
    string ma;
    double ca;
    int kmr;
    int tip;
    int imp;
    int cantAeronaves = 0;
    int i = 0;
//Datos Aeronave de Pasajeros
    int cP;
    int cT;
//Datos Aeronave Jets
    string fir;
    double pre;
    Aeronave *aernuevo;
//Entrar datos de la Aeronave
    cout << "Cantidad de aeronaves dentro del corredor aéreo: ";
    cin >> cantAeronaves;
    Torre *to = new Torre();
    do {
        cout << "Datos de la Aeronave: " << i + 1 << endl;
        cout << "Matrícula: ";
        cin >> ma;
        cout << "Capacidad: ";
        cin >> ca;
        cout << "Kilómetros: ";
        cin >> kmr;
        cout << "Tipo Aeronave: ";
        cin >> tip;
        if (tip == 1) {
            Pasajero *p;
            cout << "Cantidad Pasajeros en Primera Clase: ";
            cin >> cP;
            cout << "Cantidad Pasajeros en Clase Turista: ";
            cin >> cT;
            imp = p->Impuesto();
            aernuevo = new Pasajero(ma, ca, kmr, tip, imp, cP, cT);
        } else {
            Jets *j;
            cout << "Firma del Jet: ";
            cin >> fir;
            cout << "Precio del Jet: ";
            cin >> pre;
            imp = j->Impuesto();
            aernuevo = new Jets(ma, ca, kmr, tip, imp, fir, pre);
        }
        to->Adicionar(aernuevo);
        cantAeronaves--;
        i++;
    } while (cantAeronaves != 0);
    to->MostrarDatosAeronave();
    cout << "Matrícula del avión que pagará un mayor impuesto por la utilización del espacio aéreo: " << to -> MatriculaAvionMayorImpuesto() << endl;
    cout << "Cantidad de Jets que están sobrevolando el espacio aéreo: " << to -> CantidadJetsVolandoEspacioAereo();
    return 0;
}