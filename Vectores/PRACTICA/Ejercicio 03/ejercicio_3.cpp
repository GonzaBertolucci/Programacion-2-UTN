#include <iostream>
#include <stdio.h>

using namespace std;

/*
Leer 10 n�meros y guardarlos en un vector. Determinar e informar cu�l es el
valor m�ximo y su posici�n dentro del vector.
*/
void cargarVector(int v[], int tam);
void mostrarMaximo(int v[], int tam);

int main(){

const int tam = 10;
int vec[tam];
cargarVector(vec, tam);
mostrarMaximo(vec, tam);

return 0;
}

void cargarVector(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<"Ingrese un numero: ";
        cin>>v[i];
    }
}

void mostrarMaximo(int v[], int tam){
    int maximo = v[0];
    int pos = 0;
    for(int i = 0; i < tam; i++){

        if(v[i] > maximo){
            maximo = v[i];
            pos = i;
        }
    }
    cout<<"El maximo es: "<<maximo<<endl;
    cout<<"Posicion: "<<pos<<endl;
}
