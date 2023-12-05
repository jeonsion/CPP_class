#include <iostream>
#include <vector>
#include <random>
using namespace std;

class Word{
    string jpn;
    string kor;
public:
    Word(){
        jpn = "";
        kor = "";
    }
    Word(string eng, string kor) { this->jpn = eng; this->kor = kor;}
    void setJpn(string eng){this->jpn = eng;}
    void setKor(string kor){this->kor = kor;}

    string getJpn(){return jpn;}
    string getKor(){return kor;}
};

int main()
{
    string jpn;
    string kor;
    int num = 0;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist;
    Word words[4];
    vector<Word> v = {Word("もも", "복숭아"), Word("いちご", "딸기"),
                      Word("みかん", "귤"), Word("バナナ", "바나나")};
    cout << "***** 일어 어휘 테스트를 시작합니다. *****" << endl;
    while(true)
    {
        cout << "어휘 삽입: 1, 어휘 테스트: 2, 프로그램 종료:그외키 >> ";
        cin >> num;
        if(num == 1)
        {
            cout << "일어 단어에 おわり를 입력하면 입력 끝" << endl;
            while (true)
            {
                cout << "일어 >>";
                cin >> jpn;
                if(jpn == "おわり")
                    break;
                cout << "한글 >>";
                cin >> kor;
                Word temp(jpn, kor);
                v.push_back(temp);
            }
        }
        else if(num == 2)
        {
            int n, ans, pos;
            cout << "일어 어휘 테스트를 시작합니다. 1 ~ 4 외 다른 입력시 종료.";
            while (true)
            {
                Word temp;
                for(int i = 0; i < 4; i++)
                {
                    words[i] = temp;
                }
                ans = dist(gen) % v.size();
                cout << v[ans].getJpn() << "?" <<endl;
                pos = dist(gen) % 4;
                words[pos] = v[ans];
                int cnt = 1;
                while (cnt < 4)
                {
                    n = dist(gen) % v.size();
                    for(int i = 0; i < 4; i++)
                    {
                        if(v[n].getJpn() == words[i].getJpn())
                            break;
                        if(i == 3)
                        {
                            for(int j = 0; j < 4; j++)
                            {
                                if(words[j].getJpn() == words[j].getKor())
                                {
                                    words[j] = v[n];
                                    cnt++;
                                    break;
                                }
                            }
                        }
                    }
                }
                for(int i = 0; i < 4; i++)
                {
                    cout << "(" << i + 1 << ") " << words[i].getKor() << " ";
                }
                int result = 0;
                cout << ":>>";
                cin >> result;
                if(1 <= result && result <= 4)
                {
                    if(result - 1 == pos)
                        cout << "Excellent !!" << endl;
                    else
                    {
                        cout << "No. !!" << endl;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        else
            break;
        cout << endl;
    }
}
