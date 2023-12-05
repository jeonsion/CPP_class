#include <iostream>
#include <string>
using namespace std;
class Histogram {
    string text;
public:
    Histogram(string text) { this->text = text; }
    Histogram& operator<<(string text);
    Histogram& operator<<(char c);
    void operator!();
};
Histogram& Histogram::operator<<(string text) {
    this->text += text;
    return *this;
}
Histogram& Histogram::operator<<(char c) {
    this->text += c;
    return *this;
}
void Histogram::operator!() {
    int alpha[26] = { 0 };
    int count=0;
    char c;
    for (int i = 0; i < text.size(); ++i) {
        c = text[i];
        if (isalpha(c) != 0) { // c 가 알파벳이라면
            c = tolower(text[i]); // 문자 text[i]를 소문자로 변환하여 리턴.
            alpha[(int)c - 97]++;
            ++count;
        }
    }
    cout << text << endl<< endl;
    cout << "총 알파벳 수 " << count << endl;
    for (int i = 0; i < 26; ++i) {
        cout << (char)(i + 97) << ":";
        for (int j = 0; j < alpha[i]; ++j)
            cout << "*";
        cout << endl;
    }
}
int main() {
    Histogram song("Wise men say, \nonly fools rush in But I can't help, \n");
    song << "falling" << " in love with you." << "- by "; // 히스토그램에 문자열 추가
    song << 'k' << 'i' << 't'; // 히스토그램에 문자 추가
    !song; // 히스토그램 그리기
}