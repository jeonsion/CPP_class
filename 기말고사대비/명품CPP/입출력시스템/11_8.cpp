#include <iostream>
#include <string>
using namespace std;

class Circle {
    string name;
    int radius;
public:
    Circle(int radius = 1, string name = "") {
        this->radius = radius;
        this->name = name;
    }
    friend istream& operator>>(istream& in, Circle& c);
    friend ostream& operator<<(ostream& out, Circle& c);
};
istream& operator>>(istream& in, Circle& c) {
    string name;
    int radius;
    cout << "반지름 >> ";
    in >> radius; in.ignore();
    cout << "이름 >> ";
    in >> name; in.ignore();
    c.name = name;
    c.radius = radius;
    return in;
}
ostream& operator<<(ostream& out, Circle& c) {
    out << "(반지름" << c.radius << "인 " << c.name << ")";
    return out;
}
int main() {
    Circle d, w;
    cin >> d >> w;
    cout << d << w << endl;
}
