#include <iostream>
#include "Incrementador.h"

using namespace std;

int main()
{
    bool opcion;

    Incrementador objIncrementador(0, 10);

    cout<<"Quiere incrementarlo? 1-Si 0-No"<<endl;
    cin>>opcion;

    while(opcion){
        objIncrementador.incrementar();

        cout<<"Quiere incrementarlo? 1-Si 0-No"<<endl;
        cin>>opcion;
    }

    objIncrementador.incrementar();

    cout << "Valor Final: "<<objIncrementador.getValor() << endl;
    cout << "Veces incrementado: " << objIncrementador.getCantidadIncrementos() << endl;
    return 0;
}
