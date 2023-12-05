#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
//#include <Windows.h>

using namespace std;

class BattleGround {
    long energy;
public:
    BattleGround();
    long getEnergy();
    void setEnergy(long newValue);
    void Attack(BattleGround* bg);
};



BattleGround::BattleGround() {
    energy = 100;
    cout << "새로운 캐릭터가 생성되었습니다.(Energy: " << energy  << ")"<< endl;
}

long BattleGround::getEnergy() {
    return energy;
}

void BattleGround::setEnergy(long newValue) {
    energy = newValue;
}

void BattleGround::Attack(BattleGround* bg) {
    long newEnergy = bg->getEnergy() - 20;
    bg->setEnergy(newEnergy);
    cout << "공격! (Energy: " << bg->getEnergy() << ")" << endl;
}

int main()  {
    srand((unsigned int)time(0));
    BattleGround a;
    BattleGround b;
    float randNum;      // 0 ~ 1 사이의 난수
    while (true)    {
        randNum = (float)rand() / RAND_MAX; // 0 ~ 1 사이의 난수
        if (randNum > 0.5)  {
            cout << "A 가 ";
            a.Attack(&b);
            if (b.getEnergy() <= 0) {
                cout << "A 승리!" << endl;
                break;
            }
        }
        else    {
            cout << "B 가 ";
            b.Attack(&a);
            if (a.getEnergy() <= 0) {
                cout << "B 승리!" << endl;
                break;
            }
        }
        //Sleep(500); 
    }
}