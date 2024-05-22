#include <iostream>
using namespace std;
int main ()
{

    int numeros[10],suma=0;
    int i,menor,mayor;
    cout<<"escribe 10 numeros enteros:\n ";
    for(i=0;i<10;i++) {
       cout<<"numero  "<<i+1<<":";
       cin>>numeros[i];
       suma+=numeros[i];
    }
    menor=numeros[0];

    for(i=0;i<10;i++) {
       if(numeros[i]<menor) {
           menor=numeros[i];
       }else{
           if(numeros[i]>mayor) {
           mayor=numeros[i];
           
       
       }
    }
    }
    
    cout<<"El numero menor ingresadoo es :  "<<menor <<"\n";
     cout<<"El numero mayor ingresadoo es :  "<<mayor<<"\n";
     cout<<"la suma de los numeros es :  "<<suma<<"\n";
    return 0;
}
