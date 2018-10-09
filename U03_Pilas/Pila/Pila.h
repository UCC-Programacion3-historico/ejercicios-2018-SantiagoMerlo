#ifndef PILA_H
#define PILA_H
#include "C:\Users\usuario\Desktop\facultad\Programacion 3\ejercicios-2018-SantiagoMerlo\U02_Listas\Lista\Lista.h"
#include "../../U02_Listas/Lista/nodo.h"

/**
 * Clase que implementa una Pila generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Pila {

private:

    nodo<T> *tope;

public:
    Pila();

    ~Pila();

    void push(T dato);

    T pop();//sacar

    bool esVacia();//pop hasta el final

    T mostrar();

};

template<class T> //Constructor de la clase Pila
Pila<T>::Pila() {
    tope= nullptr;
}

template<class T>
Pila<T>::~Pila() { //Destructor de la clase Lista, se encarga de liberar la memoria de todos los nodos
    nodo <T> *aux = tope;
    while (aux != nullptr){
        tope = aux->getNext();
        delete aux;
        aux = tope;
    }
}

template<class T>
void Pila<T>::push(T dato) { //Inserta un dato en la pila
    auto *nuevo = new nodo<T>(); //se creo un nodo
    nuevo ->setNext(tope); //apunta a nuevo nodo
    nuevo -> setDato(dato);
    tope= nuevo;
}

template<class T>
T Pila<T>::pop() { //Obtener el dato de la pila
    if (tope == nullptr) //esta vacia
        throw 1;
    T dato =tope->getDato(); // mostrar dato
    nodo<T> *aux = tope; //que tope se llame auxiliar tambien
    tope= tope-> getNext();//el nuevo tope se cambia
    delete aux; //eliminamos auxiliar
    return dato;
}

template<class T>
T Pila<T>::mostrar() { //Obtener el dato de la pila
    if (tope == nullptr) //esta vacia
        throw 1;
    T dato =tope->getDato(); // mostrar dato
    return dato;
}

template<class T>
bool Pila<T>::esVacia() { //Responde si la pila se encuentra Vacía
    return tope == nullptr;

}

#endif //PILA_H