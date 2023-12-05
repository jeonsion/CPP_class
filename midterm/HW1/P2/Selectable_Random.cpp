#include <iostream>
using namespace std;

#include <cstdlib>
#include <ctime>


class Random{
public:
    Random();
    int next();
    int nextInRange(int a, int b);

};

Random::Random(){
    srand((unsigned)time(0));
}

int Random::next()  {
    return rand();
}

int Random::nextInRange(int a, int b)   {
    return rand() % (b-a + 1) + a;
}

int main()  {
    cout << "20191545 전시온" << endl;
    Random r;
    cout << "-- 0 에서 " << RAND_MAX << "까지의 랜덤 짝수 10 개 --" << endl;
    for(int i = 0; i < 10; i++) {
        int n = r.next();
        if (n % 2 == 0){
            cout << n << ' ';
        }
        else
            i = i-1;
    }

    cout << endl << endl << "--2에서 " << "4 까지의 랜덤 홀수 10개 --" << endl;
    for(int i = 0; i < 10; i ++){
        int n = r.nextInRange(2, 9);
        if (n % 2 != 0){
            cout << n << ' ';
        }
        else
            i = i-1;    }
    cout << endl;
    
}
