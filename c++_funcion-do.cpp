#include <iostream>
using namespace std;
int main()
{
    int numero,suma=0,cantidadnumeros=0;
    do {
        cout<<" introduce un numero : ";
        cin>>numero;
        if(numero !=0) {
            cout<<"has inyroducido el numero  "<< numero <<"\n";
        
            suma+=numero;
            cantidadnumeros++;
        } else {
            cout<<"finalizado, se ha introducido el numero 0\n";
        }
        }while(numero !=0);
        cout<<"cantiidad de numeros introducidos: "<< cantidadnumeros<<"\n";
        cout<<"suma de los numeros introducidos: "<< suma<<"\n";
        
        return 0;
    }
