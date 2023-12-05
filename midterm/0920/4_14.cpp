#include <iostream>
#include <string>
using namespace std;

int main()  {
    string s; 
    cout << " 7+23+5+100+25와 같이 덧셈 문자열을 입력하세요 ." << endl;

    //idea : 문자열을 파싱해서 숫자와, 연산자를 나눠야한다.
    getline(cin, s);
    int sum = 0;
    int startIndex = 0;

    while(true){

        
        int fIndex = s.find('+', startIndex);
        if(fIndex == -1)    {

            // 뒤에 +기호가 없다는 의미이므로 substr을 이용해서 끝까지 추출
            string part = s.substr(startIndex);
            
            //빈문자일 경우
            if (part == "") break;
            //빈문자가 아니면 찾은 숫자 출력
            cout << part << endl;
            sum += stoi(part);
            break;
        }

        //숫자의 크기가 나옴
        int count = fIndex - startIndex;
        string part = s.substr(startIndex, count);
        cout << part << endl;
        sum +=stoi(part);
        startIndex = fIndex +1;

    }
    cout << "숫자들의 합은" << sum ;
}

