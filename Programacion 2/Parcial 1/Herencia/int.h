#ifndef HERENCIA_INT_H
#define HERENCIA_INT_H


class Int {
public:
    Int();//Default constructor
    Int(const Int &Int);// Copy constructor
    Int(int value);//Parameters constructor
    ~Int() = default;//Destructor

    // Operadores de asignación =

    Int&operator=(const Int &rhs);

    Int &operator=(int i);

//Operadores de asignación +
    Int &operator+(const Int &rhs);

    Int &operator+(int i);

//Operadores de asignación -
    Int &operator-(const Int &rhs);

    Int &operator-(int i);

//Operadores de asignación *
    Int &operator*(Int &rhs);

    Int &operator*(int i);

//Operadores de asignación /
    Int &operator/(Int &rhs);

    Int &operator/(int i);

//Operadores de asignación %
    Int &operator%(Int &rhs);

    Int &operator%(int i);


};

#endif //HERENCIA_INT_H
