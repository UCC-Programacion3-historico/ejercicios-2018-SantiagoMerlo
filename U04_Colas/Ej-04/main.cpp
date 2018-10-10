#include <iostream>
#include "../Cola/Cola.h"
using namespace std;
int main() {
    std::cout << "Ejercicio 04/04\n" << std::endl;
    
    Cola <int> cola;
    
    cola.encolar(4);
    cola.encolar(5);
    cola.desencolar();
    
    system("pause");
    return 0;
}