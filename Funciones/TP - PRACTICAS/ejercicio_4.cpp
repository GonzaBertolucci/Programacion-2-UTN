#include <iostream>
#include <stdio.h>

using namespace std;

/*
Hacer una funci�n llamada EsPrimoSophieGermain que reciba un n�mero
entero y determine si el mismo es un n�mero primo de Sophie Germain. Debe
devolver verdadero si lo es y falso si no lo es.
NOTA: En teor�a de n�meros, se dice que un n�mero natural es un n�mero
primo de Sophie Germain, si el n�mero n es primo y 2*n+1 tambi�n lo es.

*/

bool esPrimoSophieGermain(int number);
bool esPrimo(int num);

int main(){

int num;
cout<<"Ingrese un numero para comprobar si es primo de Sophie Germain: ";
cin>>num;

cout<<esPrimoSophieGermain(num);

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

bool esPrimoSophieGermain(int number){

    int sophieGermainNumber = 2*number+1;

    if (esPrimo(number)){
        return esPrimo(sophieGermainNumber);
    } else {
        return false;
    }

}
