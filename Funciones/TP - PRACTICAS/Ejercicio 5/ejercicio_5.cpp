#include <iostream>
#include <stdio.h>
#include <cmath>

/*
Hacer una función llamada Redondear que reciba como parámetro un número
float y devuelva un número entero con el redondeo del mismo.
Por ejemplo:
Si recibe 7.78, debe devolver 8.
Si recibe 7.48, debe devolver 7.
Si recibe 7.5, debe devolver 8.
*/

using namespace std;

int redondear(float number);

int main(){

float n1;
cout<<"Ingrese un numero a redondear: ";
cin>>n1;
cout<<"Numero redondeado: "<<redondear(n1);

return 0;
}
//Utilizo la funcion round de la biblioteca <cmath> el cual permite redondear numeros
//Segun la regla estandar de redondeo.
int redondear(float num){
    num = round(num);
    return num;
}
