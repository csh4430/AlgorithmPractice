#include <iostream>

using namespace std;

int max(int a, int b, int c) {
	int temp;
	if (a > b) {
		temp = a;
	}
	else {
		temp = b;
	}
	if (temp < c) {
		temp = c;
	}
	return temp;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && b == c) {
		cout << 10000 + a * 1000;
	}
	else if (a == b || a == c) {
		cout << 1000 + a * 100;
	}
	else if (b == c) {
		cout << 1000 + b * 100;
	}
	else {
		cout << max(a, b, c) * 100;
	}
	return 0;
}