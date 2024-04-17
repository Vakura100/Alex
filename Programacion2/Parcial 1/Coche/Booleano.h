

#ifndef HERENCIA_BOOLEANO_H
#define HERENCIA_BOOLEANO_H



    class Booleano {
    private:
        bool value;

    public:
        Booleano();  // Constructor predeterminado
        explicit Booleano(bool value);  // Constructor con un valor inicial
        Booleano(const Booleano &rhs);  // Constructor de copia

        // Sobrecarga de operadores
        Booleano &operator=(const Booleano &rhs);
        Booleano &operator=(bool i);
        bool operator==(const Booleano &rhs) const;
        bool operator==(bool i) const;
        bool operator!=(const Booleano &rhs) const;
        bool operator!=(bool i) const;
    };



#endif //HERENCIA_BOOLEANO_H
