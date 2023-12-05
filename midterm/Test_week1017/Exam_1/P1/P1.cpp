#include <iostream>
using namespace std;

int main()  {
    
    int a, b;
    int sum = 0;

    cout << "첫번째 수 :" ;
    cin >> a;
    cout << "두번째 수 :" ;
    cin >> b;

    //첫 번째 수 두번째 수 비교해야하지 않음..?
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