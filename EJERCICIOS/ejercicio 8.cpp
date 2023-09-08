#include <iostream>

int main() {
    double temperatura;
    char escala;

    // Solicitamos al usuario ingresar la temperatura y la escala.
    std::cout << "Ingrese la temperatura: ";
    std::cin >> temperatura;

    std::cout << "Ingrese la escala (C, F, o K): ";
    std::cin >> escala;

    // Realizamos las conversiones y mostramos los resultados.
    switch (escala) {
        case 'C':
        case 'c':
            std::cout << "Temperatura en grados Celsius: " << temperatura << " °C" << std::endl;
            std::cout << "Temperatura en grados Fahrenheit: " << (temperatura * 9/5) + 32 << " °F" << std::endl;
            std::cout << "Temperatura en Kelvin: " << temperatura + 273.15 << " K" << std::endl;
            break;

        case 'F':
        case 'f':
            std::cout << "Temperatura en grados Fahrenheit: " << temperatura << " °F" << std::endl;
            std::cout << "Temperatura en grados Celsius: " << (temperatura - 32) * 5/9 << " °C" << std::endl;
            std::cout << "Temperatura en Kelvin: " << (temperatura - 32) * 5/9 + 273.15 << " K" << std::endl;
            break;

        case 'K':
        case 'k':
            std::cout << "Temperatura en Kelvin: " << temperatura << " K" << std::endl;
            std::cout << "Temperatura en grados Celsius: " << temperatura - 273.15 << " °C" << std::endl;
            std::cout << "Temperatura en grados Fahrenheit: " << (temperatura - 273.15) * 9/5 + 32 << " °F" << std::endl;
            break;

        default:
            std::cout << "Escala no válida. Por favor, ingrese 'C', 'F' o 'K'." << std::endl;
            break;
    }

    return 0;
}
