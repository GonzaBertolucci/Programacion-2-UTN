#include <iostream>
#include <stdio.h>
#include "Dado.h"
using namespace std;

void Dado::lanzar(){
    _valor = generarAleatorio();
    cout<<"Lanzando dado..."<<endl;
    system("PAUSE");
    cout<<"El valor es: "<<getValor()<<endl;
}

bool Dado::esMaximo(){
    if (getValor() == 6){
        return true;
    }
    return false;
}

bool Dado::esMinimo(){
    if (getValor() == 1){
        return true;
    }
    return false;
}
