#include <iostream>
#include "ninja.h"
#include "Zanin.h"
int main(){

    persona Pablo("Hombre", "Pablo", 18, 1.80, 71.7);
    ninja Sasuke("Hombre", "Miguel", 23, 1.78, 61.7,"Konoha","Fuego",27);
    zanin Pepe("Hombre", "Miguel", 23, 1.78, 61.7,"Konoha","Fuego",27);
    Sasuke.getAldea();
    Pablo.getAge();
    Pepe.getNvlChakra();
}
