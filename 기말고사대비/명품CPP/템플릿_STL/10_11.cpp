#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book{
    string name;
    string bookName;
    int year;
public:
    Book(int year, string bookName, string name){
        this->year = year;
        this->bookName = bookName;
        this->name = name;
    }
    string getName() {return name;}
    int getYear() {return year;}

    void show(){
        cout << year << "년도, " << bookName << ", " << name << endl;
    }
};

int main()
{
    vector<Book> v;
    string name;
    string bookName;
    int year;
    cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
    while(true)
    {
        cout << "년도>>";
        cin >> year;
        cin.ignore();
        if(year == -1)
            break;
        cout << "책이름>>";
        getline(cin, bookName);
        cout << "저자>>";
        getline(cin, name);
        Book temp(year, bookName, name);
        v.push_back(temp);
    }
    cout << "총 입고된 책은 " << v.size() <<"권입니다." << endl;
    int num = 0;
    while(true)
    {
        cout << "어떤걸로 검색하시겠습니까? 1: 저자이름 2: 년도 3: 종료>>";
        cin >> num;
        if(num == 1)
        {
            cin.ignore();
            cout << "저자 이름>>";
            getline(cin, name);
            for(auto arr : v){
                if(arr.getName() == name)
                    arr.show();
            }
        }
        if(num == 2)
        {
            cin.ignore();
            cout << "년도>>";
            cin >> year;
            for(auto arr : v){
                if(arr.getYear() == year)
                    arr.show();
            }
        }
        if(num == 3)
            break;
    }
}
