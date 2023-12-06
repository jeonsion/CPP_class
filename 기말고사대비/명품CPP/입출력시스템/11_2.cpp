#include <iostream>
using namespace std;

int main() {
    char ch;
    int count = 0;
    while(true){
    	cin.get(ch);
        if(cin.eof())
        	break;
        if(ch == ' ')
        	count++;
	}
    cout << count << endl;
}