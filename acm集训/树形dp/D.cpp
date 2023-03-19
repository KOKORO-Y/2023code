#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int maxn = 3e2 + 5;

int n = 0, m = 0;
int S[maxn] = { 0 };
vector<int> G[maxn];
int f[maxn][maxn][maxn];

void dfs(int x)
{
	for (auto v : G[x])
	{
		dfs(v);
	}
	f[x][1][1] = S[x];
	f[x][1][0] = 0;
	for (int i = 2; i < G[x].size() + 2; i++)
	{
		int v = G[x][i - 2];
		for (int j = 0; j <= n; j++)
		{
			for (int k = 0; k < j; k++)
			{
				f[x][i][j] = max(f[x][i][j], f[v][G[v].size() + 1][k] + f[x][i - 1][j - k]);
			}
		}
	}

}

int main()
{
	ios::sync_with_stdio, cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		int x = 0;
		cin >> x >> S[i];
		G[x].push_back(i);
	}
	dfs(0);
	cout << f[0][G[0].size() + 1][m + 1];
	return 0;
}

