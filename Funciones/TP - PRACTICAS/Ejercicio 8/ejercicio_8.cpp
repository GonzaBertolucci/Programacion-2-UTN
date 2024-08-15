#include <iostream>
#include <stdio.h>

using namespace std;

/*
Escribir una funci�n que reciba el valor de un a�o y retorne 1 si el mismo es
bisiesto y 0 si es un a�o no bisiesto. Recordar que son a�os bisiestos los
divisibles por 4, excepto los divisibles por 100, pero dentro de este grupo se
incluyen los divisibles por 400. Por ejemplo 1992 fue bisiesto por ser divisible
por 4. El a�o 1900 no fue bisiesto por ser divisible por 100, aun siendo divisible
por 4. Y el a�o 2000 fue bisiesto por ser divisible por 400, aun siendo divisible
por 100.
Hacer un programa para ingresar una lista de 10 valores de a�os y contar
cuantos son bisiestos. Utilizar la funci�n solicitada.
*/
bool anioBisiesto(int anio);

int main(){
int anio[10];
for(int i = 0; i<10; i++){
    cout<<"Ingrese un anio para saber si es bisiesto: "<<endl;
    cin>>anio[i];
    cout<<"1 - Bisiesto\n0 - No Bisiesto \nResultado: ";
    cout<<anioBisiesto(anio[i])<<endl;
    system("PAUSE");
    system("CLS");
}

return 0;
}

bool anioBisiesto(int anio){
if((anio %4 == 0 && anio %100 != 0) || (anio %400 == 0)){
    return true;
} else {
    return false;
}

}
