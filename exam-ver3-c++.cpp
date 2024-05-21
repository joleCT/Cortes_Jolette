#include <iostream>
#include <cstring>

// VERSION 3 examen practico 13-05-2024
int main()
{
    char nombre[20];
    char nl[20];
    char gg[20];
    int intentos = 3;

    while (intentos > 0) {
        std::cout << "introduzca su nombre con mayusculas: ";
        std::cin >> nombre;
        std::cout << "introduzca su numero de lista: ";
        std::cin >> nl;
        std::cout << "introduzca su grado y grupo en mayusculas: ";
        std::cin >> gg;

        if (strcmp(nombre, "JOLETTE") == 0 && strcmp(nl, "5") == 0 && strcmp(gg, "2BMPG") == 0) {
            std::cout << "Bienvenido al sistema?\n";
            break;
        } else {
            std::cout << "nombre, numero de lista o grupo incorrectos. ";
            std::cout << "intentos restantes: " << intentos - 1 << "\n\n";
            intentos--;
        }
    }

    if (intentos == 0) {
        std::cout << "Se ha superado el numero de intentos permitidos\n";
    }

    float total = 0, precio;
    int cantidad;

    std::cout << "calcula el importe de una factura:\n";
    while (true) {
        std::cout << "Introduce la cantidad de unidades vendidas (0 para terminar): ";
        std::cin >> cantidad;

        if (cantidad == 0) {
            break;
        }

        std::cout << "Introduce el precio unitario: ";
        std::cin >> precio;

        if (cantidad < 0 || precio < 0) {
            std::cout << "Error, la cantidad y el precio deben ser numeros positivos\n";
            continue;
        }
        total += cantidad * precio;
    }
    std::cout << "El importe total de la factura es: $" << total << "\n";
    return 0;
}
