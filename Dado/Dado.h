#pragma once
#include <cstdlib>
#include <ctime>
class Dado
{
    public:
        Dado(){
            _valor = generarAleatorio();
        }

        void lanzar();

        int getValor(){return _valor;}
        bool esMaximo();
        bool esMinimo();

    private:
        int _valor;

        static int generarAleatorio(){
            return rand() % 6 + 1;
        }
};

