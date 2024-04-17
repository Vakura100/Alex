

#ifndef COCHE_CHAR_H
#define COCHE_CHAR_H


class Char {
private:
    char value; // Valor del carácter

public:
    // Constructores
    Char(); // Constructor predeterminado
    Char(char value); // Constructor con un valor inicial
    Char(const Char &rhs); // Constructor de copia

    // Sobrecarga de operadores
    Char &operator=(const Char &rhs); // Operador de asignación
    Char &operator=(char i); // Operador de asignación para char
    Char operator+(const Char &rhs) const; // Operador de suma
    Char operator+(char i) const; // Operador de suma para char
    Char operator-(const Char &rhs) const; // Operador de resta
    Char operator-(char i) const; // Operador de resta para char
    bool operator==(const Char &rhs) const; // Operador de igualdad
    bool operator==(char i) const; // Operador de igualdad para char

    // Método para obtener el valor del carácter
    char getValue() const;
};





#endif // COCHE_CHAR_H
