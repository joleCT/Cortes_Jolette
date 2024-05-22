#include <iostream>
#include <math.h>
using namespace std;
int main()

{
    int p,n,resultado=1,i;

    cout<<"ingrea el numero: ";
    cin>>n;
    cout<<"ingrese a que potencia quiere elevarlo: ";
    cin>>p;
    
    for(i=0;i<p;i++){
        resultado=resultado*n;
        
    }
         cout<<n << " elevado a la potencia " <<p <<" es " << resultado;



    
    return 0;
}
