#include <iostream>
#include <stdio.h>

using namespace std;

/*
Escribir una funci�n que reciba un n�mero y retorne 1 si el n�mero recibido es
perfecto y 0 si no es perfecto.
Hacer un programa para que, dada una lista de n�meros que finaliza con cero,
informe cu�ntos de ellos eran perfectos. Utilizar la funci�n solicitada.
*/

bool esPerfecto(int number);

int main(){
int num;

    while(true){
        cout<<"Para terminar la carga presione 0"<<endl;
        cout<<"Ingrese un numero para ver si es perfecto: ";
        cin>>num;
        cout<<esPerfecto(num)<<endl;

        if(num == 0){
            break;
        }
    }

return 0;
}

bool esPerfecto(int num){
    int suma = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            suma += i;
        }
    }
    if(suma == num){
        return true;
    } else{
        return false;
    }
}
