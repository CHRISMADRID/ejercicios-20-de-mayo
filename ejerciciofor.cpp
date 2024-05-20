#include <iostream>
using namespace std ;
int main ()
{
    int numero;
    cout << "ingrese un numero: " ;
    cin>>numero;
    if(numero<0){
        cout << "El factorial de un numero negativo no existe.\n";
    }
    else {
        int factorial=1;
        for (int i= numero ; i>=1;i--)
        factorial *=i;
        cout << "el factorial de " << numero << "es " <<factorial ;
    }
    return 0;
}