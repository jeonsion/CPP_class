#include <iostream>
using namespace std;

int big(int a, int b, int c=100)    {
    if( a > b){
        if(a>100){
            return 100;
        }
        else if(a>50) 
            return 50;
        else
            return a;
    }
    else
        if(b>100){
            return 100;
        }
        else if(b>50) 
            return 50;
        else
            return b;
}


int main()  {
    cout << "20191545 전시온 " << endl;
    int x = big(3, 5);
    int y = big(300, 60);
    int z = big(30, 60, 50);
    cout << x << ' ' << y << ' ' << z << endl;
}