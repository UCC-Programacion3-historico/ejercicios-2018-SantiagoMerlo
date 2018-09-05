/*
## Ejercicio N°1.
Escriba un programa que introduzca una palabra y utilice una pila para imprimir la misma
palabra invertida.
 */
#include <iostream>
#include "../Pila/Pila.h"
using namespace std;

int main() {
    int n;
    Pila <char> palabra;
    cout << "Ejercicio 03/01\n" << endl;
    cout << "Ingrese cantidad de caracteres" << endl;
    cout << "ingrese letras" << endl;
    cin>>n;
    char a;
    for (int i=0 ; i<n ;i++)
    {
        cin>>a;
        palabra.push(a);
    }

    while (palabra.esVacia()==0)
    {
        cout<<palabra.pop();
    }

    system("pause");
    return 0;
}