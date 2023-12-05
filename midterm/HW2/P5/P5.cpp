#include <iostream>
#include <string>
using namespace std;



class MyIntStack {
    int *p;
    int size;
    int tos;
public:
    MyIntStack(){
        size = 0;
        p = new int[size];
        tos = 0;
    }
    MyIntStack(int a){
        size = a;
        p = new int[a];
        tos = 0;
    }
    MyIntStack( MyIntStack& s){
        this->size = s.size;
        this->p = new int[size];
        this->tos = s.tos;
        //cout << "복사생성자 실행" << endl;
    }
    ~MyIntStack(){
        delete[] p;
    }
    bool push(int n){
        if(tos == 10) return false;
        else {
            p[tos++] = n;
            return true;
        }
    }
    bool pop(int &n){
        if(tos == 0) return false;
        else {
            n = p[--tos];
            return true;
        }
    }

};


int main()  {
    cout << "20191545 전시온 " << endl;
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a;
    b.push(30);


    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값 " << n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << endl;  
}