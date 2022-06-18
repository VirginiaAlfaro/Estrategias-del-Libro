//Cree un programa que devuelva el promedio de x cantidad de números, el programa debe
//finalizar cuando el usuario escriba 0.
#include <iostream>
using namespace std;
int main ()
{
    int num, promedio, contador=0;
    float suma=0;
    cout<<"Ingrese un numero: ";
    cin>>num;
    while(num!=0){
        suma=suma+num;
        contador++;
        cout<<"Ingrese un numero: ";
        cin>>num;
    }
    promedio=suma/contador;
    cout<<"El promedio es: "<<promedio;
    return 0;
}

