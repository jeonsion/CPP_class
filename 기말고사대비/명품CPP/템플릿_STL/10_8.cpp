#include <iostream>
using namespace std;

class Comparable{
public:
    virtual bool operator > (Comparable& op2) = 0;
    virtual bool operator < (Comparable& op2) = 0;
    virtual bool operator == (Comparable& op2) = 0;
};
class Circle : public Comparable{
    int radius;
public:
    Circle(int radius = 1) {this->radius = radius;}
    int getRadius() {return radius;}
    // 다운캐스팅
    bool operator > (Comparable &op2) override {
        Circle *temp = (Circle *)&op2;
        if(this->radius > temp->radius)
            return true;
        return false;
    }
    bool operator < (Comparable &op2) override {
        Circle *temp = (Circle *)&op2;
        if(this->radius < temp->radius)
            return true;
        return false;
    }
    bool operator == (Comparable &op2) override {
        Circle *temp = (Circle *)&op2;
        if(this->radius == temp->radius)
            return true;
        return false;
    }
};

template <class T>
T bigger(T a, T b)
{
     return a > b ? a : b;
}

template <class T>
T smaller(T a, T b)
{
    return a < b ? a : b;
}

template <class T>
bool equal(T a, T b)
{
    return a == b;
}

int main()
{
    int a = 20, b = 50, c;
    c = bigger(a, b);
    cout << "20과 50중 큰 값은 " << c << endl;
    Circle waffle(10), pizza(20), y;
    y = bigger(waffle, pizza);
    cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;

    Circle waffle1(10), pizza1(20), y1;

    y1 = smaller(waffle1, pizza1);
    cout << "waffle과 pizza 중 작은 것은 반지름은 " << y1.getRadius() << endl;

    Circle waffle2(20), pizza2(20);
    if(equal(waffle2, pizza2))
    {
        cout << "waffle과 pizza의 반지름은 서로 같다.";
    }
    else
        cout << "waffle과 pizza의 반지름은 서로 다르다.";

}
