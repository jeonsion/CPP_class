
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
class Person {
    string name;
public:
    void setName(string n) { name = n; }
    string getName() { return name; }
};
class UpAndGame {
    static int n; // 랜덤하게 생성한 숨겨진 답
    static int left, right; // 답은 left와 right 사이에 있다.
public:
    static void game();
};
int UpAndGame::n; // 정답은 0부터 99 사이의 랜덤한 숫자
int UpAndGame::left = 0;
int UpAndGame::right = 99;
void UpAndGame::game() {
    UpAndGame::n = rand() % 100;
    cout << "Up & Down 게임을 시작합니다" << endl;
    Person p[2];
    p[0].setName("김인수");
    p[1].setName("오은경");
    int i = 0;
    bool sw;
    for (;;) {
        sw = true;
        cout << "답은 " << left << "과 " << right << "사이에 있습니다." << endl;
        cout << p[i % 2].getName() << ">>";
        int num;
        cin >> num;
        if (num < UpAndGame::n) // 입력 받은 숫자가 답보다 낮으면 num과 right 사이이므로
            UpAndGame::left = num; // left 를 num으로 변경
        else if (num > UpAndGame::n) // 입력 받은 숫자가 답보다 높으면 left와 num 사이이므로
            UpAndGame::right = num; // right를 num 으로 변경
        else if (num == UpAndGame::n) { // 답과 같다면
            cout << p[i % 2].getName() << "가 이겼습니다!!" << endl; // 해당 플레이어 승리
            break;
        }
        else {
            cout << "입력이 잘못 되었습니다.다시 입력하세요" << endl;
            sw = false;
        }
        if(sw) ++i; // 다음플레이어
    }
}
int main() {
    srand((unsigned)time(0));
    UpAndGame::game();
}
