//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	char str[100][81];
//	int n;
//	int len = 0;
//	int cnt = 0;
//	int score = 0;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> str[i];
//	}
//	for (int i = 0; i < n; i++) {
//		score = 0;
//		cnt = 0;
//		len = 0;
//		while (str[i][len] != '\0')
//		{
//
//			if (str[i][len] == 'O') {
//				cnt++;
//				score += cnt;
//			}
//			else
//				cnt = 0;
//			len++;
//		}
//
//		cout << score << '\n';
//	}
//
//	return 0;
//}