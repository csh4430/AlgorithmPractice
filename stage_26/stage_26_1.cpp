#include <complex.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> arr[100001];
int visited[100001] = {0,};
int rh[100001] = {0,};
int cnt = 1;
void dfs(int r)
{
	visited[r] = true;
	rh[r] = cnt;
	cnt++;
	for(int x : arr[r])
	{
		if(!visited[x])
		{
			dfs(x);
		}
	}
}
int main(void)
{
	int n, m, r;
	int nT;
	int mT;
	cin >> n >> m >> r;
	for(int i = 0; i < m; i ++)
	{
		cin >> nT >> mT;
		arr[nT].push_back(mT);	
		arr[mT].push_back(nT);	
	}
	for (int i = 0; i < n; i++) {
		sort(arr[i].begin(), arr[i].end());
	}
	dfs(r);
	for(int i = 1; i <= n; i++)
	{
		cout << rh[i] << '\n';
	}
	return 0;
}