#include <iostream>
#include <string>

using namespace std;

int main()  {
    string song("Falling in love with you");
    string elvis("Elvis Presley");
    string singer;

    cout << song + "를 부른 가수는";
    cout << "(힌트 : 첫 글자는 " << elvis[0] << ")?";

    getline(cin, singer);   //문자열 입력
    if(singer == elvis)
        cout << "정답";
    else
        cout << "땡, " + elvis + "입니다. " << endl; 
}