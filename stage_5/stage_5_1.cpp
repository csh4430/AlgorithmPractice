#include <iostream>
using namespace std;

long long sum(int* a, int n) {
	long long result = 0;
	for (int i = 0; i < n; i++) {
		result += a[i];
	}
	return result;
}

int main(void)
{
	int* a;
	int n = 0;
	cin >> n;

	a = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << sum(a, n);

	return 0;
}