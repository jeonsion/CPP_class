#include <iostream>
using namespace std;




int main() {
	int lower, higher;
	cout << "ù ��° ��:";
	cin >> lower;
	cout << "�� ��° ��:";
	cin >> higher;
	int length = higher - lower;
	int sum = 0;
	int lowest = lower;
	

	for (int i = 0; i <= length; i++) {
		sum += lower;
		lower++;
	}

	cout << lowest <<" ���� " << higher << " ���� ���� ����� " << sum << " �Դϴ�.";
	
}