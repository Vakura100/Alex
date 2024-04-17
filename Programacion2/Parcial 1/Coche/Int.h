

#ifndef COCHE_INT_H
#define COCHE_INT_H


class IntCell {
private:
    int value;

public:
    // Constructores
    IntCell();                // Constructor predeterminado
    explicit IntCell(int value);       // Constructor con un valor inicial
    IntCell(const IntCell &rhs);  // Constructor de copia

    // Destructor
    ~IntCell() = default;

    // Operador de asignación
    IntCell &operator=(const IntCell &rhs);
    IntCell &operator=(int i);

    // Operadores aritméticos
    IntCell &operator+(const IntCell &rhs);
    IntCell &operator+(int i);
    IntCell &operator-(const IntCell &rhs);
    IntCell &operator-(int i);
    IntCell &operator*(const IntCell &rhs);
    IntCell &operator*(int i);
    IntCell &operator/(const IntCell &rhs);
    IntCell &operator/(int i);
    IntCell &operator%(const IntCell &rhs);
    IntCell &operator%(int i);

    // Operadores de comparación
    bool operator>(const IntCell &rhs) const;
    bool operator>(int i) const;
    bool operator<(const IntCell &rhs) const;
    bool operator<(int i) const;
    bool operator==(const IntCell &rhs) const;
    bool operator==(int i) const;
    bool operator>=(const IntCell &rhs) const;
    bool operator>=(int i) const;
    bool operator<=(const IntCell &rhs) const;
    bool operator<=(int i) const;
    bool operator!=(const IntCell &rhs) const;
    bool operator!=(int i) const;




};


#endif //COCHE_INT_H
