//Cree un programa que solicite un número entero e imprima en pantalla el mismo número
//de asteriscos.
#include <iostream>
using namespace std;
int main ()
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
