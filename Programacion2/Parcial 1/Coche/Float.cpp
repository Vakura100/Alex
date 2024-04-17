

#include "Float.h"
#include <iostream>

// Constructor predeterminado
Float::Float() {
    this->value = 0.0f; // Inicializa el valor a 0.0
}

// Constructor con un valor inicial
Float::Float(float value) {
    this->value = value; // Inicializa el valor al valor pasado como argumento
}

// Constructor de copia
Float::Float(const Float &rhs) {
    this->value = rhs.value; // Inicializa el valor al valor del objeto pasado como argumento
}

// Sobrecarga del operador de asignación
Float &Float::operator=(const Float &rhs) {
    if (this != &rhs) { // Comprueba que no se está asignando a sí mismo
        this->value = rhs.value; // Asigna el valor del objeto pasado como argumento
    }
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de asignación para asignar un float
Float &Float::operator=(float i) {
    this->value = i; // Asigna el valor del float pasado como argumento
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de suma
Float Float::operator+(const Float &rhs) const {
    return Float(this->value + rhs.value); // Devuelve un nuevo objeto Float con la suma de los valores
}

// Sobrecarga del operador de suma para sumar un float
Float Float::operator+(float i) const {
    return Float(this->value + i); // Devuelve un nuevo objeto Float con la suma del valor y el float pasado como argumento
}

// Sobrecarga del operador de resta
Float Float::operator-(const Float &rhs) const {
    return Float(this->value - rhs.value); // Devuelve un nuevo objeto Float con la resta de los valores
}

// Sobrecarga del operador de resta para restar un float
Float Float::operator-(float i) const {
    return Float(this->value - i); // Devuelve un nuevo objeto Float con la resta del valor y el float pasado como argumento
}

// Sobrecarga del operador de multiplicación
Float Float::operator*(const Float &rhs) const {
    return Float(this->value * rhs.value); // Devuelve un nuevo objeto Float con la multiplicación de los valores
}

// Sobrecarga del operador de multiplicación para multiplicar por un float
Float Float::operator*(float i) const {
    return Float(this->value * i); // Devuelve un nuevo objeto Float con la multiplicación del valor y el float pasado como argumento
}

// Sobrecarga del operador de división
Float Float::operator/(const Float &rhs) const {
    if (rhs.value != 0.0f) {
        return Float(this->value / rhs.value);
    } else {
        throw std::runtime_error("División por cero"); // Lanza una excepción en caso de división por cero
    }
}

Float Float::operator/(float i) const {
    if (i != 0.0f) {
        return Float(this->value / i);
    } else {
        throw std::runtime_error("División por cero"); // Lanza una excepción en caso de división por cero
    }
}



// Sobrecarga de operadores de comparación
bool Float::operator>(const Float &rhs) const {
    return this->value > rhs.value; // Devuelve true si el valor es mayor que el valor del objeto pasado como argumento
}

bool Float::operator>(float i) const {
    return this->value > i; // Devuelve true si el valor es mayor que el float pasado como argumento
}

bool Float::operator<(const Float &rhs) const {
    return this->value < rhs.value; // Devuelve true si el valor es menor que el valor del objeto pasado como argumento
}

bool Float::operator<(float i) const {
    return this->value < i; // Devuelve true si el valor es menor que el float pasado como argumento
}

bool Float::operator==(const Float &rhs) const {
    return this->value == rhs.value; // Devuelve true si el valor es igual al valor del objeto pasado como argumento
}

bool Float::operator==(float i) const {
    return this->value == i; // Devuelve true si el valor es igual al float pasado como argumento
}

bool Float::operator>=(const Float &rhs) const {
    return this->value >= rhs.value; // Devuelve true si el valor es mayor o igual al valor del objeto pasado como argumento
}

bool Float::operator>=(float i) const {
    return this->value >= i; // Devuelve true si el valor es mayor o igual al float pasado como argumento
}

bool Float::operator<=(const Float &rhs) const {
    return this->value <= rhs.value; // Devuelve true si el valor es menor o igual al valor del objeto pasado como argumento
}

bool Float::operator<=(float i) const {
    return this->value <= i; // Devuelve true si el valor es menor o igual al float pasado como argumento
}

bool Float::operator!=(const Float &rhs) const {
    return this->value != rhs.value; // Devuelve true si el valor es distinto al valor del objeto pasado como argumento
}

bool Float::operator!=(float i) const {
    return this->value != i; // Devuelve true si el valor es distinto al float pasado como argumento
}

// Función para obtener el valor
float Float::getValue() const {
    return value; // Devuelve el valor
}



