#include "Coche.h"

Coche::Automovil(const Coche &rhs){
    marca = rhs.marca;
    duenio = rhs.duenio;
    modelo = rhs.modelo;
    anio = rhs.anio;
    kilometraje = rhs.kilometraje;
};

Coche::Coche(std::string marca, std::string duenio, std::string modelo, int anio, float kilometraje){
    this-> marca=marca;
    this-> duenio=duenio;
    this-> modelo=modelo;
    this-> anio=anio;
    this-> kilometraje=kilometraje;
};

Coche &Coche::operator= (const Coche &rhs){
    this->marca = rhs.marca;
    this->duenio = rhs.duenio;
    this->modelo = rhs.modelo;
    this->anio = rhs.anio;
    this->kilometraje = rhs.kilometraje;

    return *this;
}