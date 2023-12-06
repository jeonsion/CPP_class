#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include <iomanip>
#include <cctype>
using namespace std;

int main(){
   //words.txt 파일을 열어서 vector 라이브러리 를 사용하여 벡터별로 하나하나 저장을 한다.
   //그다음 while문을 사용하여 찾고자 하는 단어들을 입력을 해준다.
   string text,text1;
   ifstream file;
   vector <string>v;
   file.open("words.txt");
   
   if(file.is_open()){
       cout << " . . . words.txt 파일 로딩 완료" <<endl;
   }
   else return 0;
   
   while (!file.eof()) {
       getline(file,text);
       v.push_back(text);
     
   }
   
   cout << "검색을 시작합니다. 단어를 입력해 주세요." << endl;
   while (1) {
       int flag = 0;
       cout <<"단어>>";
       cin >> text1;
       if(text1 == "exit") return 0;
       
       for(int i=0 ; i < v.size() ;i++){
           int index = v[i].find(text1);
           if(index !=-1){
               flag =1;
               cout << v[i] << endl;
           }
              
       }
       if( flag == 0) cout << "발견할수 없습니다."<<endl;
       
       
   }
  
   
   
   
   
   
   return  0;
}
