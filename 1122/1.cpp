#include <iostream>
using namespace std;


int main()  {
    cout.width(10);
    cout << "Hello" << endl;

    cout.width(5);
    cout << 12 << endl;

    cout << "%";
    cout.width(10);
    cout << "Korea/" << "Seoul" << "City" << endl;

    cout.fill('^');
    cout.width(10);
    cout << "hello" << endl;

    cout.precision(5);
    cout << 11./.3 << endl;
}