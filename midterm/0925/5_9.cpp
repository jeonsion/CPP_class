#include <iostream>
using namespace std;

class Circle  {
private:
    int radius;
public:
    Circle(const Circle& c) {
        this->radius = c.radius;
        cout << "복사 생성자 실행 radius = " << radius << endl;
    }
    Circle()    { radius = 1; }
    Circle(int radius) {this->radius = radius ;}
    double getArea()    {return 3.14 * radius * radius ;}
};

int main()  {
    cout << " 20191545 전시온 " << endl;
    Circle src(30);
    Circle dest(src);

    cout << "원본의 면적 = " << src.getArea()    << endl;
    cout << "원본의 면적 = " << dest.getArea()    << endl;
}