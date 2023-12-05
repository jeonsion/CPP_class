#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;

class Nation{
    string nation;
    string capital;
public:
    Nation(string nation, string capital){
        this->nation = nation;
        this->capital = capital;
    }
    void setInfo(string nation, string capital)
    {
        this->nation = nation;
        this->capital = capital;
    }
    string getNation(){
        return nation;
    }
    string getCapital(){
        return capital;
    }
};

int main()
{
    vector<Nation> v = {Nation("한국", "서울"), Nation("일본", "도쿄"),Nation("영국", "런던"),
                        Nation("미국", "와싱"), Nation("독일", "베를린"), Nation("중국", "베이징"),
                        Nation("프랑스", "파리"), Nation("태국", "방콕"), Nation("호주", "캔버라")};
    vector<Nation>::iterator it;
    cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << endl;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution dist;

    int num = 0;
    string nation, capital;
    while (true)
    {
        cout << "정보 입력: 1, 퀴즈: 2, 종료 :3 >> ";
        cin >> num;
        if(num == 1)
        {
            cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << endl;
            cout << "나라와 수도를 입력하세요(no no이면 입력끝)" << endl;
            while(true)
            {
                bool chk = true;
                cout << v.size() + 1 << ">>";
                cin >> nation >> capital;
                if(nation == "no" && nation == "no")
                    break;
                for(it = v.begin(); it != v.end(); it++)
                {
                    if(it->getNation() == nation)
                    {
                        cout << "already exists !!" << endl;
                        chk = false;
                    }
                }
                if(chk)
                {
                    Nation temp(nation, capital);
                    v.push_back(temp);
                }
            }
        }
        if(num == 2)
        {
            while(true)
            {
                int n = dist(gen) % v.size();
                cout << v[n].getNation() << "의 수도는?";
                cin >> capital;
                if(capital == "exit")
                    break;
                else if(capital == v[n].getCapital())
                    cout << "Correct !!" << endl;
                else
                    cout << "NO !!" << endl;
            }
        }
        if(num == 3)
            break;
    }
}
