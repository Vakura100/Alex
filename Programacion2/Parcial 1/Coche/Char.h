//
// Created by memop on 12/04/2024.
//

#ifndef HERENCIA_CHAR_H
#define HERENCIA_CHAR_H



class Char {

public:

    Char();//Default constructor
    Char(const Char &Char);// Copy constructor
    explicit Char(char value);//Parameters constructor
    ~Char() = default;//Destructor

//Operadores de asignación =
    Char &operator= (const Char &rhs);
    Char &operator= (char i);
//Operadores de asignación +
    Char &operator+ (const Char &rhs);
    Char &operator+ (char i);
//Operadores de asignación -
    Char &operator- (const Char &rhs);
    Char &operator- (char i);
//Operadores de asignación *
    Char &operator* (Char &rhs);
    Char &operator* (char i);
//Operadores de asignación /
    Char &operator/ (Char &rhs);
    Char &operator/ (char i);
//Operadores de asignación %
    Char &operator% (Char &rhs);
    Char &operator% (char i);
//Operadores de comparacion ">,<,==,=>,=<,!="
    Char &operator> (Char &rhs);
    Char &operator> (bool i);

    Char &operator< (Char &rhs);
    Char &operator< (bool i);

    Char &operator== (Char &rhs);
    Char &operator== (bool i);

    Char &operator>= (Char &rhs);
    Char &operator>= (bool i);

    Char &operator<= (Char &rhs);
    Char &operator<= (bool i);

    Char &operator!= (Char &rhs);
    Char &operator!= (bool i);

private:

    char value;

};
#endif //HERENCIA_CHAR_H
