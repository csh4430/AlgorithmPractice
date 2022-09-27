#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str = "";
	int arr[26] = { 0, };
	int max = 0;
	char res = ' ';
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		char ch = str[i];
		char low = 'a';
		char cap = 'A';
		for (int j = 0; j < 26; j++) {
			if (ch == low + j || ch == cap + j)
			{
				arr[j] ++;
				break;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max < arr[i])
		{
			max = arr[i];
			res = 'A' + i;
		}
		else if (max == arr[i])
		{
			res = '?';
		}
	}

	cout << res;

	return 0;
}