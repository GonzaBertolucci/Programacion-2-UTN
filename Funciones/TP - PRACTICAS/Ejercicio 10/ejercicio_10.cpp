#include <iostream>
#include <stdio.h>

using namespace std;
/*
Hacer una función que reciba un código de naipe (del 1 al 40) y determine el
número y el palo de la baraja española de 40 cartas (sin los 8, 9 y comodines
del mazo). La función debe recibir por referencia el número de naipe y el
nombre del palo (para ser completados por la función) y por valor el código de
naipe.
Tener en cuenta que:
Los códigos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del
21 al 30 y oro del 31 al 40. Por ejemplo, naipe con ID #10 es el 12 de espadas.
*/

void determinarNaipe(int codigoNaipe, int &numeroNaipe, string &palo);

int main() {
    int codigo, numero;
    string palo;

    cout << "Ingrese el codigo del naipe (1 al 40): ";
    cin >> codigo;

    determinarNaipe(codigo, numero, palo);

    cout << "El naipe es el " << numero << " de " << palo << endl;
    return 0;
}

void determinarNaipe(int codigoNaipe, int &numeroNaipe, string &palo) {
    if (codigoNaipe >= 1 && codigoNaipe <= 10) {
        palo = "Espadas";
        numeroNaipe = codigoNaipe;
    } else if (codigoNaipe >= 11 && codigoNaipe <= 20) {
        palo = "Bastos";
        numeroNaipe = codigoNaipe - 10;
    } else if (codigoNaipe >= 21 && codigoNaipe <= 30) {
        palo = "Copas";
        numeroNaipe = codigoNaipe - 20;
    } else if (codigoNaipe >= 31 && codigoNaipe <= 40) {
        palo = "Oros";
        numeroNaipe = codigoNaipe - 30;
    } else {
        cout << "Codigo de naipe invalido." << endl;
        numeroNaipe = -1;  // Valor inválido
        palo = "Invalido";
    }
}



