
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
     int p,n,resultado;
    cout<<"ingrea el numero: ";
    cin>>n;
    cout<<"ingrese a que potencia quiere elevarlo: ";
    cin>>p;
    
    resultado=pow(n,p);
    
    
    cout<<n <<" elevado a la potencia " <<p <<" es "<<resultado;

    return 0;
}
