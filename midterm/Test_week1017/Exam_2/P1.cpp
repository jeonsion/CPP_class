#include <iostream>
using namespace std;

class C {
public:
    C(){
        cout << "생성자 C" << endl;
    }
    ~C(){
        cout << "소멸자 C" << endl;
    }
};

class A : public C {
public:
    A(){
        cout << "생성자 A" << endl;
    }
    ~A(){
        cout << "소멸자 A" << endl;
    }
};

class B : public A {
public:
    B(){
        cout << "생성자 B" << endl;
    }
    ~B(){
        cout << "소멸자 B" << endl;
    }
};


int main()  {
    B b;
    return 0;
}