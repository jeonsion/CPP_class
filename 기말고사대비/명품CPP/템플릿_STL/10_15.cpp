#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Circle{
    string name;
    int radius;
public:
    Circle(int radius, string name)
    {
        this->radius = radius;
        this->name = name;
    }
    double getArea(){ return 3.14 * radius * radius; }
    string getName(){ return name; }
};

int main()
{
    vector<Circle*> v;
    vector<Circle*>::iterator it;
    string name;
    int radius;
    int num;
    cout << "원을 삽입하고 삭제하는 프로그램입니다." << endl;
    while (true){
        cout <<"삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
        cin >> num;
        if(num == 4)
            break;
        if(num == 1)
        {
            cout << "생성하고자 하는 원의 반지름과 이름은 >> ";
            cin >> radius >> name;
            v.push_back(new Circle(radius, name));
        }
        if(num == 2)
        {
            cout << "삭제하고자 하는 원의 이름은 >> ";
            cin >> name;
            it = v.begin();
            while(it != v.end())
            {
                Circle *temp = *it;
                if(temp->getName() == name) {
                    it = v.erase(it);
                }
                else
                    it++;
            }

        }
        if(num == 3)
        {
            for(it = v.begin(); it != v.end(); it++)
            {
                Circle *temp = *it;
                cout << temp->getName() << endl;
            }
            cout << endl;
        }
    }


}
