#include <iostream>
#include <fstream>

using namespace std;

void showStreamState(ios& stream) {
    cout << "badbit = " << stream.bad() << endl;
    cout << "failbit = " << stream.fail() << endl;
    cout << "eofbit = " << stream.eof() << endl;
    cout << "goodbit = " << stream.good() << endl;
}

int main()  {
    const char* noExistFile = "noExistFile.txt";
    const char* existFile = "student.txt";

    ifstream fin(noExistFile);
    if(!fin)    {
        cout << noExistFile << " 열기 오류" << endl;
        showStreamState(fin);

        cout << existFile << "파일 열기" << endl;
        fin.open(existFile);
        showStreamState(fin);


    }

    int c;
    while((c=fin.get())!=EOF){
        cout.put((char)c);

    }

    cout << endl;
    showStreamState(fin);

    fin.close();


}