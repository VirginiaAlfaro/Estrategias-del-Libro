//Escriba un programa que pida las calificaciones de los cinco clientes para cada uno de
//estos aspectos y devuelva el promedio obtenido en cada uno.
#include <iostream>
using namespace std;
int main(){
    int calificacion1, calificacion2, calificacion3, calificacion4, calificacion5;
    int suma=0;
    int promedio;
    cout<<"Ingrese la calificacion del cliente 1: ";
    cin>>calificacion1;
    cout<<"Ingrese la calificacion del cliente 2: ";
    cin>>calificacion2;
    cout<<"Ingrese la calificacion del cliente 3: ";
    cin>>calificacion3;
    cout<<"Ingrese la calificacion del cliente 4: ";
    cin>>calificacion4;
    cout<<"Ingrese la calificacion del cliente 5: ";
    cin>>calificacion5;
    suma=calificacion1+calificacion2+calificacion3+calificacion4+calificacion5;
    promedio=suma/5;
    cout<<"El promedio de calificaciones es: "<<promedio<<endl;
    return 0;
}
