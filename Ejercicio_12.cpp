//Cree un programa que devuelva el c�lculo del inter�s simple.
#include <iostream>
using namespace std;
int main(){
    float capital, interes, tiempo, total;
    cout << "Ingrese el capital: ";
    cin >> capital;
    cout << "Ingrese el interes: ";
    cin >> interes;
    cout << "Ingrese el tiempo: ";
    cin >> tiempo;
    total = capital * interes * tiempo;
    cout << "El total es: " << total << endl;
    return 0;
}
