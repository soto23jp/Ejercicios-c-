#include <iostream>
#include <string> // Incluimos la biblioteca para trabajar con cadenas de texto (nombres).

int main() {
    std::string nombre; // Declaramos una variable para almacenar el nombre.

    // Solicitamos al usuario que ingrese su nombre.
    std::cout << "Por favor, ingresa tu nombre: ";
    std::cin >> nombre;

    // Mostramos un mensaje de bienvenida con el nombre ingresado.
    std::cout << "Hola, " << nombre << ". ¡Bienvenido!" << std::endl;

    return 0;
}
