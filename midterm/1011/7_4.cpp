#include <iostream>
using namespace std;


class Power{
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0)  {
        this->kick = kick; this->punch = punch;
    }

    friend Power operator+ (int op1, Power op2);
    void show() {
        cout << "kick = " << kick << ", " << "punch = " << punch << endl;

    }

    Power operator + (Power op2)    {
        Power tmp;
        tmp.kick = this->kick + op2.kick;
        tmp.punch = this->punch + op2.punch;
        return tmp;
    }


    Power operator - (Power op2)    {
        Power tmp;
        tmp.kick = this->kick - op2.kick;
        tmp.punch = this->punch - op2.punch;
        return tmp;
    }

    Power operator * (Power op2)    {
        Power tmp;
        tmp.kick = this->kick * op2.kick;
        tmp.punch = this->punch * op2.punch;
        return tmp;
    }
    bool operator== (Power op2) {
        if(this->kick ==op2.kick && this->punch == op2.punch)   return true;
        else return false;
    }


};



int main()  {

    Power a(3, 5), b(4, 6), c, d, e, f;

    c = a + b;
    //c = a + 10;         <- 하고 싶으면 Power operator + (int op2) 이런식으로 하면됨
    f = 10 + a;    // <- frined 함수로 구현할 수 있음

//------------------------------------------------------------




//------------------------------------------------------------
    // a++ 과 ++a 는 어떻게 할까?




//------------------------------------------------------------
    d = a - b;
    e = a * b;
    a.show();
    b.show();
    c.show();
    d.show();
    e.show();
    
    f.show();

    if(a == b) cout << " 두파워가 같다" << endl;
    else cout << "두 파워가 다르다 " << endl;

}
