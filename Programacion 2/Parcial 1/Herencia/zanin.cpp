#include "zanin.h"



    zanin::zanin(std::string gender, std::string name, int age, float height, float weight, std::string aldea, std::string tChakra, int nvlChakra){
    this-> aldea = aldea;
    this-> tChakra = tChakra;
    this-> nvlChakra = nvlChakra;
}

zanin::zanin(const zanin &rhs):persona(rhs){
    aldea = rhs.aldea;
    tChakra = rhs.tChakra;
    nvlChakra = rhs.nvlChakra;
}

std::string ninja::getAldea() const {
    return aldea;
}
void zanin::setAldea(std::string aldea) {
    this-> aldea = aldea;
}

std::string zanin::getTChakra() const {
    return tChakra;
}
void zanin::setTChakra(std::string tChakra) {
    this->tChakra = tChakra;
}

int zanin::getNvlChakra() const {
    return nvlChakra;
}
void zanin::setNvlChakra(int nvlChakra){
    this->nvlChakra = nvlChakra;
}