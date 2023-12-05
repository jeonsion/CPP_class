#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int rand(int a, int b){
    return rand() % (b-a + 1) + a;
}



int main()  {
    srand((unsigned)time(0));
    string str;
    char ch;
    int n;

    cout << "20191545 전시온" << endl;
    cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;



    while(1){
        cout << ">>";
        getline(cin, str);
        if(str == "exit"){
            //cout << "exit 입력했음, 종료합니다";
            return 0;
        }
        else{
            n = rand(0, str.length());  //임의의 바꿀 자리 1개 
            //cout << "바꿀 자리 : " << n;
            ch = 'a' + rand() % 26;
            str[n] = ch;
            cout << str << endl;
        }
            
    }

}