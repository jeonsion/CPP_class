#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

class Person {
	string name;
public:
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
};

class UpAndDownGame {
public:
	void run();
};

void UpAndDownGame::run() {

}

int main() {
	Person player1, player2;
	string name1, name2;

	cout << "ù ��° �÷��̾��� �̸��� �����Դϱ�? ";
	cin >> name1;
	cout << "�� ��° �÷��̾��� �̸��� �����Դϱ�? ";
	cin >> name2;

	player1.setName(name1);
	player2.setName(name2);

	srand((unsigned)time(0));
	int answer = rand();
	answer = answer % 100;
	cout << answer << endl;

	cout << "Up & Down ������ �����մϴ�." << endl;
	cout << "ù ��° �÷��̾���� ��ȣ�� �����ּ���." << endl;

	int min = 0;
	int max = 99;

	int try_cnt = 2;

	while (true) {
		string user;
		int guess_num;
		
		if (try_cnt % 2 == 0) user = player1.getName();
		else user = player2.getName();


		cout << "���� " << min << "�� " << max << " ���̿� �ֽ��ϴ�." << endl;
		cout << user << ">>";
		cin >> guess_num;
		
		// min�� max �� ��� ���� �� ����?
		int a = guess_num - answer;
		int b = answer - guess_num;
		if (a < b) min = guess_num;
		else max = guess_num;

		if (guess_num == answer) {
			cout << user << "�� �̰���ϴ�. �����մϴ�." << endl;
			break;
		}
		try_cnt++;
	}
}