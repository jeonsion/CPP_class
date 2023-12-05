#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

class EvenRandom{

public:
    EvenRandom()    {
        srand((unsigned)time(0));
    }
    int next()  {
        int n = rand(); // 0 ~ RAND_MAX
        if(n % 2 == 1 && n + 1 < RAND_MAX) n+=1; //n이 홀 수 일 때, n + 1이 RAND_MAX보다 작을 때 n을 1 증가시킨다.
        return n;
    }
    int nextInRange(int min, int max)   {
        int n = rand() % (max - min + 1) + min;
        if(n % 2 == 1 && n + 1 <= max) n++;
        return n;
    }

};


int main()  {
    EvenRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;

    for(int i = 0; i<10; i++)   {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 짝수 10 개 --" << endl;
    for(int i = 0; i<10; i++)   {
        int n = r.nextInRange(2, 10);
        cout << n << ' ';
    }
    cout << endl;
}