#include <iostream>
#include "CircList.h"
using namespace std;

int main() {

        cout << "Ejercicio 02/05\n" << endl;
        CircList<int> *Circular= new CircList<int>();

        for(int i = 0; i < 10; i++)
            Circular->insertarUltimo(i);
        cout<<Circular;
        return 0;

}