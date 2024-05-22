#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Dame un numero de la baraja española ";
    cin>>n;
    
    if(n==1) {
        cout<<"As";
    } else {
        if(n==10) {
        cout<<"Sota";
    } else {
        if(n==11) {
        cout<<"Caballo";
    } else {
         if(n==12) {
        cout<<"Rey";
    } else {
         if(n>=2 && n<=9) {
        cout<<"No es figura, ni tampoco As.";
    } else {
        cout<<"Este no es un numero de la baraja española.";
    
    }
    }
    }
    }
    }
}
