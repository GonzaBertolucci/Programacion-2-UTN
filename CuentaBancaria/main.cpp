#include <iostream>
#include "CuentaBancaria.h"

using namespace std;

/*
Crea una clase llamada CuentaBancaria que represente una cuenta bancaria. La clase debe tener los siguientes atributos:
N�mero de cuenta (entero)
Saldo actual (float)
Implementa los siguientes m�todos:
Un constructor que me permita establecer el n�mero de cuenta y el saldo.
Un m�todo depositar(float monto) que incremente el saldo.
Un m�todo retirar(float monto) que disminuya el saldo si hay fondos suficientes, caso contrario no hace nada.
Un m�todo obtenerSaldo() que devuelva el saldo actual.


*/

int main()
{
//Mando valores por constructor
CuentaBancaria movimiento(320, 1000);

movimiento.depositar();
movimiento.retirar();
movimiento.getSaldo();

}
