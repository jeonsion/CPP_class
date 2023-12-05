#include <iostream>
#include <fstream>
using namespace std;

long getFileSize(ifstream & fin)    {
    fin.seekg(0, ios::end);
    long length = fin.tellg();
    return length;

}


int main()  {
    const char* file = "system.ini";
    ifstream fin(file, ios::in | ios::binary);
    if(!fin)    {
        cout << "파일 열기 오류";
        return 0;
    }

    cout << file << "의 크기는" << getFileSize(fin) << "바이트 입니다." << endl;
    fin.close();
}