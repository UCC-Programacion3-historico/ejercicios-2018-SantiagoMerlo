#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    Calculadora<int> calc;
    Calculadora<double> calcDouble;
    cout << calc.sumar(2,2)<< endl;
    cout << calc.restar(2,3) << endl;
    cout << calc.dividir(15,3) << endl;
    cout << calc.multiplicar(3,8) << endl;
    cout << calcDouble.sumar(0.258963,2.528)<< endl;
    cout << calcDouble.restar(2.5,3.89665874) << endl;
    try{
        cout << calcDouble.dividir(15,0) << endl;
    }catch(int e){
        cout << "error " << e <<endl;
    }
    cout << calcDouble.multiplicar(5.36,8.98) << endl;


    return 0;
}