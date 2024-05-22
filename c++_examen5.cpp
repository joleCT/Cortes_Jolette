 #include <iostream>
#include <string.h>
#include <stdbool.h> 
using namespace std;

bool validar_credenciales(char nombre[], char nl[], char gg[]) {
    if(strcmp(nombre, "JOLETTE") == 0 && strcmp(nl,"5") == 0 && strcmp(gg,"2BMPG") == 0) {
        return true; 
    } else {
        return false; 
    }
}

int main() {
    char nombre[20];
    char nl[20];
    char gg[20];
    int intentos = 3;

    while(intentos > 0) {
        cout << " introduzca su nombre con mayusculas: ";
        cin >> nombre;
        cout << " introduzca su numero de lista: ";
        cin >> nl;
        cout << " introduzca su grado y grupo en mayusculas: ";
        cin >> gg;
        
        if(validar_credenciales(nombre, nl, gg)) {
            cout<<" Bienvenido al sistema\n";
            break;
        } else {
            cout<<" Nombre, número de lista o grupo incorrectos.\n";
            cout<<" Intentos restantes: "<< intentos - 1<<"\n";
            intentos--;
        }
    }

    if(intentos == 0) {
        cout<<"Se ha superado el número de intentos permitidos\n";
    }
    
    float total = 0, precio;
    int cantidad;
    
    cout<<"Calcula el importe de una factura:\n";
    do {
        cout<<"Introduce la cantidad de unidades vendidas (0 para terminar): ";
        cin>>cantidad;
        
        if(cantidad == 0) {
            break;
        }
        
        cout<<"Introduce el precio unitario: ";
        cin>>precio;
        
        if(cantidad < 0 || precio < 0) {
            cout<<"Error, la cantidad y el precio deben ser números positivos\n";
            continue;
        }
        total += cantidad * precio;
    } while(cantidad != 0);
    
    cout<<"El importe total de la factura es: \n"<< total;
    return 0;
}
