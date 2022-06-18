//Cree un programa que solicite como datos de entrada dos números (a y b) e imprima en
//una columna todos los números pares y en la otra los impares de los números entre a y b.
//También debe mostrar la suma de los números impares y de los pares; de igual forma debe
//devolver la suma, división y resta del total de los números pares e impares. Es necesario
//que el programa muestre el mensaje "<b> no puede ser menor o igual a «a»" cuando b sea
//menor o igual a.
#include <iostream>
using namespace std;
int main()
{
    int a, b, par, impar, sumaPar, sumaImpar, resta, div;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    if (b <= a)
    {
        cout << "<b> no puede ser menor o igual a " << a << "</b>" << endl;
    }
    else
    {
        for (int i = a; i <= b; i++)
        {
            if (i % 2 == 0)
            {
                par++;
                sumaPar = sumaPar + i;
            }
            else
            {
                impar++;
                sumaImpar = sumaImpar + i;
            }
        }
        resta = sumaPar - sumaImpar;
        div = sumaPar / sumaImpar;
        cout << "Los numeros pares son: " << par << endl;
        cout << "Los numeros impares son: " << impar << endl;
        cout << "La suma de los numeros pares es: " << sumaPar << endl;
        cout << "La suma de los numeros impares es: " << sumaImpar << endl;
        cout << "La resta de los numeros pares es: " << resta << endl;
        cout << "La division de los numeros pares es: " << div << endl;
    }
    return 0;
}
