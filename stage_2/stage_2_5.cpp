//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	unsigned int h, m;
//	int h2, m2;
//
//	cin >> h >> m;
//
//	if (h > 24 || m > 60)
//		return 0;
//
//	h2 = h;
//	m2 = m - 45;
//
//	if (m2 < 0) {
//		h2 -= 1;
//		m2 += 60;
//		if (h2 < 0)
//			h2 += 24;
//	}
//
//	cout << h2 << ' ' << m2;
//
//	return 0;
//}