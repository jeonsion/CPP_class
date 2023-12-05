#include <iostream>
using namespace std;


char & tolower(char a[], int& cnt, bool& success)   {
    cnt = 0;
    char *p = a;
    
    for(int i = 0; a[i]!='\0'; i++)  {      //문자열의 끝까지 반복 끝이 '\n'이 아니라 '\0'임
        //대문자를 소문자로 바꾸는 과정
        if(a[i] >= 'A' && a[i] <= 'Z')  {
            a[i] = a[i] + 32;
            cnt++;
            success = true;
        }
        //소문자 이고, 대문자가 아니면 p++ 해줘야함 -> 바꾼 문자열이 있는 공간의 첫번째 글자 반환 위해
        else if ((success == false) && (a[i] >= 'A' && a[i] <= 'z'))  {
            // cout << a[i] <<" : 대문자를 발견할 수 없습니다. " << endl;
            p++;
        }
    }
    return *p;
}

int main()  {
    cout << "20191545 전시온 "<< endl;
    char s[] = "MIke";
    // char s[] = "MIKe";
    // char s[] = "miKe";
    // char s[] = "mikE";


    bool b = false; //default 는 false, 바꿀 문자들을 찾을 수 없다면 false, 찾을 수 있다면 true 

    int num;
    char & loc = tolower(s, num, b);        //loc는 주소를 가지고 있음, tolower의 리턴값은 char&이므로 loc에 저장 가능

    if (b == false) {
        cout << "대문자를 발견할 수 없습니다 " << endl;
        return 0;
    }
    cout << s << endl;
    cout << num << "개의 문자를 변경하였습니다." << endl;
    loc = 'n';
    cout << s << endl; 
}