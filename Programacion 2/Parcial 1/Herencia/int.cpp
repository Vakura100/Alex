//
// Created by memop on 12/04/2024.
//;s


#include "int.h"
#include "int.h"
//Constructor Implícito
Int::Int(){
    this-> value =0;
};
//Constructor Explícito por copia
Int::IntCell(int value){
    this-> value=value;
};
//Constructor Explícito por Parámetros
Int::Int(const Int &rhs){
    value= rhs.value;
};
//Sobrecarga de operador "="
Int &Int::operator = (const Int &rhs){
    this->value = rhs.value;
    return *this;
}
Int &Int::operator= (int i){
    this->value = i;
    return *this;
}

//Sobrecarga de operador "+"
Int &Int::operator+ (const Int &rhs){
    this->value = rhs.value;
    return *this;
}
Int &Int::operator+ (int i){
    this->value = i;
    return *this;
}

//Sobrecarga de operador "-"
Int &Int::operator- (const Int &rhs){
    this->value = rhs.value;
    return *this;
}
Int &Int::operator- (int i){
    this->value = i;
    return *this;
}

//Sobrecarga de operador *
Int &Int::operator* (Int &rhs){
    this->value = rhs.value;
    return *this;
}
Int &Int::operator* (int i){
    this->value = i;
    return *this;
}

//Sobrecarga de operador /
Int &Int::operator/ (Int &rhs){
    this->value = rhs.value;
    return *this;
}
Int &Int::operator/ (int i){
    this->value = i;
    return *this;
}

//Sobrecarga de operador %
Int &Int::operator% (Int &rhs){
    this->value = rhs.value;
    return *this;

}
Int &Int::operator% (int i) {
    this->value = i;
    return *this;
}