//Cree un programa, muestre y sume todos los números primos impares entre 1 y 200.
#include <iostream>
using namespace std;
int main(){
    int suma=0;
    for(int i=1;i<=200;i++){
        if(i%2!=0){
            if(i%2){
                cout<<i<<endl;
                suma+=i;
            }
        }
    }
    cout<<"La suma de los primos impares es: "<<suma<<endl;
    return 0;
}
