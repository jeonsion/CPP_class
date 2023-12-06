#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    cout << setw(15) << left << "Number";
    cout << setw(15) << left << "Square";
    cout << setw(15) << left << "Square Root"<<endl;

    cout.fill('_');
    for (int i = 0; i < 45; i += 5) {
        cout << setw(15) << i;
        cout << setw(15) << i * i;
        cout << setw(15) << setprecision(3) <<sqrt(i);
        cout << endl;
    }
}
