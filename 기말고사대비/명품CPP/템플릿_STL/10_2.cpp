#include <iostream>
using namespace std;

template <class T>
bool equalArray(T *arr1, T *arr2, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    int iArr1[5] = {1, 2, 3, 4, 5};
    int iArr2[5] = {1, 2, 3, 4, 5};
    if(equalArray(iArr1, iArr2, 5))
        cout << "같다" << endl;
    else
        cout << "다르다" << endl;
    double dArr1[5] = {1.2, 3.4, 4.5, 5.6, 7.8};
    double dArr2[5] = {1.2, 4.5, 5.6, 9.0, 7.8};
    if(equalArray(dArr1, dArr2, 5))
        cout << "같다" << endl;
    else
        cout << "다르다" << endl;
    char cArr1[5] = {'F', 'X', 'T', 'O', 'A'};
    char cArr2[5] = {'F', 'Z', 'T', 'O', 'A'};
    if(equalArray(cArr1, cArr2, 5))
        cout << "같다" << endl;
    else
        cout << "다르다" << endl;
}