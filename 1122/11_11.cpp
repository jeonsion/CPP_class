
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Point {
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    friend ostream& operator<<(ostream& ost, Point p);
    friend istream& operator>>(istream& ist, Point &p);
};

ostream& operator<<(ostream& ost, Point p)  {
    ost << "(" << p.x << ", " << p.y << ")" << endl;
    return ost;
}

istream& operator>>(istream& ist, Point &p){
    cout << "X좌표: ";
    ist >> p.x;
    cout << "Y좌표: ";
    ist >> p.y;

    return ist;
}

int main()  {
    Point p;
    cin >> p;
    cout << p << endl;
}