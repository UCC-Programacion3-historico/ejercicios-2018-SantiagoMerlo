/*
##    Ejercicio N°3.
Agregar la función peek a la clase pila que permita ver el valor del tope de pila sin sacarlo.
 */
#include <iostream>
#include "../Pila/Pila.h"
using namespace std;

int main() {
    cout << "Ejercicio 03/03\n" << endl;
    Pila <int> ver;
    int dato;
    cout<<"ingresar datos"<<endl;
    for (int i=0;i<5;i++)
    {
        cin>>dato;
        ver.push(dato);
    }
    cout<<"mostrar ultimo dato"<<endl;
    int aux = ver.pop();
    cout<<aux;
    ver.push(aux);
    //ingresar_valores();

    return 0;
}
/*
void ingresar_valores(){
    do
    {
        int n;
        int dato;
        int c==0;
        cout<<"cuantos valores quiere ingresar?"<<endl;
        cin>>n;
        for (int i=0;i<n;i++)
        {
            cin>>dato;
            ver.push(dato);
        }

        char imput;
        cout<<"quiere dejar de ingresar mas valores?"<<endl;
        if('y'==imput||'Y'=imput||'YES'==imput||'yes'==imput||'s'==imput||'S'==imput||'SI'==imput||'si'==imput)
        c=1;
    } while (c==1);

}*/