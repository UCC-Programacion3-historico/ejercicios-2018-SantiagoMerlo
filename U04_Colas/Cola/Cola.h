#ifndef COLA_H
#define COLA_H

#include "nodo.h"

/**
 * Clase que implementa una Cola generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Cola {

private:

    nodo<T> *entrada;
    nodo<T> *salida;

public:

    Cola();
    ~Cola();
    void encolar(T dato);
    T desencolar();
    T mostrar();
    bool esVacia();
};


/**
 * Constructor de la clase Cola
 * @tparam T
 */
template<class T>
Cola<T>::Cola() {
    entrada = nullptr;
    salida = nullptr;
}

/**
 * Destructor de la clase Cola, se encarga de liberar la memoria de todos los nodos
 * utilizados en la Cola
 * @tparam T
 */
template<class T>
Cola<T>::~Cola() {}

/**
 * Inserta un dato en la Cola
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void Cola<T>::encolar(T dato) {
    auto *nuevo = new nodo<T>(dato, nullptr);
    if (entrada != nullptr)
    {
        entrada->setNext(nuevo);//entrada es el nuevo nodo;
    }
    else //en el caso de que sea el primero (nodobefore=0), el nodo va a ser entrada y salida;
        salida = nuevo;

    entrada = nuevo; //Etiqueta el nuevo nodo;
}


/**
 * Obtener el dato de la Cola
 * @tparam T
 * @return dato almacenado en el nodo
 */
template<class T>
T Cola<T>::desencolar() {//sacar cosas

    if (salida == nullptr)
        throw 1; //excepcion

    T dato = salida->getDato();
    nodo <T> *salida_anteriro = salida;
    salida = salida->getNext();

    if (salida == nullptr);
        entrada = nullptr;

    delete salida_anteriro;
    return dato;
}

/**
 * Muestra los valores de la lista
 * @tparam T
 * @return el valor de la salida
 */
template<class T>
T Cola<T>::mostrar() {//sacar cosas
    if (salida == nullptr)
        throw 1; //excepcion
        //or cout<<"no hay valores"<<endl;
    T dato = salida->getDato();
    return dato;
}
/**
 * Responde si la Cola se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool Cola<T>::esVacia() {
    return salida == nullptr;
   /*
   simplifica esta funcion;
   if (salida == nullptr)
       return true;
   else
       return false;
     */
}

#endif //LISTA_H