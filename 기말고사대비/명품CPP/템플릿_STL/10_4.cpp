#include <iostream>
using namespace std;

template <class T>
bool search(T num, T *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(num == arr[i])
            return true;
    }
    return false;
}

int main()
{
    int iArr[5] = {1, 2, 3, 4, 5};
    if(search(3, iArr, 5))
        cout << 3 << " 찾았다!" << endl;
    else
        cout << 3 << " 못찾았다.." << endl;

    double dArr[5] = {1.2, 3.4, 4.5, 5.6, 7.8};
    if(search(5.6, dArr, 5))
        cout << 5.6 << " 찾았다!" << endl;
    else
        cout << 5.6 << " 못찾았다.." << endl;

    char cArr[5] = {'F', 'X', 'T', 'O', 'A'};
    if(search('Z', cArr, 5))
        cout << 'Z' << " 찾았다!" << endl;
    else
        cout << 'Z' << " 못찾았다.." << endl;

}
