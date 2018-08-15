#include "sumatoria.h"
#include <iostream>

int sumatoria(int *arr, unsigned int size) {

    if (size == 1)
        return *arr;

    return *arr + sumatoria ( arr+1 ,size - 1);

}