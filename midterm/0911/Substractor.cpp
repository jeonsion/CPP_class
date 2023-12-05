#include "Substractor.h"

Substractor::Substractor(int a, int b){
    op1 = a, op2 = b;
}

int Substractor::process()    {
    return op1 - op2;
}