#include <iostream>
#include <stdio.h>

/*
Hacer una función que reciba un número entero por valor llamado día y un
string llamado nombre por referencia y le asigne el nombre correspondiente
según el número de día. Siendo 0 → Domingo y 6 → Sábado.

*/

using namespace std;

void diaSemana(int dia, string &pepito);

int main(){

int dia;
string nombre;

cout<<"Ingrese el dia que quiere saber: "<<endl;
cout<<"Ejemplo \n0 - Domingo \n6 - Sabado"<<endl;
cin>>dia;

diaSemana(dia, nombre);
cout<<"El dia es: "<<nombre<<endl;

return 0;
}


void diaSemana(int dia, string &nombre){


    switch (dia)
    {
    case 0:
        nombre = "Domingo";
        break;
    case 1:
        nombre = "Lunes";
        break;
    case 2:
        nombre = "Martes";
        break;
    case 3:
        nombre = "Miercoles";
    case 4:
        nombre = "Jueves";
        break;
    case 5:
        nombre = "Viernes";
        break;
    case 6:
        nombre = "Sabado";
        break;
    default:
        cout<<"Valor de dia incorrecto"<<endl;
        break;
    }

}
