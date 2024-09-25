#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Dado.h"
using namespace std;

int main()
{
    srand(time(0));

    Dado objeto;
    objeto.lanzar();
    if(objeto.esMaximo() == true){
        cout<<"Sacaste el valor maximo"<<endl;
    }
    if(objeto.esMinimo() == true){
        cout<<"Sacaste el valor minimo"<<endl;
    }


    return 0;
}
