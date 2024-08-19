#include <iostream>
#include <stdio.h>

using namespace std;

/*
Hacer un programa para ingresar 10 números y guardarlos en un vector.
Determinar e informar cuál es la suma de los valores del vector.
*/

int sumaVector(int v[], int tam);
void cargarVector(int v[], int tam);

int main(){

const int tam = 10;
int vec[tam];

cargarVector(vec, tam);

cout<<"La suma total del vector es: "<<sumaVector(vec, tam)<<endl;

return 0;
}

void cargarVector(int v[], int tam){
    for (int i = 0; i < tam; i++){
        cout<<"Ingrese un numero: ";
        cin>>v[i];
    }
}

int sumaVector(int v[], int tam){
    int total = 0;
    for(int i = 0; i < tam; i++){
        total += v[i];
    }
    return total;
}
