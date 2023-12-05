#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;
class BattleGround {
	long energy;
public:
	BattleGround() {
		energy = 100;
		cout << "���ο� ĳ���Ͱ� �����Ǿ����ϴ�.(Energy: " << energy  << ")"<< endl;
	}
	long getEnergy() {
		return energy;
	}
	void setEnergy(long newValue) {
		energy -= newValue;
	}
	void Attack(BattleGround* bg) {
		cout << "�����߽��ϴ�.";
		bg->setEnergy(20);
		cout << "(Energy: " << bg->energy << ")"<< endl;
	}
};

int main() {
	srand((unsigned int)time(0));
	BattleGround a;
	BattleGround b;
	float randNum;
	while (true) {
		randNum = (float)rand() / RAND_MAX;
		if (randNum > 0.5) {
			cout << "A �� ";
			a.Attack(&b);
			if (b.getEnergy() <= 0) {
				cout << "A �¸�!" << endl;
				break;
			}
		}
		else {
			cout << "B �� ";
			b.Attack(&a);
			if (a.getEnergy() <= 0) {
				cout << "B �¸�!" << endl;
				break;
			}
		}
		Sleep(500); 
	}
}