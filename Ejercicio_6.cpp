//Encuentre el resultado de a * b, pero realizando el proceso con sumas.
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    int r = 0;
    for (int i = 0; i < b; i++){
        r += a;
    }
    cout << "El resultado es: " << r << endl;
    return 0;
}

