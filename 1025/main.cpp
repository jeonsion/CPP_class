#include <iostream>
#include <string>
using namespace std;




class Point{
protected:
    int x, y;
public:
    void set(int x, int y){
        this->x = x;
        this->y = y;
    }
    void showPoint()    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

class ColorPoint : public Point{
    string color;
public:
    void setColor(string color){
        this->color = color;
    }
    void showColorPoint()   {
        cout << color << " : ";
        showPoint();        //Point클래스에서 선언한 멤버함수를 상속하여 사용
    }
    bool equals(ColorPoint p)   {
        if( x == p.x && y == p.y && color == p.color)
            return true;
        else    
            return false;
    }

};


class A{
public:
    A() {   cout << "생성자A" << endl;  }
    ~A()    {   cout << "소멸자A" << endl;  }
    A(int x)    {
        cout << "매개변수 생성자 A" << x << endl;
    }
};

class B : public A{
public:
    B() {   cout << "생성자B" << endl;  }
    ~B()    {   cout << "소멸자B" << endl;  }
    B(int x) : A(x + 3){
        cout << "매개변수 생성자 B" << x << endl;
    }
};

class C : public B{
public:
    C() {   cout << "생성자C" << endl;  }
    ~C()    {   cout << "소멸자C" << endl;  }
};

int main()   {

    C c;
    B b(4);
    Point p;
    p.set(2, 3);
    // p.x = 5;
    // p.y = 5;
    p.showPoint();

    ColorPoint cp;
    // cp.x = 10;
    // cp.y = 10;

    cp.set(3, 4);
    cp.setColor("Red");
    cp.showColorPoint();


    ColorPoint cp2;
    cp2.set(3,4);
    cp2.setColor("Red");
    cp2.showColorPoint();
    cout << ((cp.equals(cp2))? "true" : "false");
    
}