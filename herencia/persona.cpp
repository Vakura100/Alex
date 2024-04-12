

#include "persona.h"
#include "persona.h"

persona::persona(const persona &rhs){
    gender = rhs.gender;
    name = rhs.name;
    age = rhs.age;
    height = rhs.height;
    weight = rhs.weight;

}

persona::persona(std::string gender, std::string name, int age, float height, float weight){
    this-> gender = gender;
    this-> name = name;
    this-> age = age;
    this-> height = height;
    this-> weight = weight;
}

std::string persona::getGender() const {
    return gender;
}
void persona::setGender(std::string gender) {
    this-> gender = gender;
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