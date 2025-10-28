#include <iostream>
#include "electric_field.h"


int main() {
    std::cout << "Nerd electric field stuff gimmie some of those pancakes"<< std::endl;


    Electric_Field E1;

    Electric_Field E2(3, 4, 0);


    E1.setX(2.0);
    E1.setY(3.0);
    E1.setZ(6.0);
    
    Magnetic_Field B1;
    Magnetic_Field B2(1, 1, 1);

    B1.setX(1.5);
    B1.setY(2.5);
    B1.setZ(4.0);


    std::cout << "E1 Magnitude " << E1.calculateMagni_farts() << std::endl;
    std::cout << "E2 Magnitude " << E2.calculateMagni_farts() << std::endl;


    std::cout << "E1 Inner Produckt " << E1.innerproduks() << std::endl;
    std::cout << "E2 Inner Producky " << E2.innerproduks() << std::endl;


    
    
    
    std::cout << "B1 Magnitude: " << B1.calculateMagnitude() << std::endl;
    std::cout << "B2 Magnitude: " << B2.calculateMagnitude() << std::endl;

    std::cout << "B1 Unit Vector: "<< std::endl;
    B1.unitVector();

    std::cout << "B2 Unit Vector: "<< std::endl;
    B2.unitVector();
    
    
        std::cout << "Magnetic field something something assignment done" << std::endl;
    return 0;
    
    
    
}
