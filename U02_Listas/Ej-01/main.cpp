#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"
using namespace std;

int main() {
    cout << "Ejercicio 02/01\n" <<endl;
    Lista <int> *A=new Lista <int>;
    int n;
    cout<<"ingrese valor"<<endl;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"valores de la lista: ";
        int a;
        cin>>a;
        A->insertarUltimo(a);
    }


    fnInvierte(A);

    for (int j = 0; j < n ; ++j) {
        cout<<A->getDato(j);
    }

    system("pause");
    return 0;
}