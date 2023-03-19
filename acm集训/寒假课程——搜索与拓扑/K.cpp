#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
const int N = 2e5 + 10, MAX_K = 1e6;
vector<int> ve[N];
int n, m;
bool vis[N];
int res = 0;

void dfs(int u)
{
	if (res >= MAX_K)
	{
		res = MAX_K;
		return;
	}
	res++;
	vis[u] = 1;
	for (auto c : ve[u])
	{
		if (!vis[c])
		{
			dfs(c);
		}
	}
	vis[u] = 0;
}

int main()
{
	cin >> n >> m;
	int x = 0, y = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> x >> y;
		ve[x].push_back(y), ve[y].push_back(x);
	}
	dfs(1);
	cout << res << endl;
	return 0;
}

