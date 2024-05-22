#include <iostream>
using namespace std;
int main ()
{
    char caracter;
    cout<<"Ingrese un caracter:\n ";
    cin>>caracter;
    
    if(caracter=='a'|| caracter=='e'|| caracter=='i'|| caracter=='o'|| caracter=='u') {
        cout<<caracter <<" es una vocal.\n";
} else {
cout<<caracter <<" no es una vocal.\n ";
}

      return 0;
}
