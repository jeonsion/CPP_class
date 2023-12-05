#include <iostream>
using namespace std;

class ArrayUtility2{

public: //public으로 함수만 가지고 있는 class임.
    static int* concat(int s1[], int s2[], int size){
        int *arr = new int[size * 2];   //동적할당
        for(int i = 0; i<size; i++) {
            arr[i] = s1[i];
        }
        for(int i = 5; i<size*2; i++)   {
            arr[i] = s2[i-size];   //5씩 빼서 arr[5]에 s2[0] 할당하는 방법
        }
        return arr;
    }
    static int* remove(int s1[], int s2[], int size, int& retSize){
        int *arr = new int[size];
        int cnt = 0;
        
        for(int i = 0; i<5; i++)    {
            for(int j = 0; j<5; j++)    {
                if(s1[i] == s2[j]){
                    break;      //s1[i]에 있는 배열이 s2[i]에도 있으면 break -> 새로운 배열에 추가 x
                }
                if(j == size-1) arr[cnt++] = s1[i]; //j를 5번 도는데 같은 배열이 없으면 새로운 배열에 추가, cnt++
            }
        }
        if (cnt == 0) return NULL;
        
        retSize = cnt;
        cout << "배열 x[]에서 배열 y[]를 뺀 개수는 : " << retSize << endl;

        return arr;
    }
    
};


int main()  {

    cout << "20191545 전시온 " << endl;
    cout << "정수를 5개 입력하라. 배열 x에 삽입한다 >> ";
    
    int arr1[5];
    cin >> arr1[0] >> arr1[1] >> arr1[2]  >> arr1[3] >> arr1[4];

    cout << endl;


    cout << "정수를 5개 입력하라. 배열 y에 삽입한다 >> ";
    int arr2[5];
    cin >> arr2[0] >> arr2[1] >> arr2[2]  >> arr2[3] >> arr2[4];

    cout << "합친 정수 배열을 출력한다." << endl;

    int* res = ArrayUtility2::concat(arr1, arr2, 5);    //intger 포인터형 배열이 할당

    for(int i = 0; i<10; i++)   {
        cout << res[i] << ' ';
    }
    cout << endl;

    delete[] res;

    int retSize;
    int* res_sub= ArrayUtility2::remove(arr1, arr2, 5, retSize);

    for(int i = 0; i<retSize; i++)  {
        cout << res_sub[i] << ' '; 
    }



}