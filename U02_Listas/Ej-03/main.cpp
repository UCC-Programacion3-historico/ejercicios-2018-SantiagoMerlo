#include <iostream>
#include "../Lista/Lista.h"

using namespace std;

int main() {
    cout << "Ejercicio 01/03\n" << endl;
    int a;
    Lista <int> numeros;
    cout<<"Ingrese conco numeros"<<endl;
    for (int i=0;i<5;i++){
        cin>>a;
        numeros.insertarUltimo(a);
    }

    cout<<"Incerte el n° de la lista que quiere borrar"<<endl;
    int c;
    cin>>c;
    if(numeros.getTamanio()>c)
        numeros.remover(c);
    cout<<numeros;
    return 0;
}