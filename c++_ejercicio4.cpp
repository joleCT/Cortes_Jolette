#include <iostream>
using namespace std;
int main ()
{
    char caracter;

    cout<<"ingrese un caracter: ";
    cin>>caracter;

switch(caracter) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    cout<<" es una vocal.\n "<< caracter;
    break;
    default:
    cout<<caracter  << " no es una vocal.\n ";
}
return 0;
}
    
