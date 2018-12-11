#include <iostream>
#include <string>
#include "../Pila/Pila.h"

using namespace std;

int main() {
    cout << "Ejercicio 03/05\n" << endl;
    string infija = "(6+2)*5-8/4";
    Pila<char> pila;
    string posfija;

    //los numeros los vamos guardando en una pila,
    //tenemos que analizar los parantesis no existen sirven de informacion
    //resultado final 62+5*84/-   --> en una pila se se suma, luego se multiplica por 5,
    // 8 divide a 4 y luego se resta

    return 0;
}