#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{   
    
    int A = 0;
    int B = 1 + rand() % 3;
    cout << "Ingrese piedra papel o tijera : ";
    cin >> A;
    cout << "La maquina elijio: "<<B<<endl;
    if (A == B)
    {
        cout << "El resultado es empate";
    }
    else if ((A==1 && B==3) || (A==2 && B==1) || (A==3 && B== 2)){
        cout << "Ganaste";

    }else{
        cout<<"Gano la maquina";
    }
    


}