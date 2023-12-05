#include <iostream>
using namespace std;


int main()  {
    cout << "20191545 전시온 "<< endl;

    int num;
    float sum = 0;
    float mean  = 0;

    cout << "입력할 정수의 개수는? ";
    cin >> num;

    float *p = new float[num];      // 동적 할당

    

    for(int i = 0; i<num; i++) {
        cout << i+1 << "번째 정수 : ";
        cin >> p[i];
        sum += p[i];
    }

    cout << "합 = " << sum << endl;
    cout << "평균 = " << sum/num << endl;
}       