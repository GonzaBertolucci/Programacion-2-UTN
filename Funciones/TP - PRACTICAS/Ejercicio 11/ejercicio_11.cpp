#include <iostream>
#include <stdio.h>

using namespace std;

/*
Hacer una funci�n llamada contarDigitos que reciba por valor un n�mero
entero y determine y devuelva la cantidad de d�gitos del n�mero. Por ejemplo,
si se recibe el n�mero 840 debe devolver 3.
Hacer un programa que, a partir de un n�mero que ingresa el usuario, informe
por pantalla la cantidad de d�gitos del n�mero ingresado.
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
