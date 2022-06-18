 //cree el factorial para cualquier numero que el usuario introduzca entre 1 y 20.
#include <iostream>
using namespace std;
int main(){
    int num, F;
    cout << "Introduce un numero entre 1 y 20: ";
    cin >> num;
    F = 1;
    for (int i = 1; i <= num; i++){
        F = F * i;
    }
    cout << "El factorial de " << num << " es " << F << endl;
    return 0;
}
