#include <iostream>
using namespace std;

ostream& fivestart(ostream& outs) {
    return outs << "*****";
}

ostream & rightarrow(ostream& outs) {
    return outs << "--->";
}

ostream & beep(ostream& outs) {
    return outs << "\n"; //삑소ㅓ리 발생
}

int main()  {
    cout << "벨이 울립니다 " << beep << endl;
    cout << "C" <<rightarrow << "C++" << rightarrow << "Java" << rightarrow << "Python" << endl;
    cout << "Visual" << fivestart << "C_++" << endl;
}