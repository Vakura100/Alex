
#include "Char.h"


//Constructor Implícito
Char::Char(){
    this-> value = 0;
}
//Constructor Explícito por copia
Char::Char(char value){
    this-> value=value;
}
//Constructor Explícito por Parámetros
Char::Char(const Char &rhs){
    value= rhs.value;
}

//Sobrecarga de operador "="
Char &Char::operator= (const Char &rhs){
    this->value = rhs.value;
    return *this;
}
Char &Char::operator= (char i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador "+"
Char &Char::operator+ (const Char &rhs){
    this->value = rhs.value;
    return *this;
}
Char &Char::operator+ (char i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador "-"
Char &Char::operator- (const Char &rhs){
    this->value = rhs.value;
    return *this;
}
Char &Char::operator- (char i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador *
Char &Char::operator* (Char &rhs){
    this->value = rhs.value;
    return *this;
}
Char &Char::operator* (char i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador /
Char &Char::operator/ (Char &rhs){
    this->value = rhs.value;
    return *this;
}
Char &Char::operator/ (char i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador %
Char &Char::operator% (Char &rhs){
    this->value = rhs.value;
    return *this;
}
Char &Char::operator% (char i){
    this->value = i;
    return *this;
}
//Sobrecarga de Operadores de comparacion ">,<,==,=>,=<,!="
Char &Char::operator> (Char &rhs){
    this->value = rhs.value;
    return *this;
}
Char &Char::operator> (bool i){
    this->value = i;
    return *this;
}
Char &Char::operator< (Char &rhs){
    this->value = rhs.value;
    return *this;
}
Char &Char::operator< (bool i){
    this->value = i;
    return *this;
}
Char &Char::operator== (Char &rhs){
    this->value = rhs.value;
    return *this;
}
Char &Char::operator== (bool i){
    this->value = i;
    return *this;
}
Char &Char::operator>= (Char &rhs){
    this->value = rhs.value;
    return *this;
}
Char &Char::operator>= (bool i){
    this->value = i;
    return *this;
}
Char &Char::operator<= (Char &rhs){
    this->value = rhs.value;
    return *this;
}
Char &Char::operator<= (bool i){
    this->value = i;
    return *this;
}
Char &Char::operator!= (Char &rhs){
    this->value = rhs.value;
    return *this;
}
Char &Char::operator!= (bool i){
    this->value = i;
    return *this;
}