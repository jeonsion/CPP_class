#include <iostream>
#include <string>
using namespace std;


class Person{
    string name;
    string tel;
public:
    Person()
    {
        name = "";
        tel = "";
    }
    string getName() { return name; }
    string getTel() { return tel; }
    void set(string a, string b){
        name=a;
        tel=b;
    }
};


int main()  {
    cout << "20191545 전시온 " << endl;
    cout << "이름과 전화번호를 입력해주세요" << endl;
    string name, tel;
    Person person[3];   //3개의 객체를 가지는 배열 생성
    for(int i = 0; i<3; i++)  {  //사람의 수만큼, for문 실행
        cout << "사람" << i+1 << ">> ";
        cin >> name >> tel;
        person[i].set(name, tel);
    }
    cout << "모든 사람의 이름은 ";
    for(int i = 0; i<3; i++)    {
        cout << person[i].getName() << " ";
    }
    cout << endl;
    
    cout << "전화번호 검색합니다. 이름을 입력하세요>>";
    cin >> name;
    
    for(int i = 0; i<3; i++)    {
        if(person[i].getName() == name){
            cout << "전화번호는 " << person[i].getTel() << endl;
            return 0;
        }
        else
            cout << "전화번호가 없습니다." << endl;
    }    
}