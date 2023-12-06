#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include <iomanip>
#include <cctype>
using namespace std;
 int main(){

     ifstream file;
     file.open("system.ini",ios::in|ios::binary);//이렇게 해야 바이트로 나타낼수있음
     //파일경로는 책에 적힌대로 하시면 됩니다.
     ofstream cpfile;
     cpfile.open("nanorc.txt");
     double percents;

     file.seekg(0,ios::end);
     int fileSize = file.tellg();
     int unit = fileSize/10;
     int count=0;
     char s[13];
     file.seekg(0,ios::beg);

     cout << "복사 시작..." << endl;
     for(int i=1; i<=10 ;i++){
         file.read(s,unit);
         int readCount = file.gcount();
         cpfile.write(s,readCount);
         count = count +unit;
         cout << "." << unit << "B " << i*10 << "%" << endl;
     }
     cout << count << "  복사완료" <<endl;
      file.close();
      cpfile.close();
     return 0;
 }