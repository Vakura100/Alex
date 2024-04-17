#include "Coche.h"
#include <iostream>


int main() {
    // Crear un objeto Coche usando el constructor con parámetros
    Coche miCoche("Toyota", "Juan", "Corolla", 2022, 10000.5);

    // Imprimir los detalles del coche
    std::cout << "Detalles del coche:" << std::endl;
    miCoche.Imprimir();

    // Crear otro objeto Coche usando el constructor de copia
    Coche otroCoche = miCoche;

    // Modificar el otro coche
    otroCoche = Coche("Ford", "Pedro", "Fiesta", 2021, 8000.75);

    // Imprimir los detalles del otro coche
    std::cout << "Detalles del otro coche:" << std::endl;
    otroCoche.Imprimir();

    return 0;
}




