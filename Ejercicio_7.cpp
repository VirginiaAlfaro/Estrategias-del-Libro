//Encuentre el MCD de dos números.
#include <iostream>
using namespace std;
int main(){
    int a,b,v,d;
    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    v=a;
    d=b;
    while(v!=d){
        if(v>d){
            v=v-d;
        }
        else{
            d=d-v;
        }
    }
    cout<<"El MCD de "<<a<<" y "<<b<<" es: "<<v<<endl;
    return 0;
}
