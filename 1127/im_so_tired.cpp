#include <iostream>
#include <fstream>
using namespace std;
#include <string>


int main()  {

    ifstream fin("student.txt");
    if(!fin)    {
        cout << "파일을 열 수 없습니다.\n";
        return 0;
    }
    string line;
    while(getline(fin, line))   {
        cout << line << endl;
    }
}