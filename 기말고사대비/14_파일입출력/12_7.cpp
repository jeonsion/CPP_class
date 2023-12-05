#include <iostream>
#include <fstream>

using namespace std;

int main()  {
    const char* srcFile = "desert.jpg";
    const char* destFile = "desert_copy.jpg";

    ifstream fsrc(srcFile, ios::binary);
    if(!fsrc)   {
        cout << srcFile << "열기 오류" << endl;
        return 0;
    }

    ofstream fdest(destFile, ios::binary);
    if(!fdest) {
        cout << destFile << "열기 오류" << endl;
        return 0;
    }

    int c;
    while((c=fsrc.get()) != EOF){
        fdest.put(c);
    }
    cout << srcFile << "를 " << destFile << "로 복사 완료" << endl;
    fsrc.close();
    fdest.close();

}