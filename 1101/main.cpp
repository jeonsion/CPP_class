#include <iostream>
using namespace std;

#include "Shape.h"

int main()  {
    Shape s;
    s.paint();
    Shape s2;
    s2.add(&s);
    s2.getNext();
}


