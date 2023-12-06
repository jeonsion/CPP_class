#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    
    ifstream fin("/home/myunggi/.nanorc");//파일명은 제가 따로 지정한것입니다. 책에 적힌대로 하시면 됩니다.
    string line;
    int i=1;
    if(!fin){
        cout << "Open file failed" ;
        return 0;
    }
    while(getline(fin,line))
    {
        cout << i << ": " << line << endl;
        i++;
    }
    
    
    
    return 0;
}