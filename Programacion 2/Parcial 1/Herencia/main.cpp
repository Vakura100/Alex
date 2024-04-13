#include "zanin.h"
#include "ninja.h"
int main(){

    persona Miguel("Hombre", "Miguel", 23, 1.78, 61.7);
    ninja Hernestito("Hombre", "Miguel", 23, 1.78, 61.7,"Konoha","Fuego",27);
    zanin Pepe("Hombre", "Pepe", 89, 1.54, 34.7, "Papulandia", "Viento", 42, "Axor", "Capybara", "explocion");

    std::cout << Miguel.getAge() << std::endl;
    std::cout << Hernestito.getAldea()<< std::endl;
    std::cout << Pepe.getApodo()<< std::endl;
    std::cout << Kriko.getbestia()<< std::endl;
}