

#include "ninja.h"


ninja::ninja(const std::string &nombre, const std::string &genero, int edad, float estatura, float peso,
             const std::string &chakra, const std::string &aldea, const std::string  &clan)
             : persona(std::string (genero, std::string (nombre, int (edad, float (altura, float peso);
}

ninja::ninja(const ninja &rhs):persona(rhs){
    aldea = rhs.aldea;
    tChakra = rhs.tChakra;
    nvlChakra = rhs.nvlChakra;
}
l
std::string ninja::getAldea() const {
    return aldea;
}
void ninja::setAldea(std::string aldea) {
    this-> aldea = aldea;
}

std::string ninja::getTChakra() const {
    return tChakra;
}
void ninja::setTChakra(std::string tChakra) {
    this->tChakra = tChakra;
}

int ninja::getNvlChakra() const {
    return nvlChakra;
}
void ninja::setNvlChakra(int nvlChakra){
    this->nvlChakra = nvlChakra;
}