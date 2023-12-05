#include <iostream>
using namespace std;



class Complex {
    int num1 = 0;
    int num2 = 0;
public:
    Complex(){
        num1 = 0;
        num2 = 0;
    }
    Complex(int a){
        num1 = a;
    }
    Complex(int a, int b){
        num1 = a;
        num2 = b;
    }
    inline void Show(){
        if(num1 == 0 && num2 == 0) {
            cout << "( " << "0" << " )" << endl;
        }
        else if(num1 == 0 && num2 != 0) {
            cout << "( " << num2 << "i" << " )" << endl;
        }
        else if(num1 != 0 && num2 == 0) {
            cout << "( " << num1  << " )"<< endl;
        }
        else if(num1 != 0 && num2 != 0) {
            if (num2 > 0) cout << "( " << num1 << "+" << num2 << "i" << " )" << endl;
            else
            cout << "( " << num1 <<  num2 << "i" << " )" << endl;
        }
    }
};

int main()  {
    Complex u(12, 34);
    Complex v(56, -78);
    Complex x(90);
    Complex y(0, 78);
    Complex z;


    u.Show();
    v.Show();
    x.Show();
    y.Show();
    z.Show();
}