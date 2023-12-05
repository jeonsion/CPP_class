#include <iostream>
using namespace std;



class Date{
    int year;
    int month;
    int day;
public:
    Date(int year, int month, int day){
        this->year = year;
        this->month = month;
        this->day = day;
    }
    Date(string date){
        this->year = stoi(date.substr(0,4));
        this->month = stoi(date.substr(5,2));
        this->day = stoi(date.substr(8,2));
    }
    void show(){
        cout << year << "년 " << month << "월 " << day << "일" << endl;
    }
    int getYear(){
        return this->year;
    }
    int getMonth()  {
        return this->month;
    }
    int getDay()    {
        return this->day;
    }
}; 



int main()  {

    Date birth(2014, 3, 20);    // 2014년 3월 20일을 birth로 초기화
    Date independenceDay("1945/8/15");  // "1945/8/15"를 independenceDay로 초기화
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
