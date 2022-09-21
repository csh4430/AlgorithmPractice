//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	double arr[1000];
//	double n = 0;
//	double m = 0;
//	double temp = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//		if (arr[i] > m)
//			m = arr[i];
//	}
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = arr[i] / m * 100;
//		temp += arr[i];
//	}
//
//	temp /= n;
//
//	cout.precision(9);
//	cout << temp;
//	return 0;
//}