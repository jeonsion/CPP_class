#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int num = 0, sum = 0;
    while(true)
    {
        cout << "정수를 입력하세요(0을 입력하면 종료)" << endl;
        cin >> num;
        if(num == 0)
            break;
        sum += num;
        v.push_back(num);

        for_each(v.begin(), v.end(), [](int n) {cout << n << " ";});
        cout << endl << "평균 = " << (double)sum / v.size() << endl;
    }
}
