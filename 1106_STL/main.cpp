#include <iostream>
using namespace std;

template <typename T>
void myswap(T &a, T &b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main()  {
    int a = 4, b= 5;
    myswap(a, b);
    cout << a << ", " << b << endl;

    double c = 0.3, d = 12.5;
    myswap(c, d);
    cout << c << ", " << d << endl;
}