

#ifndef HERENCIA_NINJA_H
#define HERENCIA_NINJA_H

#include "persona.h"
#include <string>

class ninja :public persona{
public:

    ninja();
    ninja(int edad,float height,float weight,std::string bloodtype,std::string);

    ninja(std::string gender, std::string name, int age, float height, float weight, std::string aldea,
          std::string tChakra, int nvlChakra);



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

#endif //HERENCIA_NINJA_H
