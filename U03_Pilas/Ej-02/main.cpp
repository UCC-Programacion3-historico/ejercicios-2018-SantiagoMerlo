/*
##  Ejercicio N°2.
Escriba una función que indique si dos pilas son iguales. Se entiende que dos pilas son
iguales cuando sus elementos son idénticos y aparecen en el mismo orden.
*/

#include <iostream>
#include "../Pila/Pila.h"
using namespace std;

int main() {
    cout << "Ejercicio 03/02\n" << endl;
    int n;
    int dato;
    Pila <int> pila_a;
    Pila <int> pila_b;

    cout<<"ingrese cantidad de n"<<endl;
    cin>>n;

    cout<<"Ingresar pila a"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>dato;
        pila_a.push(dato);
    }

    cout<<"Ingresar pila b"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>dato;
        pila_b.push(dato);
    }
    //ver si son iguales las pilas;
    while (pila_a.esVacia()==0||pila_b.esVacia()==0)
    {
    if (pila_a.pop()!=pila_b.pop())
        {
        cout<<"las pilas no son iguales"<<endl;
        return 0;
        }
    }
    cout<<"las pilas son iguales"<<endl;


    return 0;
}