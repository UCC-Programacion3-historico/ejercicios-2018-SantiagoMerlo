#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

int main() {
    cout << "Ejercicio 01/05\n" << std::endl;
    Lista<int> lista;
    lista.insertarUltimo(1);
    lista.insertarUltimo(2);
    lista.insertarUltimo(1);
    lista.insertarUltimo(3);
    lista.insertarUltimo(1);
    cout << lista <<endl;
    lista.insertAfter2(1, 2, 100);
    cout << lista << endl;
    return 0;
}