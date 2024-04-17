#ifndef PERSONA_H
#define PERSONA_H


#include <string>
#include "int.h"



class persona {
public:

    persona() = default;//Default constructor
    persona(const persona &persona);// Copy constructor
    persona(std::string genero, std::string nombre, int edad, float altura, float peso);
    ~persona() = default;//Destructor

    std::string getgenero() const;
    void setgener(std::string genero);

    std::string getnombre() const;
    void setnombre(std::string nombre);

    int getedad() const;
    void setedad(int edad);

    float getaltura() const;
    void setaltura(float altura);

    float getpeso() const;
    void setpeso(float peso);


    std::string genero;
    std::string nombre;
    int edad;
    float altura;
    float peso;
};

#endif PERSONA_H



