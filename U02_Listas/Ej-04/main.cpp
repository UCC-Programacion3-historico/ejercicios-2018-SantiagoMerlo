#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"

using namespace std;

int main() {
   cout << "Ejercicio 01/04\n" << std::endl;

   Lista <int> List1;
   Lista <int> List2;

   for(int i=0;i<10;i++){
        List1.insertarUltimo(i);
   }
    for(int i=0;i<5;i++){
        List2.insertarUltimo(i+10);
    }

    cout<<"Primera Lista : "<< List1 <<endl;
    cout<<"Segunda Lista : "<< List2 <<endl;

    cout<<"Lista final"<<endl;
    Lista <int> *final = unir(List1,List2);
    for (int i=0; i<final->getTamanio();i++)
    {
        cout<<final->getDato(i)<<" -> ";
    }

    return 0;
}