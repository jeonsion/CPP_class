
#include <iostream>
using namespace    std;

class Base{
public:
virtual ~Base() {cout << "~Base()" << endl;}

};

class Derived : public Base{

public:
    virtual ~Derived(){cout << "~Derived()" << endl;}

};

int main()  {

    Derived *dp = new Derived();
    Base *bp = new Derived();

    cout << "Case1 1 : Drvied 포인터에 Dervied 객체 할당" << endl;
    delete dp;

    cout << "Case1 2 : Base 포인터에 Dervied 객체 할당" << endl;
    delete bp;
}