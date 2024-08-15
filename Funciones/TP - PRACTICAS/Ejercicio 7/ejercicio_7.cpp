#include <iostream>
#include <stdio.h>
#include <cmath>
/*
Escribir una función CalcularMaximoAbsoluto que reciba dos números y
retorne el máximo absoluto de ambos. Por ejemplo el máximo absoluto de los
números -40 y 20 es 40.
Hacer un programa para ingresar dos números y, utilizando
CalcularMaximoAbsoluto, emita luego el número mayor absoluto de ambos.
*/

using namespace std;

int calcularMaximoAbsoluto(int number1, int number2);

int main(){
int num1, num2, result;
cin>>num1;
cin>>num2;

result = calcularMaximoAbsoluto(num1, num2);
cout<<result<<endl;
return 0;
}


int calcularMaximoAbsoluto(int n1, int n2){
    //Utilizo la funcion abs() de la biblioteca cmath para resolver el ejercicio
    //Referencia y tutorial de como funciona y se utiliza: https://www.ibm.com/docs/es/rdfi/9.6.0?topic=functions-abs-calculate-integer-absolute-value
    int n1_absoluto = abs(n1);
    int n2_absoluto = abs(n2);

    if(n1_absoluto > n2_absoluto){
        return n1_absoluto;
    } else {
        return n2_absoluto;
    }
}
