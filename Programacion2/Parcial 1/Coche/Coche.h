

#ifndef COCHE_H
#define COCHE_H

#include <string>

#include <string>

class Coche {
public:
    // Constructores
    Coche() = default; // Constructor predeterminado
    Coche(const Coche &rhs); // Constructor de copia
    Coche(Coche &&rhs); // Constructor de movimiento
    Coche(std::string marca, std::string duenio, std::string modelo, int anio, float kilometraje); // Constructor con parámetros
    ~Coche() = default; // Destructor

    // Sobrecarga de operadores
    Coche &operator=(const Coche &rhs);

    // Función para imprimir
    void Imprimir() const;

private:
    std::string marca;
    std::string duenio;
    std::string modelo;
    int anio;
    float kilometraje;
};

#endif // COCHE_H






