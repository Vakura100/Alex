

#include "persona.h"
#include "string"

persona::persona(const persona &rhs){
    genero = rhs.genero;
    nombre = rhs.nombre;
    edad = rhs.edad;
    altura = rhs.altura;
    peso = rhs.peso;

}

persona(std::string genero, std::string nombre, int edad, float altura, float peso);

    this-> genero = genero;
    this-> nombre = nombre;
    this-> edad = edad;
    this-> altura = altura;
    this-> pesot = peso;
}

std::string persona::getGender() const {
    return genero;
}
void persona::setGender(std::string gender) {
    this-> genero = genero;
}

std::string persona::getName() const {
    return name;
}
void persona::setName(std::string name) {
    this->name = name;
}

int persona::getAge() const {
    return age;
}
void persona::setAge(int age){
    this->age = age;
}

float persona::getHeight() const {
    return height;
}
void persona::setHeight(float height) {
    this->height = height;
}

float persona::getWeight() const {
    return weight;
}
void persona::setWeight(float weight) {
    this->weight = weight;
}