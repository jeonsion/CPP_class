//main.cpp
#include <iostream>
#include <ctime>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include "AbstractPlayer.h"
#include "Human.h"
#include "Com.h"
using namespace std;





int main() {    
    srand(unsigned(time(0)));
    string human_name,mugi;

    cout << "*** 컴퓨터와 사람이 가위 바위 보 대결을 펼칩니다. ***" << endl;
    cout <<"선수 이름을 입력하세요>>";
    getline(cin, human_name);
    Human a(human_name);
    Com c("com");
    while (1) {
        string s1 =  a.turn();
        string s2 =  c.turn();

        cout << "Computer: "<< s2;
         if( (s1=="가위" && s2 == "바위") || (s1=="바위" && s2 == "보") || (s1=="보" && s2 == "바위")){
            cout << "com is winner" <<endl;
            }

        else if((s2=="가위" && s1 == "바위") || (s2=="바위" && s1 == "보") || (s2=="보" && s1 == "바위")){
            cout << a.getName() << " is winner" <<endl;
            }

        else {
            cout << "same" <<endl;
            }
            
    }
    return 0;
}

//Com.cpp
#include "Com.h"



string Com::turn(){
    int n=rand()%3;
    return gbb[n];
}
//Com.h
#pragma once
#include <iostream>
#include "AbstractPlayer.h"
using namespace std;

class Com : public AbstractPlayer{
public:
    Com(string name) :AbstractPlayer("com"){}
    string turn();
};
//Human.cpp
#include "Human.h"
using namespace std;

string Human::turn(){
        while (true) {  
            cout << getName() << ">>";
            string muggi;
            cin >> muggi;
            if(muggi == gbb[0] || muggi == gbb[1] || muggi == gbb[2])

                return muggi;

            else continue;
        }
    }
//Human.h
#pragma once
#include <iostream>
#include "AbstractPlayer.h"
using namespace std;

class Human: public AbstractPlayer{
public:
    Human(string name) : AbstractPlayer(name){}
    string turn();
};

//AbstractPlayer.cpp

#include "AbstractPlayer.h"
using namespace std;

AbstractPlayer::AbstractPlayer(string name){
        this->name= name;
        gbb[0] = "가위" ; gbb[1] = "바위" ; gbb[2] = "보";
    }

//AbstractPlayer.h
#pragma once
#include <iostream>
using namespace std;



class AbstractPlayer{
    string name;
protected:
    string gbb[3];
public:
    AbstractPlayer(string name);

    virtual string turn() =0;
    string getName(){return  name;}

};