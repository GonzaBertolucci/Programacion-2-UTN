#pragma once


class Fecha
{
    public:
        Fecha(int d = 0, int m = 0 , int a = 0);

        void setDia(int dia){_dia = dia;}
        void setMes(int mes){_mes = mes;}
        void setAnio(int anio){_anio = anio;}

        int getDia(){return _dia;}
        int getMes(){return _mes;}
        int getAnio(){return _anio;};

        void cargar();
        void mostrar();

    private:
        int _dia;
        int _mes;
        int _anio;
};


