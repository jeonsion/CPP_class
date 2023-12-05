#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Book {
    char *title;
    int price;
public:
    Book(const char* title, int price)  {
        this->price = price;
        int len = strlen(title);
        this->title = new char [len + 1];
        strcpy(this->title, title);
    }
    Book( Book& book){
        this->title = book.title;
        int len = strlen(book.title);
        this->title = new char [len + 1];
        strcpy(this->title, book.title);
        cout << "복사 생성자 실행, 원본 객체의 이름 " << this->title << endl;
    }
    ~Book() {
        if(title)
            delete [] title;            //배열에 대한 소멸자 실행
    }
    void set(const char* title, int price)    {
        if(this->title)
            delete [] this->title;
        this->title = new char[strlen(title) + 1];
        strcpy(this->title, title);
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