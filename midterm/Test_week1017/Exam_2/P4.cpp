#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player{
    string name;
public:
    Player(string name){
        this->name = name;
        cout << this->name <<" 캐릭터가 생성되었습니다."  << endl;
    }
    string getName(){
        return name;
    }
};



//BattleGround의 멤버 변수는 모두 static 이어야함
class BattleGround{
public:
    static long energy;
public:
    BattleGround();
    static void Attack(Player* bg);
};


//static 변수 초기화

long BattleGround::energy = 100;

void BattleGround::Attack(Player* bg) {
    long newEnergy = BattleGround::energy - 20; //newEnergy를 새로 만든 다음 BattleGround::energy - 20 값을 대입
    BattleGround::energy = newEnergy;           // 에너지값 갱신

    //매개 변수를 이용해서 누가 때렸는지를 출력하므로 매개변수 타입을 클래스로 지정
    //몬스터의 에너지는 전역변수
    //캐릭터는 Player 클래스의 멤버 함수로 접근 가능
    cout << bg->getName() << "가(이) 공격했습니다! (Energy: " << BattleGround::energy << ")" << endl;
}

int main()  {
    srand((unsigned)time(0));

    //플레이어 생성
    Player a("젠지");   
    Player b("담원");

    //몬스터 에너지는 BattleGround 클래스의 static 변수로 선언
    cout << "몬스터의 에너지는 " << BattleGround::energy << "입니다." << endl;
    
    float randNum;

    while (true)    {
        randNum = (float)rand() / RAND_MAX;
        if(randNum > 0.5)   {
            BattleGround::Attack(&a);
            if(BattleGround::energy <= 0){  //몬스터의 에너지가 0이하가 되면 게임 종료
                cout << a.getName() << "가 승리!!" << endl; //그 때 막타 친 캐릭터가 승리
                break;
            }
        }
        else{
            BattleGround::Attack(&b);
            if(BattleGround::energy <= 0){
                cout << b.getName() << "가 승리!!" << endl;
                break;
            }
        }
    }

}
