#include "Coche.h"

#include "Coche.h"

// Constructor de copia
Coche::Coche(const Coche &rhs) {
    marca = rhs.marca;
    duenio = rhs.duenio;
    modelo = rhs.modelo;
    anio = rhs.anio;
    kilometraje = rhs.kilometraje;
}

// Constructor de movimiento
Coche::Coche(Coche &&rhs) {
    marca = std::move(rhs.marca);
    duenio = std::move(rhs.duenio);
    modelo = std::move(rhs.modelo);
    anio = rhs.anio;
    kilometraje = rhs.kilometraje;
}

// Constructor con parámetros
Coche::Coche(std::string marca, std::string duenio, std::string modelo, int anio, float kilometraje) {
    this->marca = marca;
    this->duenio = duenio;
    this->modelo = modelo;
    this->anio = anio;
    this->kilometraje = kilometraje;
}

// Operador de asignación
Coche &Coche::operator=(const Coche &rhs) {
    if (this != &rhs) {
        marca = rhs.marca;
        duenio = rhs.duenio;
        modelo = rhs.modelo;
        anio = rhs.anio;
        kilometraje = rhs.kilometraje;
    }
    return *this;
}

// Función para imprimir
void Coche::Imprimir() const {
    // Aquí podrías imprimir los detalles del coche
}