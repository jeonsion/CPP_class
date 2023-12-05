#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> student;
    int num;
    int score;
    string name;
    cout << "***** 점수관리 프로그램 HIGH SCORE을 시작합니다 *****" << endl;
    while(true)
    {
        cout << "입력:1, 조회:2, 종료:3 >> ";
        cin >> num;
        if(num == 3)
        {
            cout << "프로그램을 종료합니다..." << endl;
            break;
        }
        if(num == 1)
        {
            cout << "이름과 점수>> ";
            cin >> name >> score;
            student[name] = score;
        }
        if(num == 2)
        {
            cout << "이름>> ";
            cin >> name;
            cout << name << "의 점수는 " << student[name] << endl;
        }
    }
}
