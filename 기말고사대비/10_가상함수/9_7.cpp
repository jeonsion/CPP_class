#include <iostream>
using namespace std;

class Calculator{
    void input()    {
        cout << "정수 2개를 입력하시오 >> " ;
        cin >> a >> b;
    }
protected:
    int a, b;
    virtual int calc(int a, int b) = 0; //순수 가상함수
public:
    void run()  {
        input();
        cout << "계산된 값은 " << calc(a, b) << endl;
    }
};


class Adder : public Calculator{
    int calc(int a, int b)  {   return a+b; }
};

class Substractor : public Calculator{
    int calc(int a, int b)  {   return a-b; }
};


int main()  {
    Adder adder;
    Substractor subtractor;

    adder.run();
    subtractor.run();
}