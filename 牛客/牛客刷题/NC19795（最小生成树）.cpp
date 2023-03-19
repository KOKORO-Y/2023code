#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
//队伍完全图 将点权最小的点和其他所有点连线就是最新生成树

long long int G[10001][10001];
int w[100001];
int lowcost[100001];
const int inf = 0x3f3f3f3f;
int n = 0, m = 0;

void prim()
{
	int cnt = 0;
	int minn = inf;
	long long int ans = 0;
	int index = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			lowcost[i] = 0;
		}
		else
		{
			lowcost[i] = G[1][i];
		}
	}
	for (int i = 2; i <= n; i++)
	{
		minn = inf;
		for (int j = 1; j <= n; j++)
		{
			if (minn > lowcost[j] && lowcost[j] != 0)
			{
				minn = lowcost[j];
				index = j;
			}
		}
		if (minn == inf)
		{
			break;
		}
		cnt++;
		ans += G[index][1];
		lowcost[index] = 0;
		for (int j = 2; j <= n; j++)
		{
			if (lowcost[j] != 0 && G[index][j] < lowcost[j])
			{
				lowcost[j] = G[index][j];
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	//vector<int> G;
	cin >> n;
	m = n * (n - 1) / 2;
	for (int i = 1; i <= m; i++)
	{
		cin >> w[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			G[i][j] = w[i] + w[j];
			G[j][i] = w[i] + w[j];
		}
	}

	prim();

	return 0;
}

