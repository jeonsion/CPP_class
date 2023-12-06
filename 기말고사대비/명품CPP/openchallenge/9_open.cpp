//Food.h
#pragma once
#include "Gameobject.h"
using namespace std;
class Food : public GameObject {
	int count;
public:
	Food(int starX, int starY, int dis) : GameObject(starX, starY, dis) {
		srand((unsigned)time(0));
		count = 0;
	}
	void move();
    char getShape() ;

};
//Food.cpp
#include "Food.h"

void Food::move() {
		int n1, n2;		//n1 : 2/5 확률, n2 : 방향 선택
		n1 = rand() % 5;
		n2 = rand() % 4;
		if (n1 >= 1 && n1 <= 2) {
			switch (n2) {
			case 0:
				if (y - distance < 0) y = 20 + y - distance;
				else y -= distance;
				break;
			case 1:
				if (x + distance > 9) x = x + distance - 10;
				else x += distance;
				break;
			case 2:
				if (x - distance < 0) x = 10 + x - distance;
				else x -= distance;
				break;
			case 3:
				if (y + distance > 19) y = y + distance - 20;
				else y += distance;
				break;
			}
		}
        
}
char Food::getShape() {
	return '@';
}
//Game.cpp
#include "Game.h"
using namespace std;
	
void Game::game() {
		bool exit = true;
		Human* h = new Human(0, 0, 1);	Monster *m = new Monster(5, 5, 2);
		Food* f = new Food(8, 9, 1);
        cout << "** Human의 Food 먹기 게임을 시작합니다." << endl << endl;
		while (exit) {				
			for (int i = 0; i<10; i++) {
				for (int ii = 0; ii<20; ii++) {
					if (m->getX() == i && m->getY() == ii) cout << m->getShape();		
					else if (h->getX() == i && h->getY() == ii) cout << h->getShape();	
					else if (f->getX() == i && f->getY() == ii) cout << f->getShape();
					else cout << '-';
				}
				cout << endl;
			}

			if (m->collide(h)) {
				cout << "Human is Loser!!" << endl << "인간이 몬스터에게 잡혔습니다." << endl << endl;
				exit = false;
				break;
			}
			else if (m->collide(f)) {
				cout << "Human is Loser!!" << endl << "몬스터가 음식을 먹었습니다." << endl << endl;
				exit = false;
				break;
			}
			else if (h->collide(f)) {
				cout << "Human is Winner!!" << endl << "인간이 음식을 먹었습니다." << endl << endl;
				exit = false;
				break;
			}

			h->move();
			m->move();
			f->move();
		}

}
//Game.h
#pragma once
#include "Human.h"
#include "Monster.h"
#include "Food.h"
#include "Gameobject.h"
#include <iostream>
using namespace std;

class Game {
public:
	void game();


};
//Gameobject.cpp
#include "Gameobject.h"


bool GameObject::collide(GameObject *p) {
		if (this->x == p->getX() && this->y == p->getY())
			return true;
		else
			return false;
}
//Gameobject.h
#pragma once

#include <cstdlib>
#include <ctime>
using namespace std;
class GameObject {
protected:
	int distance;
	int x, y;
public:
	GameObject(int startX, int startY, int distance) {
		this->x = startX; this->y = startY;
		this->distance = distance;
	}
	virtual ~GameObject() {};
	virtual void move() = 0;
	virtual char getShape() = 0;

	int getX() { return x; }
	int getY() { return y; }
	bool collide(GameObject *p);

};
//Human.cpp
#include "Human.h"
using namespace std;
void Human::move() {
		char key;
		cout << "왼쪽(a), 아래(s), 위(d), 오른쪽(f) >> ";
		cin >> key;
		cout << endl;
		if (key == 'a') {
			if (y - distance < 0) y = 20 + y - distance;
			else y -= distance;
		}
		else if (key == 's') {
			if (x + distance > 9) x = x + distance - 10;
			else x += distance;
		}
		else if (key == 'd') {
			if (x - distance < 0) x = 10 + x - distance;
			else x -= distance;
		}
		else if (key == 'f') {
			if (y + distance > 19) y = y + distance - 20;
			else y += distance;
		}
}
char Human::getShape() {
	return 'H';
}
//Human.h
#pragma once
#include "Gameobject.h"
#include <iostream>
using namespace std;
class Human : public GameObject {
public:
	Human(int starX, int starY, int dis) : GameObject(starX, starY, dis) { ; }
	void move();
	char getShape();
};
#include <iostream>
#include "Game.h"
using namespace std;
int main() {
	Game* g = new Game;
	g->game();
	delete g;
}
//Monster.cpp
#include "Monster.h"

void Monster::move() 
{
		int num;
		num = rand() % 2;
		switch (num) {
		case 0:
			if (x - distance < 0) x = 10 + x - distance;
			else x -= distance;
			break;
		case 1:
			if (x + distance > 9) x = x + distance - 10;
			else x += distance;
			break;
		}
		num = rand() % 2;
		switch (num) {
		case 0:
			if (y - distance < 0) y = 20 + y - distance;
			else y -= distance;
			break;
		case 1:
			if (y + distance > 19) y = y + distance - 20;
			else y += distance;
			break;
		}
}
char  Monster::getShape() {
		return 'M';
}
//Monster.h

#pragma once
#include "Gameobject.h"
using namespace std;

class Monster : public GameObject {
public:
	Monster(int starX, int starY, int dis) : GameObject(starX, starY, dis) {
		srand((unsigned)time(0));
	}
	void move();

	char getShape() ;

};