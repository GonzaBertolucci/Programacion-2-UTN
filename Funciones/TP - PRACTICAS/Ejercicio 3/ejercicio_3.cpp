#include <iostream>
#include <stdio.h>

using namespace std;

/*
Hacer una función llamada EsPrimo que determine si un número es primo o
no. La función debe recibir el número y devolver true si es primo o false si no lo
es. La función no debe mostrar nada por pantalla.
Hacer un programa para ingresar un número y, utilizando EsPrimo, emita luego
un cartel indicando si el número ingresado es primo o no es primo.
*/

bool esPrimo(int number);

int main(){
int num;
cout<<"Ingrese un numero para ver si es primo: ";
cin>>num;

cout<<esPrimo(num);

return 0;
}

bool esPrimo(int num){
    int cont = 0;

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            cont++;
        }
    }
    if(cont == 2){
        return true;
    } else {
        return false;
    }
}
