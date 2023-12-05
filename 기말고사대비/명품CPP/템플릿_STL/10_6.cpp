#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int &retsize)
{
    for(int i = 0; i < sizeMinus; i++)
    {
        for(int j = 0; j < sizeSrc;)
        {
            if(minus[i] == src[j])
            {
                for(int k = j; k < sizeSrc - 1; k++)
                {
                    src[k] = src[k + 1];
                }
                sizeSrc--;
                if(sizeSrc == 0)
                    return src;
                continue;
            }
            j++;
        }
    }
    retsize = sizeSrc;
    T *arr = new T[retsize];
    for(int i = 0; i < retsize; i++)
    {
        arr[i] = src[i];
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
    int size = 0;
    int iArr1[5] = {1, 2, 3, 4, 5};
    int iArr2[5] = {4, 7, 5, 9, 10};
    int *iArr = remove(iArr1, 5, iArr2, 5, size);
    print(iArr, size);

    double dArr1[5] = {1.2, 3.4, 4.5, 5.6, 7.8};
    double dArr2[5] = {8.9, 3.4, 2.3, 4.5, 1.2};
    double *dArr = remove(dArr1, 5, dArr2, 5, size);
    print(dArr, size);

    char cArr1[5] = {'A', 'B', 'C', 'D', 'E'};
    char cArr2[5] = {'A', 'G', 'H', 'I', 'E'};
    char *cArr = remove(cArr1, 5, cArr2, 5, size);
    print(cArr, size);

}
