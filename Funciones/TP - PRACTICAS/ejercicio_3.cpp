#include <iostream>
#include <stdio.h>

using namespace std;

/*
Hacer una funci�n llamada EsPrimo que determine si un n�mero es primo o
no. La funci�n debe recibir el n�mero y devolver true si es primo o false si no lo
es. La funci�n no debe mostrar nada por pantalla.
Hacer un programa para ingresar un n�mero y, utilizando EsPrimo, emita luego
un cartel indicando si el n�mero ingresado es primo o no es primo.
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
