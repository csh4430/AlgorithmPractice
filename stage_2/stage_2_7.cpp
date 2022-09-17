//#include <iostream>
//
//using namespace std;
//
//int max(int a, int b, int c, int* ptr = nullptr) {
//	int temp;
//	if (a > b) {
//		temp = a;
//		if(ptr != nullptr)
//			*ptr = 0;
//	}
//	else {
//		temp = b;
//		if (ptr != nullptr)
//			*ptr = 1;
//	}
//	if (temp < c) {
//		temp = c;
//		if (ptr != nullptr)
//			*ptr = 2;
//	}
//	return temp;
//}
//
//int main(void)
//{
//	int dice[3];
//	int temp[3] = {0,};
//	int idx;
//	int cnt;
//	int result = 0;
//	cin >> dice[0] >> dice[1] >> dice[2];
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (dice[i] == dice[j])
//				temp[i]++;
//		}
//	}
//
//	cnt = max(temp[0], temp[1], temp[2], &idx);
//
//	switch (cnt) {
//	case 3:
//		result = 10000 + dice[idx] * 1000;
//		break;
//	case 2:
//		result = 1000 + dice[idx] * 100;
//		break;
//	case 1:
//		result = max(dice[0], dice[1], dice[2]) * 100;
//	}
//
//	cout << result;
//
//	return 0;
//}