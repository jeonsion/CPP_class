#include <iostream>
#include <string>
using namespace std;

class Phone {
    string name, telnum, address;
public:
    Phone(string name = "", string telnum = "", string address = "") {
        this->name = name;
        this->telnum = telnum;
        this->address = address;
    }
    friend istream& operator>>(istream& in, Phone& p);
    friend ostream& operator<<(ostream& out, Phone& p);
};

istream& operator>>(istream& in, Phone& p) {
    cout << "이름 : ";
    getline(in, p.name);
    cout << "전화번호 : ";
    getline(in, p.telnum);
    cout << "주소 : ";
    getline(in, p.address);
    return in;
}
ostream& operator<<(ostream& out, Phone& p) {
    out << "(" << p.name << ',' << p.telnum << ',' << p.address << ")";
    return out;
}

int main() {
    Phone girl, boy;
    cin >> girl >> boy;
    cout << girl << endl << boy << endl;
}
