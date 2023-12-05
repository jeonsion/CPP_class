#include <iostream>
using namespace std;

#include "Circle.h"

Circle::Circle()    {
    radius = 1;
    cout << "반지름 " << radius;
    cout << " 원 생성 " << endl;

}

Circle::Circle(int r)    {
    radius = r;
    cout << "반지름 " << radius;
    cout << " 원 생성 " << endl;
}

double Circle::getArea()    {
    return radius * radius * 3.14;
}