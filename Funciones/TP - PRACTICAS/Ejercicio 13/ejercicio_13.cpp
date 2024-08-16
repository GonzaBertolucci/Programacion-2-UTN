#include <iostream>

using namespace std;

/*
Escribir una función llamada calcularPotencia para que, dados dos números
enteros, calcule y devuelva la potencia del primero al segundo.
Tener en cuenta las siguientes posibilidades:
calcularPotencia(2, 3) → 8
calcularPotencia(2, 0) → 1
calcularPotencia(2, -3) → 0.125
*/

double calcularPotencia(int n1, int n2);

int main(){
    int n1, n2;
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese un segundo numero: ";
    cin >> n2;

    cout << calcularPotencia(n1, n2) << endl;

    return 0;
}

double calcularPotencia(int n1, int n2){
    if (n2 == 0) {
        return 1;  // Cualquier número elevado a la potencia 0 es 1
    } else if (n2 > 0) {
        int potencia = 1;
        for(int i = 0; i < n2; i++){
            potencia *= n1;
        }
        return potencia;
    } else {
        double potencia = 1.0;
        for(int i = 0; i < -n2; i++){
            potencia /= n1;
        }
        return potencia;
    }
}

