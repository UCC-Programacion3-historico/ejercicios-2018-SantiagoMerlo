/*
##    Ejercicio N°4.
Escriba un programa que ingresada una función matemática, informe si la
cantidad de (, [, { que abren están balanceados con los que cierran.
 */
#include <iostream>
#include "../Pila/Pila.h"
using namespace std;

int main() {
    cout << "Ejercicio 03/04\n" << endl;
    char dato;
    Pila <char> cadena;
    Pila <char> cadena_aux;
    cout<<"ingresar datos (con 0 finaliza)"<<endl;
    do
    {
        cin>>dato;
        cadena.push(dato);
        //ingresar en la segunda cadena
        if (cadena.mostrar()=='('||cadena.mostrar()=='['||cadena.mostrar()=='{')
            cadena_aux.push(cadena.mostrar());

        //eliminar el caracter
        else if (cadena.mostrar()==')')
        {
            if(cadena_aux.mostrar()=='(')
                cadena_aux.pop();
            else
            {
                cout<<"esta mal"<<endl;
                return 0;
            }
        }
        else if(cadena.mostrar()==']')
        {
            if(cadena_aux.mostrar()=='[')
                cadena_aux.pop();
            else
            {
                cout<<"esta mal"<<endl;
                return 0;
            }

        }
        else if(cadena.mostrar()=='}')
        {
            if(cadena_aux.mostrar()=='{')
                cadena_aux.pop();
            else
            {
                cout<<"esta mal"<<endl;
                return 0;
            }
        }

    } while (cadena.mostrar()!='0');
    return 0;
}