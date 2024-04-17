

#include "Int.h"

// Constructor predeterminado
IntCell::IntCell() {
    value = 0; // Inicializa el valor a 0
}

// Constructor con un valor inicial
IntCell::IntCell(int value) {
    this->value = value; // Inicializa el valor al valor pasado como argumento
}

// Constructor de copia
IntCell::IntCell(const IntCell &rhs) {
    value = rhs.value; // Inicializa el valor al valor del objeto pasado como argumento
}

// Sobrecarga del operador de asignación
IntCell &IntCell::operator=(const IntCell &rhs) {
    if (this != &rhs) { // Comprueba que no se está asignando a sí mismo
        value = rhs.value; // Asigna el valor del objeto pasado como argumento
    }
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de asignación para asignar un int
IntCell &IntCell::operator=(int i) {
    value = i; // Asigna el valor del int pasado como argumento
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de suma
IntCell &IntCell::operator+(const IntCell &rhs) {
    value += rhs.value; // Suma el valor del objeto pasado como argumento
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de suma para sumar un int
IntCell &IntCell::operator+(int i) {
    value += i; // Suma el int pasado como argumento
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de resta
IntCell &IntCell::operator-(const IntCell &rhs) {
    value -= rhs.value; // Resta el valor del objeto pasado como argumento
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de resta para restar un int
IntCell &IntCell::operator-(int i) {
    value -= i; // Resta el int pasado como argumento
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de multiplicación
IntCell &IntCell::operator*(const IntCell &rhs) {
    value *= rhs.value; // Multiplica por el valor del objeto pasado como argumento
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de multiplicación para multiplicar por un int
IntCell &IntCell::operator*(int i) {
    value *= i; // Multiplica por el int pasado como argumento
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de división
IntCell &IntCell::operator/(const IntCell &rhs) {
    if (rhs.value != 0) { // Comprueba que no se está dividiendo por cero
        value /= rhs.value; // Divide por el valor del objeto pasado como argumento
    } else {
        // Manejo de división por cero
        value = 0; // Asigna el valor a 0
    }
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de división para dividir por un int
IntCell &IntCell::operator/(int i) {
    if (i != 0) { // Comprueba que no se está dividiendo por cero
        value /= i; // Divide por el int pasado como argumento
    } else {
        // Manejo de división por cero
        value = 0; // Asigna el valor a 0
    }
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de módulo
IntCell &IntCell::operator%(const IntCell &rhs) {
    if (rhs.value != 0) { // Comprueba que no se está dividiendo por cero
        value %= rhs.value; // Calcula el módulo del valor del objeto pasado como argumento
    } else {
        // Manejo de división por cero
        value = 0; // Asigna el valor a 0
    }
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga del operador de módulo para calcular el módulo de un int
IntCell &IntCell::operator%(int i) {
    if (i != 0) { // Comprueba que no se está dividiendo por cero
        value %= i; // Calcula el módulo del int pasado como argumento
    } else {
        // Manejo de división por cero
        value = 0; // Asigna el valor a 0
    }
    return *this; // Devuelve una referencia al objeto actual
}

// Sobrecarga de operadores de comparación
bool IntCell::operator>(const IntCell &rhs) const {
    return value > rhs.value; // Devuelve true si el valor es mayor que el valor del objeto pasado como argumento
}

bool IntCell::operator>(int i) const {
    return value > i; // Devuelve true si el valor es mayor que el int pasado como argumento
}

bool IntCell::operator<(const IntCell &rhs) const {
    return value < rhs.value; // Devuelve true si el valor es menor que el valor del objeto pasado como argumento
}

bool IntCell::operator<(int i) const {
    return value < i; // Devuelve true si el valor es menor que el int pasado como argumento
}

bool IntCell::operator==(const IntCell &rhs) const {
    return value == rhs.value; // Devuelve true si el valor es igual al valor del objeto pasado como argumento
}

bool IntCell::operator==(int i) const {
    return value == i; // Devuelve true si el valor es igual al int pasado como argumento
}

bool IntCell::operator>=(const IntCell &rhs) const {
    return value >= rhs.value; // Devuelve true si el valor es mayor o igual al valor del objeto pasado como argumento
}

bool IntCell::operator>=(int i) const {
    return value >= i; // Devuelve true si el valor es mayor o igual al int pasado como argumento
}

bool IntCell::operator<=(const IntCell &rhs) const {
    return value <= rhs.value; // Devuelve true si el valor es menor o igual al valor del objeto pasado como argumento
}

bool IntCell::operator<=(int i) const {
    return value <= i; // Devuelve true si el valor es menor o igual al int pasado como argumento
}

bool IntCell::operator!=(const IntCell &rhs) const {
    return value != rhs.value; // Devuelve true si el valor es distinto al valor del objeto pasado como argumento
}

bool IntCell::operator!=(int i) const {
    return value != i; // Devuelve true si el valor es distinto al int pasado como argumento
}


