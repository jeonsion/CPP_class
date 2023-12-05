//시험에 나올 것 같으~ DEBUG 사용하는 것!
#include <iostream>
using namespace std;

#define DEBUG 0

class Circle{
    int radius;
public:
    Circle(){
        radius = 1;
        if ( DEBUG == 1){
            cout << "생성자 실행 radius" << radius << endl;
        }
    }
    Circle(int r);
    ~Circle();
    void setRadius(int r)
    { radius = r ;}
    double getArea()
    { return 3.14 * radius * radius; }
};

// Circle::Circle()    {
//     radius = 1;
//     cout << "생성자 실행 radius = " << radius << endl;
// }

Circle::Circle(int r)  {
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle()   {
    cout << "소멸자 실행 radius = " << radius << endl;
}

int main()  {
    cout << "생성하고자 하는 개수>> ";
    int n, radius;
    cin >> n;

    Circle *pArray = new Circle[n];
    for(int i = 0 ; i< n; i ++) {
        cout << "원" << i+1 << ":";
        cin >> radius;
        pArray[i].setRadius(radius);
    }

    int count = 0;
    for(int i = 0; i<n ; i++)   {
        cout << pArray->getArea() << " ";
        if (pArray->getArea() >= 100 && pArray->getArea() <=200) 
            count++;
        pArray++;
    }
    cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;

    delete [] pArray;

}
