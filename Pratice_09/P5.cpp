#include <iostream>
#include <string>
using namespace std;


class BaseArray{
private:
    int capactiy;
    int* mem;
protected:
    BaseArray(int capacity = 100)   {
        this->capactiy = capacity;
        mem = new int [capacity];
    }
    ~BaseArray()    {delete [] mem; }
    void put(int index, int val)    {
        mem[index] = val;
    }
    int get(int index)  {return mem[index];}
    int getCapacity()   { return capactiy;}
};

class Myqueue : protected BaseArray{
    int tos;
public:
    Myqueue(int num) : BaseArray(num)   {
        tos = 0;
    }
    void enqueue(int num)   {
        if(tos == 10){
            cout << "스택 꽉참" << endl;
        }
        else{
            mem[tos++] = num;
        }


    }
    int capacity()  {
        return getCapacity();
    }
    int length()    {
        return 5;
    }
    int dequeue()  {

    }
};

int main()  {
    Myqueue mQ(100);
    int n;

    cout << "큐에 삽입할 5개의 정수를 입력하라 >>";
    for(int i = 0; i< 5; i++)   {
        cin >> n;
        mQ.enqueue(n);  //큐에 삽입
    }

    cout << "큐의 용량 : " << mQ.capacity() << ", 큐의 크기 : " <<mQ.length() << endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다 >> " ;
    while(mQ.length() != 0) {
        cout << mQ.dequeue() << ' ';
    }
    cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
}