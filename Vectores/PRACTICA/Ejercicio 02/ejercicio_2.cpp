#include <iostream>
#include <stdio.h>

using namespace std;

/*
Leer 10 números y guardarlos en un vector. Calcular el promedio y luego
mostrar por pantalla los valores que son mayores al promedio.
*/

void cargarVector(int v[], int tam);
int promedioVector(int v[], int tam);

int main(){

const int tam = 10;
int vNum[tam];

cargarVector(vNum, tam);
cout<<"El promedio es: "<<promedioVector(vNum, tam)<<endl;

return 0;
}

void cargarVector(int v[], int tam){
    for(int i = 0; i < tam; i++){
        cout<<"Ingrese un numero: ";
        cin>>v[i];
    }
}

int promedioVector(int v[], int tam){
    int resultado = 0;
    for(int i = 0; i < tam; i++){
        resultado += v[i];
    }
    return resultado/tam;
}
