#include <iostream>
using namespace std;

int main()  {
    int *p;

    p = new int;
    if(!p)  {
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    *p = 5;
    int n = *p;
    cout << "*p = " << *p << endl;
    cout << "n = " << n << endl;

    delete p;


    p = new int;
    *p = 10;
    cout << "*p = " << *p << endl;
    delete p;


}