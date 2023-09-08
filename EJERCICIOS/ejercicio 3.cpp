#include <iostream>

int main() {
    // Declaramos variables para almacenar los números.
    double numero1, numero2;

    // Solicitamos al usuario que ingrese el primer número.
    std::cout << "Ingrese el primer número: ";
    std::cin >> numero1;

    // Solicitamos al usuario que ingrese el segundo número.
    std::cout << "Ingrese el segundo número: ";
    std::cin >> numero2;

    // Realizamos la suma.
    double suma = numero1 + numero2;

    // Mostramos el resultado.
    std::cout << "La suma de " << numero1 << " y " << numero2 << " es: " << suma << std::endl;

    return 0;
}
