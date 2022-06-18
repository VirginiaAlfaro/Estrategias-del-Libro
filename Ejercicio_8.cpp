//Escribe un programa que muestre si un número natural positivo es perfecto o no.
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Introduce un numero: ";
    cin>>num;
    int suma=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            suma+=i;
        }
    }
    if(suma==num){
        cout<<"El numero "<<num<<" es perfecto";
    }
    else{
        cout<<"El numero "<<num<<" no es perfecto";
    }
    return 0;
}
