#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include <iomanip>
#include <cctype>
using namespace std;

 int main(){
     int count;
     ifstream file;
     file.open("/home/myunggi/.nanorc",ios::in|ios::binary);
    //파일경로는 책에 적힌대로 하시면 됩니다
    
     if(!file) {
         cout << "Open file failed ";
         return 0;
     }
    
     cout <<"파일 읽기 완료" << endl;
     ofstream cpfile;
     cpfile.open("nanorc1.txt");

     vector <string> v;

     file.seekg(0,ios::end);
     int size_file = file.tellg();//file의 byte값.
     file.seekg(0,ios::beg);
     string line;
     int num;
    
    
     while (getline(file,line))
     {
         v.push_back(line);
     }

     cout << "라인 번호를 입력하세요. 1보다 작은 값을 입력하면 종료" << endl;
     while (1)
     {
         cout <<":";
        
        cin >> num;
        if(num<=0){cout << "종료합니다.";return 0;}
        for(int i=0 ; i<v.size() ; i++){
            if(num == i){
                cout << v[i] << endl;
            }
        }
   }
    
    
     return 0;
 }

