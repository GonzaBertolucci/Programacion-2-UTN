#include <iostream>
#include <stdio.h>
#include "CuentaBancaria.h"
using namespace std;

CuentaBancaria::CuentaBancaria(int numeroDeCuenta ,float saldo){
    _saldoActual = saldo;
    _numeroDeCuenta = numeroDeCuenta;
}

void CuentaBancaria::depositar(){
    float auxDeposito;
    cout<<"Ingrese el dinero a depositar: ";
    cin>>auxDeposito;
    _saldoActual += auxDeposito;
}

void CuentaBancaria::retirar(){
    float auxRetiro;
    if(_saldoActual > 0){
        _saldoActual -= auxRetiro;
    }
}



