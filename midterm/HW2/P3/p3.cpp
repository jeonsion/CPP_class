#include <iostream>
using namespace std;


char& find(char a[], char c, bool& success){    
    char *f = a;        // 배열의 이름, 첫 주소를 가리키는 포인터 선언

    while(*f != '\0'){  // 배열을 순회하며 M을 찾을 예정
        if(*f == c){    // M찾았을 때
            success = true;
            return *f;  //M이 있는 주소를 가리키고 있는 포인터 변수 f 반환 -> 포인터 변수기 때문에, f가 아닌 *f로 반환
        }
        f++;  
    }
    success = false;
    
}


int main()  {
    cout << "20191545  전시온 " << endl;
    char s[] = "Mike";
    bool b = false;
    char& loc = find(s, 'M', b);
    if(b == false)  {
        cout << "M을 발견할 수 없다" << endl;
        return 0;
    }
    loc = 'm';  //'M'위치에 'm' 기록
    cout << s << endl;
}