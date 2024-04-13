//
// Created by Alumnos on 19/03/2024.
//

#ifndef ALEX_COCHE_H
#define ALEX_COCHE_H


#include <iostream>
#include <string>

class Coche {

public:

    Coche() = default;//Default constructor
    Coche(const Coche &automobil);// Copy constructor
    Coche(std::string marca, std::string duenio, std::string modelo, int anio, float kilometraje);//Parameters    constructor
    ~Coche() = default; //Destructor

    Coche &operator= (const Coche &rhs);

    void Imprimir(){
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Duenio: " << duenio << std::endl;
        std::cout << "Modelo: " << modelo << std::endl;
        std::cout << "Anio: " << anio << std::endl;
        std::cout << "Km: " << kilometraje << std::endl;
    };

private:
    std::string marca;
    std::string duenio;
    std::string modelo;

    int anio;
    float kilometraje;

};


#endif //Alex_COCHE_H




