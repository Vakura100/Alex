//
// Created by Alumnos on 19/03/2024.
//

#ifndef ALEX_COCHE_H
#define ALEX_COCHE_H


class Coche {
public:

//Constructor Predeterminado
    Coche() = default;

// Copia de constructor
    Coche(const Coche &rhs);

// Constructor de referencia
    Coche(Coche &&rhs) noexcept;

//Destructor
    ~Coche() = default;


    int getValue() const;

    void setValue(int newValue);

private:
    int storedValue{};

};
#endif //Alex_COCHE_H




