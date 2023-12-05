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

    Power& operator+=(Power op2)    {
        this->kick += op2.kick;
        this->punch += op2.punch;
        return *this;
    }

    Power& operator++()    {
        this->kick += 1;
        this->punch += 1;
        return *this;
    }};



int main()  {

    Power a(3, 5), b;
    
    a.show();
    b.show();
    
    b = ++a;
    a.show();
    b.show();

}
