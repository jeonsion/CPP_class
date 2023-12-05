#include <iostream>
using namespace std;

template <class T>
void reverseArray(T *arr, int size)
{
    for(int i = 0; i < size / 2; i++)
    {
        swap(arr[i], arr[size - i - 1]);
    }
}

int main()
{
    int iArr[5] = {1, 2, 3, 4, 5};
    reverseArray(iArr, 5);
    for(int i = 0; i < 5; i++)
    {
        cout << iArr[i] << " ";
    }
    cout << endl;

    double dArr[5] = {1.2, 3.4, 4.5, 5.6, 7.8};
    reverseArray(dArr, 5);
    for(int i = 0; i < 5; i++)
    {
        cout << dArr[i] << " ";
    }
    cout << endl;
    char cArr[5] = {'F', 'X', 'T', 'O', 'A'};
    reverseArray(cArr, 5);
    
    for(int i = 0; i < 5; i++)
    {
        cout << cArr[i] << " ";
    }
    cout << endl;

}
