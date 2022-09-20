//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	int n;
//	int m = 0;
//	int cnt = 0;
//	int temp;
//	cin >> n;
//	if (n < 0 || n > 99)
//		return 0;
//	int a = n;
//	do {
//		temp = a / 10 + (a % 10);
//		m = (a % 10) * 10 + (temp % 10);
//		cnt++;
//		a = m;
//	} while (m != n);
//	
//	cout << cnt;
//	return 0;
//}