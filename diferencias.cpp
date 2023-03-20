//
// Created by leogo on 2/17/23.
//
#include <iostream>

using namespace std;

int arreglo[5]={25,26,24,27,23};

struct camisa{
    string tamano;
    string genero;
    string color;
    int precio = 0;
};

int main(){
    camisa chacabana={"medium","masculino","crema", 3000};
    camisa playera = {"small","femenino","rosa", 3000};
    camisa mangalarga = {"large","masculino","verde", 1400};
    camisa mangacorta = {"xsmall","femenino","roja", 1400};
    camisa smoking = {"xlarge","masculino","blanca", 3000};

    // arreglo de datos tipo camisas
    camisa modelos[5];
    modelos[0]= chacabana;
    modelos[1]= playera;
    modelos[2]= mangalarga;
    modelos[3]= mangacorta;
    modelos[4]= smoking;

    cout<<"≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣ IMPRESION DEL ARREGLO  ≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" <<endl;
    cout<<endl;
    cout<< arreglo[0]<<" valor en la posición 0 del arreglo Arreglo"<<endl;
    cout<< arreglo[1]<<" valor en la posición 1 del arreglo Arreglo"<<endl;
    cout<< arreglo[2]<<" valor en la posición 2 del arreglo Arreglo"<<endl;
    cout<< arreglo[3]<<" valor en la posición 3 del arreglo Arreglo"<<endl;
    cout<< arreglo[4]<<" valor en la posición 4 del arreglo Arreglo"<<endl;
    cout<<"≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" <<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣ IMPRESION DE LA ESTRUCTURA ≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" <<endl;
    cout<<endl;
    cout<<"LLAMANDO LOS ATRIBUTOS DIRECTAMENTE POR LA ESTRUCTURA"<<endl;
    cout<<endl;
    cout<< chacabana.color<< " Color de la chacabana "<<endl;
    cout<< playera.genero<<" genero de la playera"<<endl;
    cout<< mangacorta.precio<<" precio de la Manga corta"<<endl;
    cout<< mangalarga.tamano<<" genero de la Manga Larga"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"LLAMANDO LOS ATRIBUTOS POR LA REFERENCIA DEL ARREGLO CAMISAS"<<endl;
    cout<<"tamaño de la Chacabana: "<< modelos[0].tamano<<endl;
    cout<<"tamaño de la Playera: "<< modelos[1].tamano<<endl;
    cout<<"tamaño de la Manga Larga: "<< modelos[2].tamano<<endl;
    cout<<"tamaño de la Manga Corta: "<< modelos[3].tamano<<endl;
    cout<<"tamaño de la Smoking: "<< modelos[4].tamano<<endl;
    cout<<"≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣≣" <<endl;



    return 0;
}

