#include <iostream>
using namespace std;




int main() {
	int lower, higher;
	cout << "첫 번째 수:";
	cin >> lower;
	cout << "두 번째 수:";
	cin >> higher;
	int length = higher - lower;
	int sum = 0;
	int lowest = lower;
	

	for (int i = 0; i <= length; i++) {
		sum += lower;
		lower++;
	}

	cout << lowest <<" 에서 " << higher << " 까지 더한 결과는 " << sum << " 입니다.";
	
}