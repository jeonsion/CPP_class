#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle() {this->radius = radius;}
    Circle(int radius = 1) {this -> radius = radius;}
    int getRaidus() {return radius;}

};

template <class T>
void myswap(T &a, T &b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main()  {
    int a = 4, b = 5;
    myswap(a, b);
    cout << a << " " << b << endl;

    double c = 1.2, d = 3.4;
    myswap(c, d);
    cout << c << " " << d << endl;
    
}