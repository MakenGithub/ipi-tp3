#include <iostream>
#include <string>

using namespace std;

int main(){

    int contador = 0, num1, aux = 0, valorMax;

    cout<<"Cantidad de números a comparar: ";
    cin>>contador;

    for (int i = 0; i < contador; i++)
    {
        do
        {
            cout<<"Ingrese un valor positivo: ";
            cin>>num1;

        } while (num1 < 0);

        if (num1 >= aux)
        {
            valorMax = num1;
            // aux = valorMax;

        } else {
            aux = valorMax;
        }
        
    }
    
        cout<<valorMax<<endl;

        system("pause");    

    return 0;
}