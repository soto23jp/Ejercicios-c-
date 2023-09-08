#include <iostream>

int main() {
    int n;

    // Solicitamos al usuario que ingrese el valor de n.
    std::cout << "Ingrese un valor para n: ";
    std::cin >> n;

    // Verificamos si n es mayor o igual a 1.
    if (n < 1) {
        std::cout << "Por favor, ingrese un número mayor o igual a 1." << std::endl;
        return 1; // Salimos del programa con un código de error.
    }

    // Usamos un bucle for para imprimir los números del 1 al n.
    for (int i = 1; i <= n; i++) {
        std::cout << i << " ";
    }

    // Agregamos un salto de línea al final para que la salida se vea ordenada.
    std::cout << std::endl;

    return 0;
}
