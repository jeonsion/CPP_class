#include <iostream>
#include <string>
using namespace std;


int main()  {

    string s;
    cout << "여러 줄의 문자열을 입력하세요";
    getline(cin, s);

    cin.ignore();

    string f, r;

    cout << endl << "find : ";

    getline(cin, f);
    cout << "replace : ";
    getline(cin, r);

    int startIndex = 0;
    while(true){
        int fIndex = s.find(f, startIndex);
        if(fIndex == -1) break;

        s.replace(fIndex, f.length(), r);
        startIndex = fIndex + r.length();


    }

    cout << s << endl;
}