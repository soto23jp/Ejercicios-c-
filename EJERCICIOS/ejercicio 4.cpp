#include <iostream>

int main() {
    // Declaramos una variable para almacenar la edad.
    int edad;

    // Solicitamos al usuario que ingrese su edad.
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    // Verificamos si la persona es mayor o menor de edad y mostramos el resultado.
    if (edad >= 18) {
        std::cout << "Usted es mayor de edad." << std::endl;
    } else {
        std::cout << "Usted es menor de edad." << std::endl;
    }

    return 0;
}
