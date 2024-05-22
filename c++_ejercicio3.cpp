#include <iostream>

using namespace std;
int main ()
{
    int n1,n2,n3;
    cout<<"Ingrese 3 números enteros ";
    cin>>n1;
    cin>>n2;
    cin>>n3;
    
    int temp;

    if(n1<n2) {
        temp=n1;
        n1=n2;
        n2=temp;
    }
    if(n2<n3) {
        temp=n2;
        n2=n3;
        n3=temp;
    }
   if(n1<n2) {
        temp=n1;
        n1=n2;
        n2=temp;
   }
   cout<<"los numeros ordenados de mayor a menor son : "<<n1 <<"," << n2 <<"," << n3;

      return 0;
}
