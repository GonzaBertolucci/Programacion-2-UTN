#include <iostream>
#include <stdio.h>

/*
Hacer una funci�n llamada EsPar que determine si un n�mero es par o no. La
funci�n debe recibir un n�mero entero por valor y devolver true si es par o false
si no lo es. La funci�n no debe mostrar nada por pantalla.
Hacer un programa para ingresar un n�mero y, utilizando EsPar, emita luego un
cartel indicando si el n�mero ingresado es par o no es par.

*/

bool esPar(int number);

using namespace std;

int main(){

int num;
cout<<"Ingrese un numero para evaluar si es par: ";
cin>>num;

cout<<esPar(num);

return 0;
}

bool esPar(int number){
    if (number%2==0){
        return true;
    }else{
        return false;
    }
}
