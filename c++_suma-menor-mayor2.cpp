#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int numero;
    int mayor, menor;
    int suma = 0;

    cout<<"Ingrese 10 n�meros:\n";

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

    
    cout<<"El n�mero mayor ingresado es: "<< mayor<<"\n";
    cout<<"El n�mero menor ingresado es: "<< menor<<"\n";
    cout<<"La suma total de los n�meros es: "<< suma;

    return 0;
}
