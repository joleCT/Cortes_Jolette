#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int opcion;
    float base1, base2, altura, lado, area;

    cout<<"CALCULO DE AREAS\n";
    
    
     cout<<"1- Calcular el area de un triangulo\n";
     cout<<"2- Calcular el area de un trapecio\n";
     cout<<"3- Calcular el area de un rectangulo\n";
     cout<<"Seleccione una opcion: ";
    
    cin>>opcion;

    switch(opcion) {
        
        
        case 1:
        
            cout<<"Ingrese la base del triangulo: ";
            cin>>base1;
            cout<<"Ingrese la altura del triangulo: ";
            cin>>altura;
            area = 0.5 * base1 * altura;
            cout<<"El área del triangulo es: \n"<< area;
            
            break;
            
        case 2:
        
             cout<<"Ingrese la base mayor del trapecio: ";
            cin>>base1;
             cout<<"Ingrese la base menor del trapecio: ";
            cin>>base2;
             cout<<"Ingrese la altura del trapecio: ";
            cin>>altura;
            area = 0.5 * (base1 + base2) * altura;
             cout<<"El area del trapecio es: \n"<< area;
            
            break;
            
        case 3:
        
        
             cout<<"Ingrese la base del rectangulo: ";
            cin>>base1;
             cout<<"Ingrese la altura del rectangulo: ";
            cin>>altura;
            area = base1 * altura;
             cout<<"El area del rectangulo es: \n"<< area;
            
            
            break;
            
        default:
             cout<<"Opcion no valida.\n";
    }

    return 0;
}
