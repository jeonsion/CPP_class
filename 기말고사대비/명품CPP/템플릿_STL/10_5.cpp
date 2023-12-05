#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb){
    T *arr = new T[sizea + sizeb];
    for(int i = 0; i < sizea; i++)
    {
        arr[i] = a[i];
    }
    for(int i = sizea; i < sizeb + sizea; i++)
    {
        arr[i] = b[i - sizea];
    }
    return arr;
}

template <class T>
void print(T *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int iArr1[5] = {1, 2, 3, 4, 5};
    int iArr2[5] = {6, 7, 8, 9, 10};
    int *iArr = concat(iArr1, 5, iArr2, 5);
    print(iArr, 10);

    double dArr1[5] = {1.2, 3.4, 4.5, 5.6, 7.8};
    double dArr2[5] = {8.9, 0.1, 2.3, 4.5, 6.7};
    double *dArr = concat(dArr1, 5, dArr2, 5);
    print(dArr, 10);

    char cArr1[5] = {'A', 'B', 'C', 'D', 'E'};
    char cArr2[5] = {'F', 'G', 'H', 'I', 'J'};
    char *cArr = concat(cArr1, 5, cArr2, 5);
    print(cArr, 10);

}
