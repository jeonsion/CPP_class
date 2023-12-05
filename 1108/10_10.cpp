#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()  {
    vector<string> sv;
    string name;

    cout << "이름을 5개 입력하라" << endl;
    for(int i = 0; i<5; i++)    {
        cout << i+1 << ">>";
        getline(cin, name);
        sv.push_back(name); //입력 받은 name을 vector에 바로 넣기
    }
    name = sv[0];
    for( int i = 0; i<sv.size(); i++)   {
        if(name < sv[i])
            name = sv[i];
    }
    cout << "사전에서 가장 뒤에나오는 이름은 : " << name << endl;

}
