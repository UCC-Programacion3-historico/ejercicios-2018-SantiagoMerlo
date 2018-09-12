#include <iostream>
#include "../Cola/Cola.h"
#include "ColaPrioridades.h"

using namespace std;

int main() {
    cout << "Ejercicio 04/03\n" << endl;
    ColaPrioridades <int> c;
    for (int i= 10 ; i < 20; i++)
    {
        c.encolar(i, i % 3);
    }
    while (!c.esVacia())
        cout<<c.desencolar()<<endl;
    return 0;
}