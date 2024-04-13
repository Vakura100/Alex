

#ifndef HERENCIA_INT_H
#define HERENCIA_INT_H


class Int {

};class IntCell {

public:

    IntCell();//Default constructor
    IntCell(const IntCell &intCell);// Copy constructor
    explicit IntCell(int value);//Parameters constructor
    ~IntCell() = default;//Destructor

//Operadores de asignación =
    IntCell &operator= (const IntCell &rhs);
    IntCell &operator= (int i);
//Operadores de asignación +
    IntCell &operator+ (const IntCell &rhs);
    IntCell &operator+ (int i);
//Operadores de asignación -
    IntCell &operator- (const IntCell &rhs);
    IntCell &operator- (int i);
//Operadores de asignación *
    IntCell &operator* (IntCell &rhs);
    IntCell &operator* (int i);
//Operadores de asignación /
    IntCell &operator/ (IntCell &rhs);
    IntCell &operator/ (int i);
//Operadores de asignación %
    IntCell &operator% (IntCell &rhs);
    IntCell &operator% (int i);
//Operadores de comparacion ">,<,==,=>,=<,!="
    IntCell &operator> (IntCell &rhs);
    IntCell &operator> (bool i);

    IntCell &operator< (IntCell &rhs);
    IntCell &operator< (bool i);

    IntCell &operator== (IntCell &rhs);
    IntCell &operator== (bool i);

    IntCell &operator>= (IntCell &rhs);
    IntCell &operator>= (bool i);

    IntCell &operator<= (IntCell &rhs);
    IntCell &operator<= (bool i);

    IntCell &operator!= (IntCell &rhs);
    IntCell &operator!= (bool i);

private:

    int value;

};


#endif //HERENCIA_INT_H
