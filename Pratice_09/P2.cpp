#include <iostream>
#include <string>
using namespace std;


class Circle{
    int radius;
public:
    Circle(int radius = 0 ) {
        this->radius = radius;
    }
    int getRadius() {
        return radius;
    }
    void setRadius(int radius)    {
        this->radius = radius;
    }
    double getArea()
    {
        return 3.14 * radius * radius;
    }
};


class NamedCricle : public Circle{
    string name;
public:
    NamedCricle(){
        this->name = "";
    };
    NamedCricle(int radius, string name)   {
        setRadius(radius);
        this->name = name;
    }
    void setName(string name){
        this->name = name;
    }
    string getName()    {
        return name;
    }
    void show() {
        cout << "반지름이 " << getRadius() << "인" << this->name << endl;
    }

};


int main()  {
    NamedCricle pizza[5];
    int MaxIndex = 0;
    cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
    for (int i = 0; i<5; i++)    {
        cout << i+1 << ">>" ;
        int radius;
        string name;
        cin >> radius >> name;
        if (radius > pizza[MaxIndex].getRadius())    {
            MaxIndex = i;
        }
        pizza[i].setRadius(radius);
        pizza[i].setName(name);
    }
    cout << "가장 면적이 큰 피자는 " << pizza[MaxIndex].getName() << "입니다." << endl;

}   