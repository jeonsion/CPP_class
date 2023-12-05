#include <iostream>
#include <fstream>
using namespace std; 

int main()  {
    const char* srcFile ="tulips.jpg";
    const char* destFile = "tulips_copy.jpg";

    ifstream fsrc(srcFile, ios::in | ios::binary);
    if(!fsrc)    {
        cout << "파일 열기 오류";
        return 0;
    }

    ofstream fdest(destFile, ios::out | ios::binary);
    if(!fdest)   {
        cout << "파일 열기 오류";
        return 0;
    }

    int count = 0;
    char buf[1024];
    while(!fsrc.eof())  {
        fsrc.read(buf, 1024);
        count += 1;
        int n = fsrc.gcount();
        fdest.write(buf, n);

    }
    cout << count << "복사하여" << srcFile << "을" << destFile << "로 복사완료" << endl;
    fsrc.close();
    fdest.close();

}