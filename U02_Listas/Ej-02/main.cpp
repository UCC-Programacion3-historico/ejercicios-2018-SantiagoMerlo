#include <iostream>
#include "../Lista/Lista.h"

using namespace std;

int main() {

    Lista<int> lista;
    int n, v, escoja = 0, counter = 0;

    cout << "Ejercicio 01/02\n" << endl;
    cout << "Cuantos elementos? ";
    cin >> n;

    do {
        cout << counter << ": ";
        cin >> v;
        lista.insertarUltimo(v);
        counter++;
    }while(counter != n);

    cout << "Lista: " << lista << endl;

    while(escoja >= 0 && escoja <= 2) {
        cout << "Donde lo quiere insertar (Agregar al principo (0), al medio (1), o en el final (2) , o salir (otro valor))? ";
        cin >> escoja;
        if(escoja >= 0 && escoja <= 2) {
            cout << "Cual valor para agregar? ";
            cin >> v;
            if(escoja == 0)
                lista.insertarPrimero(v);
            if(escoja == 1)
                lista.insertar((lista.getTamanio() / 2), v);
            if(escoja == 2)
                lista.insertarUltimo(v);
            cout << "Lista: "<< lista << endl;
        }
    }
    return 0;
}