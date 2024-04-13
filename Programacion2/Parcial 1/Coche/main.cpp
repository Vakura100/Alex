#include "Coche.h"
#include <iostream>
#include "Float.h"
#include <string>

int main() {

    int a,b,c,d,e,f;

    std::cout << &a << " " << &b << " " << &c << " " << std::endl;

    Coche c1{};
    Coche c2("Ford", "Elpepe", "Yaris", 2005, 2000);
    Coche c3;

    c2 = c3;

    c1.Imprimir();
    c2.Imprimir();
    c3.Imprimir();

    FloatCell d1{};
    FloatCell d2(17);





    return 0;
}