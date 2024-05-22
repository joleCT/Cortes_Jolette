#include <iostream>
using namespace std;
int main ()
{
    int h,ph,ssem,pex;
    cout<<"Ingrese las horas que trabaja ";
    cin>>h;
    cout<<"Ingrese el precio cobrado por horas ";
    cin>>ph;
    
    if(h<=40 ) {
    ssem=h*ph;
    cout<<"el pago semamal es: "<< ssem;
    }else
    if(h>40 && h<50){
        pex=(h-40)*(ph*.5);
        ssem=40*ph+pex;
        cout<<"el pago semamal es: "<<ssem;
        }else {
       pex=(h-40)*(ph*2);
        ssem=40*ph+pex;
        
        cout<<"el salario semanal es: "<<ssem;
        }
     return 0;
}
