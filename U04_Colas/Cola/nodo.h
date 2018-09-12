//set-> para setear
//get-> para mostar
#ifndef PROGRAMACION3_nodo_H
#define PROGRAMACION3_nodo_H

template <class T>

class nodo {

private:

    T dato;

    nodo *next;


public:
    nodo(T d) {
        dato = d;
        next = nullptr;
    }
    nodo(T d, nodo *n) {
        dato = d;
        next = n;
    }

    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        nodo::dato = dato;
    }

    nodo *getNext() const {
        return next;
    }

    void setNext(nodo *next) {
        nodo::next = next;
    }

};



#endif //PROGRAMACION3_nodo_H
