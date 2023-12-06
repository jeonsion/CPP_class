#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("소스.cpp");

	if (!fin) {
		cout << "파일 읽기 오류" << endl;
		return 0;
	}
	
	int ch;
	while ((ch=fin.get())!= EOF) {
		if (ch == '/') {
			if ((ch = fin.get()) == '/') {
				fin.ignore(100, '\n'); // /뒤에 또 /가 나오면 주석문이므로 입력무시
				cout << endl; // 줄바꿈까지 ignore함수에 의해 제거되어 다시 입력
			}
			else cout << "/";
		}
		else cout << (char)ch;
	}

	fin.close();
}
