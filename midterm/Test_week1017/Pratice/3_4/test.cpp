#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	char str[10000];
	int alphabet[26] = { 0 }, ind;

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다. 텍스트의 끝은 ;입니다. 10000개까지 가능합니다.\n";
	cin.getline(str, 10000, ';');
	cout << "총 알파벳 수 " << strlen(str) << '\n';

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			ind = (int)(str[i] - 'A');
			alphabet[ind]++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			ind = (int)(str[i] - 'a');
			alphabet[ind]++;
		}
		else { }
	}

	for (int i = 0; i < 26; i++)
	{
		cout << (char)('a' + i) << " ("<<alphabet[i]<<")\t : ";
		for (int j = 0; j < alphabet[i]; j++)
		{
			cout << "*";
		}
		cout<<"\n";
	}
	return 0;
}