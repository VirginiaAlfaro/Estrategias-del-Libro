//El dueño de Ediciones Fares entrevista a cinco dientes de su negocio y les pide qu
//califiquen de 1 a 10 los siguientes aspectos; (1 es pésimo y 10 es excelente o inmejorable).
//a.    Atencion de parte de los empleados.
//b.    Calidad de los libros.
//c.    Justificacion del precio(¿El precio que pago le parece justo?).

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"El dueño de Ediciones Fares entrevista a cinco dientes de su negocio y les pide qu"<<endl;
    cout<<"califiquen de 1 a 10 los siguientes aspectos; (1 es pésimo y 10 es excelente o inmejorable)."<<endl;
    cout<<"a.    Atencion de parte de los empleados"<<endl;
    cout<<"b.    Calidad de los libros"<<endl;
    cout<<"c.    Justificacion del precio ¿El precio que pago le parece justo?"<<endl;
      
    cout<<"a. Atencion de parte de los empleados: ";
    cin>>a;
    cout<<"b. Calidad de los libros: ";
    cin>>b;
    cout<<"c. Justificacion del precio¿El precio que pago le parece justo?: ";
    cin>>c;
    cout<<"a. "<<a<<endl;
    cout<<"b. "<<b<<endl;
    cout<<"c. "<<c<<endl;
    return 0;
}
