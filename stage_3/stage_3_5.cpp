//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	int t;
//	int a, b;
//	cin >> t;
//	int* temp = new int[t];
//
//	for (int i = 0; i < t; i++) {
//		cin >> a >> b;
//		if (a <= 0 || b >= 10) return 0;
//		temp[i] = a + b;
//	}
//
//	for (int i = 0; i < t; i++) {
//		cout << "Case #" << i + 1 << ": " << temp[i] << '\n';
//	}
//	return 0;
//}