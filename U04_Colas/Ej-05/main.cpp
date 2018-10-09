
#include <iostream>
#include "C:\Users\usuario\Desktop\facultad\Programacion 3\ejercicios-2018-SantiagoMerlo\U02_Listas\Lista\nodo.h"
#include "C:\Users\usuario\Desktop\facultad\Programacion 3\ejercicios-2018-SantiagoMerlo\U02_Listas\Lista\Lista.h"
#include "C:\Users\usuario\Desktop\facultad\Programacion 3\ejercicios-2018-SantiagoMerlo\U04_Colas\Cola\Cola.h"
#include "C:\Users\usuario\Desktop\facultad\Programacion 3\ejercicios-2018-SantiagoMerlo\U03_Pilas\Pila\Pila.h"

using namespace std;


int main()
{
    Lista <int> lista;
    lista.insertarUltimo(3);
    lista.insertarUltimo(4);
    lista.insertarUltimo(7);
    lista.insertarUltimo(5);
    cout<<lista;
    lista.moverPrimero(3);
    cout<<lista;

    system("pause");
    return 0;
}

/**
    ////Ejercicio 1-
    cout<<"ejercicio 1"<<endl;
    Lista <int> a;
    Pila <int> b;
    int n,d;
    cout<<"ingrese cantidad de datos -> Lista "<<endl;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cout<<"ingrese d"<<endl;
        cin>>d;
        a.insertarUltimo(d);
    }

    for (int i=0; i<n; i++) {
        b.push(2);
        b.push(5);
        if (a.getDato(i) < b.pop())
            if (a.getDato(i) > b.pop()) {
                a.remover(i);
                n = n - 1;
                i = i - 1;
            }
    }
        for (int (i) = 0; (i) < n ; ++(i)) {
            cout<<"Dato: "<<a.getDato(i)<<endl;
        }


       //////ejercicio 2;

    int m;
    cout<<"ingrese m"<<endl;
    cin>>m;
    impares(m);

     void impares(int m){
    if (m==1)
    {
        cout<<"1"<<endl;
    }
    else{
        if (m%2==0)
            impares (m-1);
        else
        {
            cout<<m<<endl;
            impares(m-2);
        }
    }
};
        ///ejercicio numero 4-
cout<<"Repaso parcial"<<endl;

    Lista <int> a;
    int n,d;
    cout<<"ingrese cantidad de datos -> Lista "<<endl;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cout<<"ingrese d"<<endl;
        cin>>d;
        a.insertarUltimo(d);
    }
    cout<<"ingrese valor del datos -> Lista "<<endl;
    cin>>d;
    int c=0;
    for (int i=0; i<n; i++)
    {
        if (d==a.getDato(i))
        {
            a.remover(i);
            a.insertarPrimero(d);
            c=1;
        }
    }
    if (c==0)
        cout<<"el valor no existe"<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<a.getDato(i)<<endl;
    }

    //ejercicio 5
    Pila <char> a;
    int n=0;
    char dato;
    do{
    cout<<"ingrese palabra"<<endl;
    cin>>dato;
    a.push(dato);
    cout<<"quiere ingresar mas palabras? si=1"<<endl;
    cin>>n;
    }while (n==1);
    do
    {
        cout<<a.pop();
        cout<<" ";
    }while (a.esVacia()==false);
**/

