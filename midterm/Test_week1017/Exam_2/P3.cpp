#include <iostream>
using namespace std;

class Stack{
    int p[10];
    int tos;
public:
    Stack() {
        tos = 0;    //tos는 0부터 시작
    }
    Stack& operator<< (int a) {     //반환 값은 Stack&이므로 *this를 리턴해줘야함, 
                                    //Stack을 리턴해야하는 이유는 << 연산자를 계속해서 사용하기 위해
        if(tos == 10){      //tos가 10이면 꽉찬 것
            cout << "스택 꽉참" << endl;
            return *this;   //tos가 10이면 *this를 리턴해줌
        }
        p[tos++] = a;       //tos가 10이 아니면 p[tos]에 a를 넣고 tos를 1 증가시킴
        return *this;       //this를 리턴해줌 이유 : << 연산자를 계속해서 사용하기 위해
    }
    bool operator! ()  {    //bool을 리턴하는 이유는 스택이 비어있는지 아닌지를 알기 위해
        if(tos == 0) return true;   //tos가 0이면 비어있는 것
        else return false;        //tos가 0이 아니면 비어있지 않은 것
    }

    Stack& operator>> (int &b)  {       //int &b를 리턴하는 이유는 b를 참조형으로 받아서 값을 바꿔주기 위해
        if(tos == 0)    {
            cout << "스택 비어 있음" << endl;
            return *this;
        }
        b = p[--tos];
        return *this;
    }


};
    



int main()  {

    Stack stack;
    stack << 3 << 5 << 10;  //3, 5, 10을 스택에 넣음
    
    while (true)    {
        if(!stack) break;
        int x;
        stack >> x;
        cout << x <<  ' ';
        
    }

    cout << endl;
}