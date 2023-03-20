//
// Created by leogo on 2/1/23.
//

#include <iostream>
#include <cmath>

using namespace std;





//Cálculo del área del triángulo

int CalculoAreaTriangulo(int l_1, int l_2, int l_3) {
    //Declaración de variables
    float area=0, perimetro=0, semip=0;

    //Comprobación del teorema desigualdad triangular. Verificando que tenemos un triángulo

    if(l_1+l_2>l_3 && l_1+l_3>l_2 && l_2+l_3>l_1)
    {
        cout<<"Es un triángulo"<<endl;
        perimetro=l_1+l_2+l_3;
        semip=perimetro/2;
        area=sqrt(semip*(semip-l_1)*(semip-l_2)*(semip-l_3));
        cout<<"El perímetro es:"<<perimetro<<endl;
        cout<<"El semiperímetro es:"<<semip<<endl;
        cout<<"El área es:"<<semip;
    }
    else
        cout<<"No es un triángulo. Por favor, vuelva a insertar los lados";

    return area;

}


int main()
{
    //Declaración de variables

    int lado_1, lado_2, lado_3;


    //Entrada de datos

    cout<<"Entre el lado_1:";
    cin>>lado_1;
    cout<<"Entre el lado_2:";
    cin>>lado_2;
    cout<<"Entre el lado_3:";
    cin>>lado_3;

    CalculoAreaTriangulo(lado_1,lado_2,lado_3);



    return 0;
}
