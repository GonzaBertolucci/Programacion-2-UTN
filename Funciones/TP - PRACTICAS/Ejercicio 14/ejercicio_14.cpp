#include <iostream>
#include <cmath>  // Para usar pow

using namespace std;

/*
Hacer una función llamada esNumeroArmstrong que reciba un número entero
y devuelva true si el número enviado es un Número Armstrong y false si no lo
es.
NOTA: Un número N es un número Armstrong si la suma de sus cifras elevadas
a la cantidad de cifras del número da como resultado N.
Por ejemplo:
371 tiene 3 cifras.
Luego:
3
3 + 7
3 + 1
3 → 371
27 + 343 + 1 → 371
*/

bool esNumeroArmstrong(int numero);

int main(){
    int numero;
    cout << "Ingrese un numero para verificar si es Armstrong: ";
    cin >> numero;

    if(esNumeroArmstrong(numero)) {
        cout << numero << " es un numero Armstrong." << endl;
    } else {
        cout << numero << " no es un numero Armstrong." << endl;
    }

    return 0;
}

bool esNumeroArmstrong(int numero) {
    int suma = 0;
    int temp = numero;
    int digitos = 0;

    while(temp != 0) {
        temp /= 10;
        digitos++;
    }

    temp = numero;

    while(temp != 0) {
        int digito = temp % 10;
        suma += pow(digito, digitos);
        temp /= 10;
    }
    return suma == numero;
}
