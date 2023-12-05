#include <iostream>
using namespace std;


#include "Calculator.h"
#include "Adder.h"
#include "Substractor.h"


void Calculator::run()  {
    cout << "두개의 수를 입력하세여 >>";
    int a, b;
    cin >> a >> b;
    Adder adder(a, b);
    cout << adder.process() << endl;
    Substractor substracter(a, b);
    cout << substracter.process();
    
}