//
// Created by Alumnos on 11/04/2024.
//

#ifndef ALEX_INT_H
#define ALEX_INT_H


class IntCell {
public:
    IntCell();//Default constructor
    IntCell(const IntCell &intCell);// Copy constructor
    IntCell(int value);//Parameters constructor
    ~IntCell() = default;//Destructor

    // Operadores de asignación =

    IntCell&operator=(const IntCell &rhs);

    IntCell &operator=(int i);

//Operadores de asignación +
    IntCell &operator+(const IntCell &rhs);

    IntCell &operator+(int i);

//Operadores de asignación -
    IntCell &operator-(const IntCell &rhs);

    IntCell &operator-(int i);

//Operadores de asignación *
    IntCell &operator*(IntCell &rhs);

    IntCell &operator*(int i);

//Operadores de asignación /
    IntCell &operator/(IntCell &rhs);

    IntCell &operator/(int i);

//Operadores de asignación %
    IntCell &operator%(IntCell &rhs);

    IntCell &operator%(int i);

private:
    int value;
};

#endif //ALEX_INT_H
