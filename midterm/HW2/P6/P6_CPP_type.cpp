#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    int price;
public:
    Book(string title, int price)  {
        this->price = price;
        this -> title = title;
    }

    void set(string title, int price)    {
        this->title = title;
        this->price = price;
    }
    void show() {cout << title << ' ' << price << "원" << endl; }

};


int main()  {
    Book cpp("명품 C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}