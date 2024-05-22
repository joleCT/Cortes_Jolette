#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int numero;
    int mayor, menor;
    int suma = 0;

    cout<<"Ingrese 10 números:\n";

    while (i < 10) {
        cout<<"Numero "<< i + 1<<":";
        cin>>numero;

        if (i == 0) {
            mayor = numero;
            menor = numero;
        } else {
            if (numero > mayor)
                mayor = numero;
            if (numero < menor)
                menor = numero;
        }

        
        suma += numero;

        i++;
    }

    
    cout<<"El número mayor ingresado es: "<< mayor<<"\n";
    cout<<"El número menor ingresado es: "<< menor<<"\n";
    cout<<"La suma total de los números es: "<< suma;

    return 0;
}
