#include <iostream>
#include <string>
using namespace std;


class Person {
    int id;
    double weight;
    string name;
public:
    // Person(){
    //     this->id = 1;
    //     this->weight = 20.5;
    //     this->name = "Grace"
    // }
    // Person(int a, string Nickname)  {
    //     this->id = a;
    //     this->name = Nickname;
    //     this->weight = 20.5;
    // }
    // Person(int a, string Nickname, double b){
    //     this->id = a;
    //     this->name = Nickname;
    //     this->weight = b;
    // }
    Person(int a = 1, string Nickname = "Grace", double b = 20.5){
        this->id = a;
        this->name = Nickname;
        this->weight = b;
    }
    void show() {
        cout << id << ' ' << weight << ' ' << name << endl;
    }

};

int main()  {
    cout << "20191545 전시온 " << endl;
    Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
    grace.show();
    ashley.show();
    helen.show();
}