#include "../Lista/Lista.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H


template <class T>
void fnInvierte (Lista<T> *lis);


template <class T>
void fnInvierte (Lista<T> *lis){

    int n = lis->getTamanio() - 1; //supongamosque pusimos 4 valores, el n =4; sin embargo el i empieza en 0 por lo que se tiene que disminuir

    for(int i = 0; i < lis->getTamanio()/2 ; i++) { //de esta forma vamos inviertiendo los extremos
        int aux = lis->getDato(i);
        lis->reemplazar(i, lis->getDato(n - i));
        lis->reemplazar(n - i, aux);
    }

}


#endif //FNINVIERTE_H