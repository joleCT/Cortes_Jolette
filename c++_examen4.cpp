#include <iostream>
#include <string.h>
using namespace std;
//VERSION 4 examen practico 13-05-2024
//DEBERA UTILIZAR DOS ESTRUCTURAS REPETITIVAS DIFERENTES
int main()
{
char nombre[20];
char nl[20];
char gg[20];
int intentos=3;

while(intentos>0){
       cout << "introduzca su nombre con mayusculas: ";
        cin >> nombre;
        cout << "introduzca su numero de lista: ";
        cin >> nl;
        cout << "introduzca su grado y grupo en mayusculas: ";
        cin >> gg;
    
    if(strcmp(nombre, "JOLETTE") == 0 &&strcmp(nl,"5") == 0 &&strcmp(gg,"2BMPG") ==0) {
        cout << "Bienvenido al sistema\n";
        break;
    } else {
        cout << "nombre, numero de lista o grupo incorrectos. ";
         cout << "intentos restantes: " << intentos - 1 << "\n";
            intentos--;
    }
}
if(intentos==0){
cout<<"Se ha superado el numero de intentos permitidos\n";
   
}
        
    
    
    float total=0,precio;
    int cantidad;
    
    cout<<"calcula el importe de una factura: \n";
    do {
        cout<<"Introduce la cantidad de unidades vendidas (0 para terminat)\n ";
        cin>>cantidad;
        
        if(cantidad ==0) {
            break;
        }
        
        cout<<"Introduce el precio unitario: \n";
        cin>>precio;
        
        if(cantidad<0 , precio<0) {
            cout<<"Error, la cantidad y el precio deben ser numeros positivod\n ";
            continue;
        }
        total+=cantidad*precio;
       } while(cantidad !=0);
    
    cout<<"El importe total de la factura es: "<< total;
    return 0;
}
    
