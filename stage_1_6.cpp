#include <iostream>

using namespace std;

int main(void)
{
	double a, b;
	

	cin >> a >> b;
	double c = a / b;
	cout.precision(6);
	cout << fixed;
	cout << c;

	return 0;
}