#include <iostream>
using namespace std;

class Ram{
    char mem[100 * 1024];
    int size;
public:
    Ram(){
        this->size = 100 * 1024;
    }
    Ram(int size){
        this->size = size;
    }
    ~Ram(){
        cout << "메모리 제거됨" << endl;
    }
    void write(int address, char value){
        this->mem[address] = value;
    }
    char read(int address){
        return this->mem[address];
    }
};


int main()  {
    Ram ram;
    ram.write(100, 20);
    ram.write(101, 30);
    char res = ram.read(100) + ram.read(101);
    ram.write(102, res);
    cout<< "102 번지의 값 "<<(int)ram.read(102) << endl;
}

