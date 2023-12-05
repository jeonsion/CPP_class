#include <iostream>
using namespace std;

class Base{
public:
    virtual void f()    {cout << "Base::f() called " << endl;}
    
};


class Derived : public Base{
public:
    virtual void f() {cout << "Derived::f() called" << endl;}
};


int main() {
    Derived d, *pDer;
    pDer = &d;
    pDer->f();  //d->f()가 안되는 이유는 d가 포인터가 아니라서. 포인터가 아니면 ->를 쓸 수 없다.


     Base* pBase;
     pBase = pDer;
     pBase->f();

}

