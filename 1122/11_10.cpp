
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Book {
    string title;
    string author;
    string press;
public:
    Book(string title = "", string press = "", string author = ""){
        this->title = title;
        this->press = press;
        this -> author = author;   
    }
    friend ostream& operator<<(ostream& bout, Book b);

};

ostream& operator<<(ostream& bout, Book b)  {
    bout << setw(10) << "제목: " << b.title << endl;
    bout << setw(10) << "출판사: " << b.press << endl;
    bout << setw(10) << "저자: " << b.author << endl;
    return bout;
}

int main()  {

    Book book("데미안", "열린책들", "헤르만 헤세");
    cout << book;
}