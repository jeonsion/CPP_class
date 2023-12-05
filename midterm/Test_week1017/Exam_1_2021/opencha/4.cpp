#include <iostream>
#include <string>
using namespace std;

class Player {
	string name;
public:
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

class WordGame {
	Player* p;
	int players;
	string prevWord;
	string nextWord;
public:
	WordGame();
	~WordGame();
	void getPlayers();
	void run();
	bool compareWords(string nextWord); //만약 틀리면 0
};

WordGame::WordGame() {
	getPlayers();
	run();
}

WordGame::~WordGame() {
	cout << "게임을 종료합니다." << endl;
	delete[]p;
}

void WordGame::getPlayers() {
	cout << "끝말 잇기 게임을 시작합니다" << endl;
	cout << "게임에 참가하는 인원은 몇명입니까? ";
	cin >> players;
	p = new Player[players];
	string name;
	for (int i = 0; i < players; i++) {
		cout << "참가자의 이름을 입력하세요. 빈칸 없이>> ";
		cin >> name;
		p[i].setName(name);
	}
}

void WordGame::run() {
	int quit = 0;
	prevWord = "아버지";
	cout << "시작하는 단어는 아버지입니다." << endl;
	while (true) {
		for (int i = 0; i < players; i++) {
			cout << p[i].getName() << ">> ";
			cin >> nextWord;
			if (!compareWords(nextWord)) {
				quit = 1;
			}
			prevWord = nextWord;
		}
		if (quit) {
			break;
		}
	}
}

bool WordGame::compareWords(string nextWord) {
	int prevLength = prevWord.size();
	if (prevWord.at(prevLength - 2) == nextWord.at(0) &&
		prevWord.at(prevLength - 1) == nextWord.at(1))
		return 1;
	else
		return 0;
}

int main(void) {

	WordGame Game1;

	return 0;
}
 


