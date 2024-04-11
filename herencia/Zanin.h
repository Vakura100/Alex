

#ifndef HERENCIA_ZANIN_H
#define HERENCIA_ZANIN_H


#include "persona.h"
#include <string>

class zanin :public persona{
public:

    zanin();
    zanin(int edad,float height,float weight,std::string bloodtype,std::string);

   zanin(std::string gender, std::string name, int age, float height, float weight, std::string aldea,
          std::string tChakra, int nvlChakra);

    zanin(const zanin& zanin);

    ~zanin() = default;


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


#endif //HERENCIA_ZANIN_H
