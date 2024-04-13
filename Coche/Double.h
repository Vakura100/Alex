
#ifndef HERENCIA_DOUBLE_H
#define HERENCIA_DOUBLE_H


class Double {

public:

    Double();//Default constructor
    Double(const Double &vdouble);// Copy constructor
    explicit Double(double value);//Parameters constructor
    ~Double() = default;//Destructor

//Assignment operators =
    Double &operator= (const Double &rhs);
    Double &operator= (double i);
//Assignment operators +
    Double &operator+ (const Double &rhs);
    Double &operator+ (double i);
//Assignment operators -
    Double &operator- (const Double &rhs);
    Double &operator- (double i);
//Assignment operators *
    Double &operator* (Double &rhs);
    Double &operator* (double i);
//Assignment operators /
    Double &operator/ (Double &rhs);
    Double &operator/ (double i);
//Assignment operators %
    Double &operator% (Double &rhs);
    Double &operator% (double i);
//Comparison operators ">,<,==,=>,=<,!="
    Double &operator> (Double &rhs);
    Double &operator> (bool i);

    Double &operator< (Double &rhs);
    Double &operator< (bool i);

    Double &operator== (Double &rhs);
    Double &operator== (bool i);

    Double &operator>= (Double &rhs);
    Double &operator>= (bool i);

    Double &operator<= (Double &rhs);
    Double &operator<= (bool i);

    Double &operator!= (Double &rhs);
    Double &operator!= (bool i);

private:

    double value;

};


#endif //Alex_COCHE_DOUBLE_H
