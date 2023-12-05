#include <iostream>
#include <string>
using namespace std;




class Point{
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


};

int main()   {
    ColorPoint cp;
    ColorPoint * pDerive;
    //Point * pBase = pDerive;        //업캐스팅
    Point* pBase = &cp; //주소를 대입

    pBase->set(3, 4);
    pBase->showPoint();
    


    pDerive = (ColorPoint*)pBase;    //down-casting 다운캐스팅, pDerive가 pBase보다 더 넓은 범위를 가지고 있음

    pDerive->setColor("Red");
    pDerive->showColorPoint();
    
}