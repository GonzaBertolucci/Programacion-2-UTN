#include <iostream>
#include <stdio.h>

/*
Hacer una funci�n llamada CalcularMaximo que determine el m�ximo entre
dos n�meros. La funci�n debe recibir dos n�meros enteros por valor y devolver
el valor m�s grande. Si los n�meros son iguales debe devolver cualquiera de
los dos. La funci�n no debe mostrar nada por pantalla.
Hacer un programa para ingresar dos n�meros y, utilizando CalcularMaximo,
emita luego el n�mero mayor de ambos.

*/

int calcularMaximo(int number1, int number2);

using namespace std;

int main(){

int num1, num2;

cout<<"Ingrese el primer numero a evaluar: ";
cin>>num1;
cout<<"Ingrese el segundo numero a evaluar: ";
cin>>num2;

cout<<"El maximo es: "<<calcularMaximo(num1, num2);

return 0;
}

int calcularMaximo(int n1, int n2){

    if(n1 > n2){
        return n1;
    } else {
        return n2;
        }
}
