#include <iostream>
#include <stdio.h>

/*
Para usar un archivo
	*Crear o Abrir		fopen()

	*Escribir		fwrite() -> Vamos desde la memoria al archivo.

	*Leer			fread() -> Vamos desde el archivo a la memoria.

	*Cerrarlo		fclose()

Puntero FILE -> Establecer la comunicacion con el archivo fisico.

Ejemplo

FILE *pAlumno;

pAlumno = fopen("alumnos.dat", "ab");	//Si no se puede hacer la apertura fopen devuelve una constante NULL

//Modos de apertura		wb (write) -> Escritura. Siempre crea un archivo nuevo
				rb (read) -> Solo lectura. El archivo tiene que existir.
				ab (append) -> Para agregar registros. Si el archivo no existe, lo crea.

if(pAlumno == NULL) return false;

fclose(pAlumno);

Para leer los archivos debo usar un while que se mueva mientras el valor sea 1 y no un end of file que equivale 0, de esta forma se puede listar los valores del
archivo, osea, lo que contiene dentro

Debo pasar reg como referencia en la funcion de leer para que le permita modificar los valores de la funcion.
*/

using namespace std;

    class Fecha{
    private:///sólo es accesible dentro de la clase
        int dia, mes, anio;///propiedades->variables de la clase
    public:///puede ser accedido tanto dentro como fuera de la clase
         Fecha(int d=0, int m=0, int a=0){
            dia=d;
            mes=m;
            anio=a;
         }

         void Cargar(){ ///métodos o funciones de la clase
            int d;
            cout<<"DIA ";
            cin>>d;
            setDia(d);
            cout<<"MES ";
            cin>>mes;
            cout<<"ANIO ";
            cin>>anio;
         }

         void Mostrar();
        ///setter
         void setDia(int dia){
             if(dia>=1 &&dia<=31)this->dia=dia;
             else this->dia=0;
             }
        void setMes(int m){mes=m;}
        void setAnio(int a){anio=a;}
        ///getter
        int getDia(){return dia;}
        int getMes(){return mes;}
        int getAnio(){return anio;}

        void MostrarDireccion(){
            cout<<"QUE ES this? "<<this<<endl;
            cout<<"PUNTERO OCULTO QUE CONTIENE LA DIRECCION DEL OBJETO QUE LLAMA AL METODO"<<endl;

        }
};

void Fecha::Mostrar(){
        cout<<this->dia<<"/"<<mes<<"/"<<anio<<endl;
}



class Alumno{
private:
    int legajo;
    char nombre[30];
    char apellido[30];
    Fecha fechanacimiento;
    char email[50];
    int codigoCarrera;

public:
    void Cargar();
    void Mostrar();


};


//Metodos de alumno

void Alumno::Cargar(){
    cout<<"Legajo: ";
    cin>>legajo;
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<"Apellido: ";
    cin>>apellido;
    cout<<"Fecha de nacimiento: "<<endl;
    fechanacimiento.Cargar();
    cout<<"Email: ";
    cin>>email;
    cout<<"Carrera: ";
    cin>>codigoCarrera;
}

void Alumno::Mostrar(){
    cout<<"Legajo "<<legajo<<endl;
    cout<<"Nombre "<<nombre<<endl;
    cout<<"Apellido "<<apellido<<endl;
    cout<<"Fecha de nacimiento "<<endl;
    fechanacimiento.Mostrar();
    cout<<"Email "<<email<<endl;
    cout<<"Carrera "<<codigoCarrera<<endl;

}

bool grabarRegistroAlumno(Alumno reg){
    FILE *pAlumno;
    pAlumno = fopen("alumnos.dat", "ab");
    if(pAlumno == NULL) return false;
    int escribio = fwrite(&reg, sizeof(Alumno), 1, pAlumno);
    fclose(pAlumno);

    return escribio;
}

bool leerRegistroAlumno(Alumno &reg){
    FILE *pAlumno;
    pAlumno = fopen("alumnos.dat", "rb");
    if(pAlumno == NULL) return false;
    while(fread(&reg, sizeof(Alumno), 1, pAlumno)==1){
        cout<<endl;
        reg.Mostrar();
    };
    fclose(pAlumno);

    return true;
}

int main(){

Alumno reg;
//reg.Cargar();
//grabarRegistroAlumno(reg);
leerRegistroAlumno(reg);
//reg.Mostrar();

system("pause");
return 0;
}
