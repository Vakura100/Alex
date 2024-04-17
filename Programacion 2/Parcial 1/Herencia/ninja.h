
#ifndef HERENCIA_NINJA_H
#define HERENCIA_NINJA_H

#include "persona.h"
#include <string>

class ninja :public persona{
public:

    ninja() = default;

    ninja(const std::string &nombre, const std::string &genero, int edad, float altura, float peso,
          const std::string &chakra, const std::string &aldea, const std::string  &clan);


    ninja(const ninja& ninja);

    ~ninja() = default;


    std::string getAldea() const;
    void setAldea(std::string aldea);

    std::string getTChakra() const;
    void setTChakra(std::string tChakra);

    int getNvlChakra() const;
    void setNvlChakra(int nvlChakra);

private:

    std::string aldea;
    std::string tChakra;
    int nvlChakra;
};

#endif HERENCIA_NINJA_H
