#include <iostream>
using namespace std;

template <class T>
T biggest(T *arr, int size)
{
    T max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }
    return max;
}

int main()
{
    int iArr[5] = {1, 2, 3, 4, 5};
    cout << biggest(iArr, 5) << endl;
    double dArr[5] = {1.2, 3.4, 4.5, 5.6, 7.8};
    cout << biggest(dArr, 5) << endl;
    char cArr[5] = {'F', 'Z', 'T', 'O', 'A'};
    cout << biggest(cArr, 5);
}