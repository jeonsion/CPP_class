#include <iostream>
using namespace std;

int main() {
	cout << "�Է��� ������ ������? ";
	int n;
	cin >> n;
	if (n <= 0) return 0;
	double* p = new double[n];
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�" << endl;
		return 0;
	}
	
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° ����: ";
		cin >> p[i];
	}

	double sum = 0;

	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout << "��" << sum << endl;
	cout << "��� = " << sum / n << endl;
	
	delete[] p;
	
}