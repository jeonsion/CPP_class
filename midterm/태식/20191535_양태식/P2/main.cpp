#include <iostream>	
#include <cstdlib>
#include <ctime>
using namespace std;

#include "ClassP2.h"

int main() {
	srand((unsigned)time(0));
	Random r;
	cout << "-- 0����" << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2���� " << "9 ������ ���� Ȧ�� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}