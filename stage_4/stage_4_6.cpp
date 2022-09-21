//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	int n, m;
//	cin >> m;
//
//	double* rate = new double[m];
//	for (int j = 0; j < m; j++) {
//
//		double sum = 0;
//		double avg = 0;
//		int cnt = 0;
//
//		cin >> n;
//		double* score = new double[n];
//		for (int i = 0; i < n; i++)
//		{
//			cin >> score[i];
//			sum += score[i];
//		}
//
//		avg = sum / n;
//
//		for (int i = 0; i < n; i++)
//		{
//			if (score[i] > avg)
//				cnt++;
//		}
//
//		rate[j] = cnt / (double)n * 100;
//	}
//
//	for (int j = 0; j < m; j++)
//	{
//
//		cout << fixed;
//		cout.precision(3);
//		cout << rate[j] << "%\n";
//	}
//	
//	return 0;
//}