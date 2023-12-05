#include <iostream>
using namespace std;


class Player{
    int number;
    int temp;
    string *name;

public:
    Player(int n){
        number = n;
        temp = -1;
        name  = new string[number];
        fflush(stdin);
        for(int i = 0; i<number; i++)   {
            cout << "참가자의 이름을 입력하세요. 빈칸 없이 >>";
            getline(cin, name[i]);
        
        }
    }
    ~Player()   {
        delete [] name;
    }
    
    string getName()    {
        temp ++;
        if(temp >=number)   temp = 0;
        string named = name[temp];
        return named;
    }
};

class WordGame{
    int num;
    string before, after;
public:
    WordGame()  {
        before = "아버지";
    }
    void game(){
        cout << "끝말 잇기 게임을 시작합니다." << endl;
        cout << "게임에 참가하는 인원은 몇명 입니까?";
        cin >> num;

        Player p(num);
        string named;
        cout << "시작하는 단어는 아버지입니다." << endl;

        while(true) {
            named = p.getName();
            cout << named << ">>";
            getline(cin, after);
            
            int size = before.size();
            if(before.at(size - 2) == after.at(0) && before.at(size-1) == after.at(1))    {
                before = after;
                continue;
            }
            else   {
                cout << named << "이 졌습니다.";
                break;
            }
        }
    }

};


int main()  {
    
    WordGame g;
    g.game();
}
