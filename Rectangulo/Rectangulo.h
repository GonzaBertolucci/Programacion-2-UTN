#pragma once

class Rectangulo
{
    public:
        Rectangulo(int base = 0, int altura = 0);

        void setBase(int base){_base = base;}
        void setAltura(int altura){_altura = altura;}

        int getBase(){return _base;}
        int getAltura(){return _altura;}

        void calcularArea();
        void calcularPerimetro();

    private:
       int _base;
       int _altura;
};

