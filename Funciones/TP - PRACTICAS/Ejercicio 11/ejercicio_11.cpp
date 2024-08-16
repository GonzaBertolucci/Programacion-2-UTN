#include <iostream>
#include <stdio.h>

using namespace std;

/*
Hacer una función llamada contarDigitos que reciba por valor un número
entero y determine y devuelva la cantidad de dígitos del número. Por ejemplo,
si se recibe el número 840 debe devolver 3.
Hacer un programa que, a partir de un número que ingresa el usuario, informe
por pantalla la cantidad de dígitos del número ingresado.
*/

int contarDigitos(int num);

int main(){
int num;
cout<<"Ingrese un numero: ";
cin>>num;
cout<<"El numero "<<num<<" tiene "<<contarDigitos(num)<< " digitos."<<endl;
return 0;
}

int contarDigitos(int num){
    int cont;

    while(num > 0){
        num = num/10;
        cont++;
    }
    return cont;
}
