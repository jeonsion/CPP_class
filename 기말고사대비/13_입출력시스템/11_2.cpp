#include <iostream>
using namespace std;


void get1() {
    cout << "cin.get()로 엔터키 까지 입력 받고 출력 >> "; 
    int ch;
    while((ch=cin.get())!=EOF) {
        cout.put(ch);   //읽은 문자 출력
        if(ch == '\n') break;
    }
}

void get2() {
    cout << "cin.get()으로 엔터키 까지 입력 받고 출력 >> ";
    char ch;
    while(true){
        cin.get(ch);
        if(cin.eof()) break;
        cout.put(ch);
        if(ch == '\n') break;
    }
}


int main()  {
    get1();
    get2();
}


