#include <iostream>
#include <stdio.h>
#include "Rectangulo.h"
using namespace std;
Rectangulo::Rectangulo(int base, int altura){
    _base = base;
    _altura = altura;
}


void Rectangulo::calcularArea(){
    int auxAltura;
    int auxBase;
    cout<<"Ingrese la altura: ";
    cin>>auxAltura;
    setAltura(auxAltura);
    cout<<"Ingrese la base: ";
    cin>>auxBase;
    setBase(auxBase);
    cout<<"El area es: "<<getAltura()*getBase()<<endl;
}

void Rectangulo::calcularPerimetro(){
    int auxAltura;
    int auxBase;
    int perimetro;
    cout<<"Ingrese la altura: ";
    cin>>auxAltura;
    setAltura(auxAltura);
    cout<<"Ingrese la base: ";
    cin>>auxBase;
    setBase(auxBase);
    perimetro = 2*(getBase()+getAltura());
    cout<<"Perimetro: "<<perimetro<<endl;
}
