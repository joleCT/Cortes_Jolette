#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char nombre[20];
    char nl[20];
    char gg[20];
    int intentos = 3;

    while (intentos > 0) {
        cout << "Introduzca su nombre con mayusculas: ";
        cin >> nombre;
        cout << "Introduzca su numero de lista: ";
        cin >> nl;
        cout << "Introduzca su grado y grupo en mayusculas: ";
        cin >> gg;

        if (strcmp(nombre, "JOLETTE") == 0 && strcmp(nl, "5") == 0 && strcmp(gg, "2BMPG") == 0) {
            cout << "Bienvenido al sistema!" << endl;
            break;
        } else {
            cout << "Nombre, numero de lista o grupo incorrectos. ";
            cout << "Intentos restantes: " << (intentos - 1) << endl << endl;
            intentos--;
        }
    }

    if (intentos == 0) {
        cout << "Se ha superado el numero de intentos permitidos." << endl;
    }

    return 0;
}

