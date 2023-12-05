#include <iostream>
using namespace std;

#include "Exp.h"

class Exp{
private:
    int value = 1;
    int base = 0;
    int exp = 0;
public:
    Exp(int a, int b){
        base = a, exp = b;
    }
    Exp(){
        base = 1, exp = 1;
    }
    Exp(int a){
        base = a, exp = 1;
    }
    int getValue();
    int getBase();
    int getExp();
    bool equals(Exp b);
};

int Exp::getValue(){
    if (exp == 1)
        return base;
    for(int i = 0; i < exp ; i++){
        // cout << "value : " << value << "base : " << base << endl;
        value *= base;
    }
    return value;
}

int Exp::getBase(){
    return base;
}

int Exp::getExp()   {
    return exp;
}

bool Exp::equals(Exp b){
    if(value == b.getValue())
        return 1;
    else
        return 0;
}


int main()  {
    cout << "20191545 전시온" << endl;
    Exp a(3, 2);
    Exp b(9);
    Exp c;

    cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
    cout << "a의 베이스 " << a.getBase() << ',' <<  "지수" << a.getExp() << endl;


    if(a.equals(b))
        cout << "same" << endl;
    else
        cout << "not same" << endl;
}