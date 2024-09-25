#pragma once


class CuentaBancaria
{
    public:
        CuentaBancaria(int numeroDeCuenta = 0, float saldo = 0);

        void depositar();
        void retirar();

        float getSaldo(){return _saldoActual;}

    private:
        int _numeroDeCuenta;
        float _saldoActual;

};

