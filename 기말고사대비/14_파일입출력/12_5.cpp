#include <iostream>
#include <fstream>
using namespace std;

int main()  {

    ifstream fin("system.ini");
    if(!fin)    {
        cout << "system.ini 열기 오류" << endl;
        return 0;
    }

    char buf[81];
    while(fin.getline(buf, 81)) {
        cout << buf << endl;
    }

    fin.close();
}