#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB) {

    int Largo1 = lisA.getTamanio();
    int Largo2 = lisB.getTamanio();
    Lista <T> *nueva = new Lista <T>();

    for (int i=0; i<Largo1 ; i++){
        nueva->insertarUltimo(lisA.getDato(i));
    }
    for (int i=0; i<Largo2 ; i++){
        nueva->insertarUltimo(lisB.getDato(i));
    }

    return nueva;
}

#endif //UNION_H
