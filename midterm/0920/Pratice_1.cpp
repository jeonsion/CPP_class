#include <iostream>
#include <string>
using namespace std;
// 주문>> 에스프레소 4
// 8000입니다.
// 주문>> 카푸치노 2
// 5000입니다.
// 주문>> 아메리카노 4

int main()  {
    cout << "20191545 전시온 " << endl;
    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원 입니다." << endl;
    
    string s;
    int num;
    int sum = 0;
    
    
    while(true){
        if(sum >= 20000) break;
        cout << "주문>> ";
        cin >> s >> num;
        if( s == "에스프레소"){
            sum += 2000 * num;
            cout << 2000 * num << "입니다." << endl;
        }
        else if (s == "아메리카노")
        {
            sum += 2300 * num;
            cout << 2300 * num << "입니다." << endl;
        }
        else if (s == "카푸치노"){
            sum += 2500 * num;
            cout << 2500 * num << "입니다." << endl;
        }
    }    
    cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~ ";
    
}
