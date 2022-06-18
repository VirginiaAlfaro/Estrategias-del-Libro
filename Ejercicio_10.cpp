//Cree un programa que solicite 20 salarios y devuelva como resultado la suma de la deducción
//de la cooperativa (si el salario es menor o igual 5,000 deducir 500; de lo contario deducir
//1,000).
#include <iostream>
using namespace std;
int main(){
    int salario, suma=0;
    for(int i=0; i<20; i++){
        cout<<"Ingrese el salario: ";
        cin>>salario;
        if(salario<=5000){
            suma+=500;
        }
        else{
            suma+=1000;
        }
    }
    cout<<"La suma de la deduccion de la cooperativa es: "<<suma<<endl;
    return 0;
}

