#include <iostream>
#include <string>

using namespace std;

class Integer  {
    int val;
public:
    Integer() : val(1) {};
    Integer(int v) : val(v) {};
    Integer(string str) : val(stoi(str)) {};
    int get() {
        return val;22
    }
    void set(int v){
        val = v;
    }
    bool isEven() { if(val% 2  == 0) return true; else return false; }

};


int main()  {
    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven();


}