#include <iostream>

int main() {
    double pesoLibras;

    // Solicitamos al usuario que ingrese el peso en libras.
    std::cout << "Ingrese el peso en libras: ";
    std::cin >> pesoLibras;

    // Realizamos la conversión a kilogramos y gramos.
    double pesoKilogramos = pesoLibras * 0.453592;
    double pesoGramos = pesoLibras * 453.59237;

    // Mostramos el resultado.
    std::cout << "El peso en kilogramos es: " << pesoKilogramos << " kg" << std::endl;
    std::cout << "El peso en gramos es: " << pesoGramos << " g" << std::endl;

    return 0;
}
