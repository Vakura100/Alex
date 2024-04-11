#include <iostream>
#include <string>


class Coche{
public:
    std::string Marca;
    std::string Modelo;
    int Anio;
    double Kilometraje;
    std::string Duenio;
    std::string Color;

};

int main() {

    Coche coche1;
    coche1.Marca = "Ford";
    coche1.Modelo = "Fiesta";
    coche1.Anio = 2010;
    coche1.Color = "Rojo";
    coche1.Duenio = "Juan";

    Coche coche2;
    coche2.Marca = "Chevrolet";
    coche2.Modelo = "Camaro";
    coche2.Anio = 2015;
    coche2.Color = "azul";
    coche2.Duenio = "Pepe";

    std::cout << "Su Marca es " << coche1.Marca << std::endl;
    std::cout << "Su Modelo es " << coche1.Modelo << std::endl;
    std::cout << "Su Anio es " << coche1.Anio << std::endl;
    std::cout << "Su Color es " << coche1.Color << std::endl;
    std::cout << "El Duenio es " << coche1.Duenio << std::endl;
    return 0;
}