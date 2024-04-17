

#include "Booleano.h"

// Constructor predeterminado
Booleano::Booleano() {
    this->value = true; // Inicializa el valor a true
}

// Constructor con un valor inicial
Booleano::Booleano(bool value) {
    this->value = value; // Inicializa el valor al valor pasado como argumento
}

// Constructor de copia
Booleano::Booleano(const Booleano &rhs) {
    this->value = rhs.value; // Inicializa el valor al valor del objeto pasado como argumento
}

// Sobrecarga del operador de asignación
Booleano &Booleano::operator=(const Booleano &rhs) {
    if (this != &rhs) { // Comprueba que no se está asignando a sí mismo
        this->value = rhs.value; // Asigna el valor del objeto pasado como argumento
    }
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de asignación para asignar un bool
Booleano &Booleano::operator=(bool i) {
    this->value = i; // Asigna el valor del bool pasado como argumento
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de igualdad
bool Booleano::operator==(const Booleano &rhs) const {
    return this->value == rhs.value; // Devuelve true si el valor es igual al valor del objeto pasado como argumento
}

bool Booleano::operator==(bool i) const {
    return this->value == i; // Devuelve true si el valor es igual al bool pasado como argumento
}

// Sobrecarga del operador de desigualdad
bool Booleano::operator!=(const Booleano &rhs) const {
    return this->value != rhs.value; // Devuelve true si el valor es distinto al valor del objeto pasado como argumento
}

bool Booleano::operator!=(bool i) const {
    return this->value != i; // Devuelve true si el valor es distinto al bool pasado como argumento
}
