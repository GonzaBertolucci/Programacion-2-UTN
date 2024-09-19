#include "Fecha.h"
#include "iostream"

Fecha::Fecha(int d, int m, int a){
    _dia = d;
    _mes = m;
    _anio = a;
}

void Fecha::cargar(){
    int auxDia;
    std::cout<<"Ingrese una fecha a cargar"<<std::endl;
    std::cout<<"Ingrese el dia: ";
    std::cin>>auxDia;
    setDia(auxDia);
    std::cout<<"Mes: ";
    std::cin>>_mes;
    std::cout<<"Anio: ";
    std::cin>>_anio;
}

void Fecha::mostrar(){
    std::cout<<"Fecha introducida"<<std::endl;
    std::cout<<getDia()<<"/"<<getMes()<<"/"<<getAnio();
}
