#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int i = 0; i < 4; i++)
        cout << "dec\t" << "hexa\t" << "char\t";
    cout << endl;
    for (int i = 0; i < 4; i++)
        cout << "___\t" << "____\t" << "____\t";
    cout << endl;
    cout.fill(' ');
    for (int i = 0; i < 128; i++) {
        if (i != 0 && i % 4 == 0)
            cout << endl;
        cout << setbase(10) << i << '\t';
        cout << setbase(16) << i << '\t';
        if (isprint(char(i)))
            cout << (char)i << '\t';
        else
            cout << '.' << '\t';
    }
}
