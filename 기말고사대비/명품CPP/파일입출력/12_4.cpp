#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("C:\\windows\\system.ini");
	ofstream fout("C:\\Users\\82107\\Documents\\명품CPP프로그래밍개정판_학습자용20200814\\system.txt");

	if (!fin || !fout) {
		cout << "파일 읽기 오류" << endl;
		return 0;
	}
	
	int ch;
	while ((ch=fin.get())!= EOF) {
		fout << (char)toupper(ch);
	}

	fin.close();
	fout.close();
}