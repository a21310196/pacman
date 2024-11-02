#include <iostream>
#include "TazoDorado.hpp"

int main() {
    std::cout << "Imprimir desde C++" << std::endl;
    
    TazoDorado coqueto;
    coqueto.Flotar();
    
    std::cout << "¿El coqueto está flotando?" << std::endl << coqueto.Flotando() << std::endl;

    return 0;
}