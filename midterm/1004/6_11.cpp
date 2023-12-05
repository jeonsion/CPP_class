#include <iostream>
using namespace std;


class Circle{
private:
    static int numOfCircles;
    int radius;
public:
    Circle(int r = 1)   {
        radius = r;
        numOfCircles++;
    }
    ~Circle()   {numOfCircles--;}
    double getArea()    {return 3.14*3.14;}
    static int getNumOfCircles()    {return numOfCircles;}
};

int Circle::numOfCircles = 0; //static 변수 Class밖에서 초기화 (전역변수 초기화)

int main()  {
    cout << "20191545 전시온 " << endl;
    Circle *p = new Circle[10];
    cout << "생존하고 있는 원의 개수" << Circle::getNumOfCircles() << endl;

    delete [] p; //10개의 소멸자 실행
    cout << "생존하고 있는 원의 개수" << Circle::getNumOfCircles() << endl;

    Circle a;
    cout << "생존하고 있는 원의 개수" << Circle::getNumOfCircles() << endl;

    Circle b;
    cout << "생존하고 있는 원의 개수" << Circle::getNumOfCircles() << endl;


}