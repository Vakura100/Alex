
#include "Double.h"

//Constructor Implícito
Double::Double(){
    this-> value = 0;
}
//Constructor Explícito por copia
Double::Double(double value){
    this-> value=value;
}
//Constructor Explícito por Parámetros
Double::Double(const Double &rhs){
    value= rhs.value;
}

//Sobrecarga de operador "="
Double &Double::operator= (const Double &rhs){
    this->value = rhs.value;
    return *this;
}
Double &Double::operator= (double i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador "+"
Double &Double::operator+ (const Double &rhs){
    this->value = rhs.value;
    return *this;
}
Double &Double::operator+ (double i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador "-"
Double &Double::operator- (const Double &rhs){
    this->value = rhs.value;
    return *this;
}
Double &Double::operator- (double i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador *
Double &Double::operator* (Double &rhs){
    this->value = rhs.value;
    return *this;
}
Double &Double::operator* (double i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador /
Double &Double::operator/ (Double &rhs){
    this->value = rhs.value;
    return *this;
}
Double &Double::operator/ (double i){
    this->value = i;
    return *this;
}
//Sobrecarga de operador %
Double &Double::operator% (Double &rhs){
    this->value = rhs.value;
    return *this;
}
Double &Double::operator% (double i){
    this->value = i;
    return *this;
}
//Sobrecarga de Operadores de comparacion ">,<,==,=>,=<,!="
Double &Double::operator> (Double &rhs){
    this->value = rhs.value;
    return *this;
}
Double &Double::operator> (bool i){
    this->value = i;
    return *this;
}
Double &Double::operator< (Double &rhs){
    this->value = rhs.value;
    return *this;
}
Double &Double::operator< (bool i){
    this->value = i;
    return *this;
}
Double &Double::operator== (Double &rhs){
    this->value = rhs.value;
    return *this;
}
Double &Double::operator== (bool i){
    this->value = i;
    return *this;
}
Double &Double::operator>= (Double &rhs){
    this->value = rhs.value;
    return *this;
}
Double &Double::operator>= (bool i){
    this->value = i;
    return *this;
}
Double &Double::operator<= (Double &rhs){
    this->value = rhs.value;
    return *this;
}
Double &Double::operator<= (bool i){
    this->value = i;
    return *this;
}
Double &Double::operator!= (Double &rhs){
    this->value = rhs.value;
    return *this;
}
Double &Double::operator!= (bool i){
    this->value = i;
    return *this;
}
