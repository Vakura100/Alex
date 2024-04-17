//
// Created by memop on 12/04/2024.
//

#ifndef HERENCIA_FLOAT_H
#define HERENCIA_FLOAT_H



class Float {
private:
    float value;

public:
    Float();  // Constructor predeterminado
    explicit Float(float value);  // Constructor con un valor inicial
    Float(const Float &rhs);  // Constructor de copia
    ~Float() = default;  // Destructor

    // Sobrecarga de operadores
    Float &operator=(const Float &rhs);
    Float &operator=(float i);
    Float operator+(const Float &rhs) const;
    Float operator+(float i) const;
    Float operator-(const Float &rhs) const;
    Float operator-(float i) const;
    Float operator*(const Float &rhs) const;
    Float operator*(float i) const;
    Float operator/(const Float &rhs) const;
    Float operator/(float i) const;

    bool operator>(const Float &rhs) const;
    bool operator>(float i) const;
    bool operator<(const Float &rhs) const;
    bool operator<(float i) const;
    bool operator==(const Float &rhs) const;
    bool operator==(float i) const;
    bool operator>=(const Float &rhs) const;
    bool operator>=(float i) const;
    bool operator<=(const Float &rhs) const;
    bool operator<=(float i) const;
    bool operator!=(const Float &rhs) const;
    bool operator!=(float i) const;

    // Función para obtener el valor
    float getValue() const;
};

#endif //HERENCIA_FLOAT_H




