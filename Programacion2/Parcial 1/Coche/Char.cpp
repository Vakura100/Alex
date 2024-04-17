
#include "Char.h"


// Constructor predeterminado
Char::Char() {
    value = '\0'; // Inicializa el valor a '\0' (carácter nulo)
}

// Constructor con un valor inicial
Char::Char(char value) {
    this->value = value; // Inicializa el valor al valor pasado como argumento
}

// Constructor de copia
Char::Char(const Char &rhs) {
    value = rhs.value; // Inicializa el valor al valor del objeto pasado como argumento
}

// Sobrecarga del operador de asignación
Char &Char::operator=(const Char &rhs) {
    if (this != &rhs) { // Comprueba que no se está asignando a sí mismo
        value = rhs.value; // Asigna el valor del objeto pasado como argumento
    }
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de asignación para asignar un char
Char &Char::operator=(char i) {
    value = i; // Asigna el valor del char pasado como argumento
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de suma
Char Char::operator+(const Char &rhs) const {
    return Char(value + rhs.value); // Devuelve un nuevo objeto Char con la suma de los valores
}

// Sobrecarga del operador de suma para sumar un char
Char Char::operator+(char i) const {
    return Char(value + i); // Devuelve un nuevo objeto Char con la suma del valor y el char pasado como argumento
}

// Sobrecarga del operador de resta
Char Char::operator-(const Char &rhs) const {
    return Char(value - rhs.value); // Devuelve un nuevo objeto Char con la resta de los valores
}

// Sobrecarga del operador de resta para restar un char
Char Char::operator-(char i) const {
    return Char(value - i); // Devuelve un nuevo objeto Char con la resta del valor y el char pasado como argumento
}


bool Char::operator==(const Char &rhs) const {
    return value == rhs.value; // Devuelve true si el valor es igual al valor del objeto pasado como argumento
}

bool Char::operator==(char i) const {
    return value == i; // Devuelve true si el valor es igual al char pasado como argumento
}
