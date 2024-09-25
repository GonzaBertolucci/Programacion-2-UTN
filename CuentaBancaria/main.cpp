#include <iostream>
#include "CuentaBancaria.h"

using namespace std;

int main()
{
//Mando valores por constructor
CuentaBancaria movimiento(320, 1000);

movimiento.depositar();
movimiento.retirar();
movimiento.getSaldo();

}
