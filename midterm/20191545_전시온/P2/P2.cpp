#include <iostream>
using namespace std;

int main()  {
    cout << "20191545 전시온 "<< endl;
    int a, b;
    int sum = 0;

    cout << "첫번째 수 :" ;
    cin >> a;
    cout << "두번째 수 :" ;
    cin >> b;

    if (a >= b) {
        for(int i = 0; i< a-b+1; i++) {
            sum += b+i;
        }
    }
    else if (a < b){
        for(int i =0; i< b-a+1; i++) {
            sum += a+i;
        }
    }
    cout << a << " 에서 " << b << "까지 더한 결과는 " << sum << "입니다." << endl;
}