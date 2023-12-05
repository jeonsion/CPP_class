#include <iostream>
#include <string>
using namespace std;

#include <string>

class Integer{
private:
    int Num;
    string Str;
public:
    Integer(int num);
    Integer(string str);
    int get();
    void set(int num);
    bool isEven();

};

inline Integer::Integer(int num){
    Num = num;
}
inline Integer::Integer(string str){
    Str = str;
    Num = stoi(Str);
}

inline int 
Integer::get(){
    return Num;
}

inline void
Integer::set(int num){
    Num = num;
}

inline bool
Integer::isEven(){
    if (Num % 2 == 0)
        return 1;
    else
        return 0;
}




int main()  {
    cout << "20191545 전시온" << endl;
    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven() << endl;
}