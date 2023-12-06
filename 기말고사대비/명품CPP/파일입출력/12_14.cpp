#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include <iomanip>
#include <cctype>
using namespace std;



 int main(){
     int count=0;
     ifstream file;
     file.open("/home/myunggi/.nanorc",ios::in|ios::binary);
     //파일경로는 책에 있는대로 하면 됩니다.
     char c[1];
     while (file.read(c,1))
     {
         count++;
     }
    
     cout << count;
     return 0;
    }