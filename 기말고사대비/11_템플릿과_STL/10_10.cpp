#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()  {
    
    vector<string> sv;
    string name;

    cout << "5개의 이름 입력하시오 " << endl;
    for(int i = 0; i<5; i++) {
        cout  << i+1 << ">>";
        getline(cin, name);
        sv.push_back(name);
    }

    name = sv.at(0);
    for(int i =1; i<sv.size(); i++) {
        if(name < sv.at(i)) {
            name = sv.at(i);
        }
    }
    cout << "사전에서 가장 뒤에 나오는 이름은 " << name << endl;
}