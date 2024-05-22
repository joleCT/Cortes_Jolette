#include <iostream>
using namespace std;
int main ()
{

    int numeros[5];
    int i,menor;
    cout <<"escribe 5 numeros enteros:\n ";
    for(i=0;i<5;i++) {
       cout << "numero "<<i+1<<":";
       cin >> numeros[i];
    }
    menor=numeros[0];

    for(i=0;i<5;i++) {
       if(numeros[i]<menor) {
           menor=numeros[i];
       }
    }
    cout << "El numero menor ingresadoo es : "<<menor;
    return 0;
}
