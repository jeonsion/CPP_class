#include <iostream>
using namespace std;

#include "Ram.h"

int main()  {
    cout << "20191545 전시온" << endl;
    Ram ram;
    ram.write(100, 20); //100번지에 20 저장
    ram.write(101, 30);
    char res = ram.read(100) + ram.read(101);
    ram.write(102, res);
    cout << "102 번지의 값 = " << (int)ram.read(102) << endl;
}