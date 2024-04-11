#include "ninja.h"

ninja::ninja(std::string gender, std::string name, int age, float height, float weight, std::string aldea, std::string tChakra, int nvlChakra){
    this-> aldea = aldea;
    this-> tChakra = tChakra;
    this-> nvlChakra = nvlChakra;
}

ninja::ninja(const ninja &rhs):persona(rhs){
    aldea = rhs.aldea;
    tChakra = rhs.tChakra;
    nvlChakra = rhs.nvlChakra;
}

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