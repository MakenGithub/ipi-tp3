/*6)a) Implementá la función maximo(num_1, num_2) que calcule y retorne el máximo
entre num_1 y num_2, ambos positivos.
b) Luego, usá esa función para implementar un programa que solicite la lectura de 5
números que sean positivos, en caso de ingresar uno negativo volver a solicitar un
nuevo número, e informe el máximo número leído.*/

#include <iostream>
#include <string>
using namespace std;

//funcion max
int funcionMax(int a, int b){
int mayor=0, contador=0, num1=0, num2=0;
    cout<<"Ingrese cantidad a comparar: ";
    cin>>contador;
    do{
    cout<<"Por favor, ingrese un valor positivo: ";
    cin>>contador; 
        }while(contador<=1);
     do{
            cout<<"Ingrese el valor 1: ";
            cin>>num1;//2
        }while(num1<=0);

    for(int i=1; i<contador; i++){
        
        do{
            cout<<"Ingrese el valor "<<i+1<<":";
            cin>>num2;//4; 5; 2
        }while(num2<=0);
    
        if (num2>=num1){ // en la 2da vuelta-> 5 es mayor que 4?  si, entonces:
                mayor=num2;//mayor vale 4; mayor vale 5
                num1=mayor;// el numero 1 vale 4; num1 vale 5
        }else{
             num1=mayor;// tercera vuelta= el 5 va a seguir siendo mayor que 2
        }
        
    }

    return mayor;
}

//Funcion principal:
int main(){
    int num1=0, num2=0, maximo=0;

    maximo = funcionMax(num1, num2);
    cout<<maximo;



    return 0;
}