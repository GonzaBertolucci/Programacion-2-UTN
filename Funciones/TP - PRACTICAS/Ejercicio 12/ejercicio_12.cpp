#include <iostream>
#include <stdio.h>

/*
Escribir una función de nombre validarFecha que reciba 3 valores
correspondientes al día, mes y año, y devuelva 1 si los valores recibidos
corresponden a una fecha correcta o 0 si no es correcta. Por ejemplo, si la
función recibe 30, 2, 2000 deberá devolver 0; y si recibe 12, 2, 1990, deberá
devolver 1
*/

#include <iostream>

using namespace std;

bool esBisiesto(int anio);
int validarFecha(int dia, int mes, int anio);

int main() {
    int dia, mes, anio;

    cout << "Ingrese dia: ";
    cin >> dia;
    cout << "Ingrese mes: ";
    cin >> mes;
    cout << "Ingrese año: ";
    cin >> anio;

    if (validarFecha(dia, mes, anio)) {
        cout << "La fecha es correcta." << endl;
    } else {
        cout << "La fecha es incorrecta." << endl;
    }

    return 0;
}

bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int validarFecha(int dia, int mes, int anio) {

    if (mes < 1 || mes > 12) {
        return 0;
    }

    if (dia < 1 || dia > 31) {
        return 0;
    }

    int diasEnMes;
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        diasEnMes = 31;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        diasEnMes = 30;
    } else if (mes == 2) {
        if (esBisiesto(anio)) {
            diasEnMes = 29;
        } else {
            diasEnMes = 28;
        }
    }

    if (dia <= diasEnMes) {
        return 1;
    } else {
        return 0;
    }
}

