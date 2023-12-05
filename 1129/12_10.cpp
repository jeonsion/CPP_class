#include <iostream>
#include <fstream>
using namespace std;

int main()  {
    const char * file = "data.dat";

    ofstream fout;
    fout.open(file, ios::out | ios::binary);
    if(!fout){
        cout << "파일 열기 오류 ";
        return 0;
    }

    ifstream fin;
    fin.open(file, ios::in | ios::binary);
    if(!fin)    {
        cout << "파일 열기 오류 ";
        return 0;
    }


    int n[] = {0,1,2,3,4,5,6,7,8,9};
    double d = 3.154;

    fout.write((char*)n, sizeof(n));    //int 배열 n을 한번에 파일에 쓴다.
    fout.write((char*)(&d), sizeof(d)); //double 값 하나를 파일에 쓴다.
    fout.close();



    for(int i = 0; i< (sizeof(n)/sizeof(int)); i++) {
        n[i] = 0xFF;
    }
    d = 100.0;

    fout.write((char*)n, sizeof(n));    //int 배열 n을 한번에 파일에 쓴다.
    fout.write((char*)(&d), sizeof(d)); //double 값 하나를 파일에 쓴다.
    fout.close();



    fin.read((char*)n, sizeof(n));
    fin.read((char*)(&d), sizeof(d));

}