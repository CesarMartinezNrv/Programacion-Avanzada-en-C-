#include <iostream>
#include <iomanip>
#include <string>

class Estudiante {
    private:
        std::string nombre;
        double nota;
        int edad;

//Constructor =================
    public:
        Estudiante(std::string n, double ingresoNota, int ingresoEdad) : nombre(n) {
            nota = (ingresoNota >= 0 && ingresoNota <= 100) ? ingresoNota : 0;
            edad = (ingresoEdad >= 1 && ingresoEdad <= 120) ? ingresoEdad : 0;
        }

//Getters ================
    std::string getNombre() const { return nombre; }
    double getNota() const { return nota; }
    int getEdad() const { return edad; }

//Setters =================
    void setNota(double calificacion) {
        if(calificacion >= 0 && calificacion <= 100) {
            nota = calificacion;
            std::cout<<"Nota actualizada: "<<std::fixed<<std::setprecision(2)<<nota<<std::endl;
        }
        else {
            std::cout<<"Nota invalida."<<std::endl;
        }
    }

    void setEdad(int nuevaEdad) {
        if(nuevaEdad >= 1 && nuevaEdad <= 120) {
            edad = nuevaEdad;
            std::cout<<"Edad actualizada: "<<edad<<std::endl;
        }
        else {
            std::cout<<"Edad invalida."<<std::endl;
        }
    }

//Método =================
    void imprimir() const {
        std::cout<<"Nombre: "<<nombre<<std::endl;
        std::cout<<"Nota  : "<<std::fixed<<std::setprecision(2)<<nota<<std::endl;
        std::cout<<"Edad  : "<<edad<<std::endl;
    }
};


int main(){

Estudiante e("Luis", 85.0, 22);
e.imprimir();

e.setNota(150.0);
e.setNota(91.5);
e.setEdad(-3);
e.setEdad(23);

std::cout<<"Nota final: "<<std::fixed<<std::setprecision(2)<<e.getNota()<<std::endl;
std::cout<<"Edad final: "<<e.getEdad()<<std::endl;

return 0;
}



