#include <iostream>
#include <string>
using namespace std;


int main()  {
    int val1, val2;
    string op; 
    cout << "20191545 전시온 " << endl;

    while(true) {
        cout << "수식을 입력하시오? " ;
        cin >> val1 >> op >> val2;

        if(op == "+"){
            cout << val1 << " + " << val2 << " = " << val1 + val2 << endl;
        }
        else if(op == "-"){
            cout << val1 << " - " << val2 << " = " << val1 - val2 << endl;
        }
        else if(op == "*"){
            cout << val1 << " * " << val2 <<  " = " << val1 * val2 << endl;
        }
        else if(op == "/"){
            cout << val1 << " / " << val2 << " = " << val1 / val2 << endl;
        }
        else if(op == "%"){
            cout << val1 << " % " << val2 << " = " <<val1 % val2 << endl;
        }
    
    }

}