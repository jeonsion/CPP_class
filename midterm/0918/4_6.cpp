#include <iostream>

using namespace std;

int main()  {
    cout << "입력할 정수의 개수는?" ;
    int n;
    cin >> n;

    if (n <= 0 )    return 0;

    int *p = new int[n];
    
    for(int i = 1; i< n+1 ; i ++) {
        cout << i << "번째 정수 : ";
        cin >> p[i];
    }
    int sum = 0;
    for(int i = 1; i < n +1 ; i++)
    {
        sum +=p[i];
    }
    cout << "평균 = " << sum/n << endl;

    delete [] p;
}