#include <iostream>
#include <string>
using namespace std;


class Board{    
public:
    static int cnt;    //게시판에 추가되는 글의 수
    static string *notices; //게시판에 올라오는 글 저장할 배열을 가리킬 포인터 변수

    static void add(string sentence){
        notices[cnt++] = sentence;  //noetices[cnt]는 각각의 글 첫번째 주소를 가리킴, 따라서 추가할 때 마다 각각의 글자를 가리키게 됨
    }
    static void print(){
        cout << "********** 게시판 입니다. **********" << endl;
        for(int i = 0; i<cnt; i++)  {
            cout << i << " : " << notices[i] << endl;
        }
        cout << endl;
    }

};

int Board::cnt = 0;     //static 전역변수 초기화
string* Board::notices = new string[100];   //글 저장할 전역변수 배열 초기화



int main()  {
    Board::add("중간고사는 감독 없는 자율 시험입니다.");
    Board::add("코딩 라운지 많이 이용해 주세요.");
    Board::print();
    Board::add("전하윤 학생이 경진대회 입상했습니다. 축하해주세요");
    Board::print();

}