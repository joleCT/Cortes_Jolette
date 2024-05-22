#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"sucesion de numeros de 5 en 5 \n";
    
    cout <<" \n";
   cout<<"ingrese la cantidad de numeros que quierre para su serie\n";
   cin>> n;
   
   for(i=1;i<=n;i++) {
       cout<< i*5 <<",";
       
   }
   
    return 0;
}
