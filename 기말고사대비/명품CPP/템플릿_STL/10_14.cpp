#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, string> student;
    int num;
    string key;
    string name;
    cout << "***** 암호관리 프로그램 WHO를 시작합니다 *****" << endl;
    while(true)
    {
        cout << "삽입:1, 검사:2, 종료:3 >> ";
        cin >> num;
        if(num == 3)
        {
            cout << "프로그램을 종료합니다..." << endl;
            break;
        }
        if(num == 1)
        {
            cout << "이름 암호>> ";
            cin >> name >> key;
            student[name] = key;
        }
        if(num == 2)
        {
            cout << "이름? ";
            cin >> name;
            while(true){
                cout << "암호? ";
                cin >> key;
                if(student[name] == key){
                    cout << "통과!!" << endl;
                    break;
                }
                else
                    cout << "실패~~" << endl;
            }

        }
    }
}
