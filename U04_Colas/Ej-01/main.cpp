#include <iostream>
#include "../Cola/Cola.h"
using namespace std;

int main() {
    char a;
    cout << "Ejercicio 04/01\n" << endl;
    Cola <char> primera;
    Cola <char> segunda;
    for (int i=0; i < 5 ; i++)
    {
        cin>>a;
        primera.encolar(a);
    }
    for (int i=0; i < 5 ; i++)
    {
        cin>>a;
        segunda.encolar(a);
    }
    do
    {
        if (primera.mostrar()!=segunda.mostrar())
        {
            cout<<"las columnas no son iguales"<<endl;
            return 0;
        }
        primera.desencolar();
        segunda.desencolar();
    }
    while (!primera.esVacia() || !segunda.esVacia());
    cout<<"las columnas son iguales"<<endl;


    return 0;
}