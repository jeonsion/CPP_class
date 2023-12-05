#include <iostream>
using namespace std;


class Rect;
bool equals(Rect r, Rect s);

class Rect{
    int width, height;
public:
    Rect(int width, int height)  {
        this->width = width;
        this->height = height;
    }
    friend bool equals(Rect r, Rect s);         //frined 함수를 만드는 방법

};



//두개의 Rect 클래스가 같은 사각형인지 비교하는 함수
bool equals(Rect r, Rect s)    {
    if(r.width == s.width && r.height == s.height) 
        return true;
    else 
        return false;
}

int main()  {
    Rect a(3, 4), b(3, 4);

    if(equals(a, b)) cout << "equals" << endl;
    else cout << "not equals" << endl;

    return 0;
}