
#ifndef HERENCIA_DOUBLE_H
#define HERENCIA_DOUBLE_H



class Double {
private:
    double value;

public:
    Double();  // Constructor predeterminado
    explicit Double(double value);  // Constructor con un valor inicial
    Double(const Double &rhs);  // Constructor de copia
    ~Double() = default;  // Destructor


    Double &operator=(const Double &rhs);
    Double &operator=(double i);
    Double &operator+(const Double &rhs);
    Double &operator+(double i);
    Double &operator-(const Double &rhs);
    Double &operator-(double i);
    Double &operator*(const Double &rhs);
    Double &operator*(double i);
    Double &operator/(const Double &rhs);
    Double &operator/(double i);
    Double &operator%(const Double &rhs);
    Double &operator%(double i);
    bool operator>(const Double &rhs) const;
    bool operator>(double i) const;
    bool operator<(const Double &rhs) const;
    bool operator<(double i) const;
    bool operator==(const Double &rhs) const;
    bool operator==(double i) const;
    bool operator>=(const Double &rhs) const;
    bool operator>=(double i) const;
    bool operator<=(const Double &rhs) const;
    bool operator<=(double i) const;
    bool operator!=(const Double &rhs) const;
    bool operator!=(double i) const;

    // Función para obtener el valor
    double getValue() const { return value; }
};

#endif // COCHE_DOUBLE_H

