//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <iostream>
//#include <map>
//using namespace std;
//int vis[1005][1005], res[1005][1005];
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,1,0,-1 };
//char mp[1005][1005];
//int n, m, k, ans, id = 0;
//map<int, int> ma;
//
//void dfs(int x, int y)
//{
//	vis[x][y] = 1;
//	res[x][y] = id;
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = x + dx[i], ny = y + dy[i];
//		if (nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny])
//		{
//			if (mp[nx][ny] == '*')
//			{
//				ans++;
//			}
//			else
//			{
//				dfs(nx, ny);
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> m >> k;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> mp[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (mp[i][j] == '.' && !vis[i][j])
//			{
//				++id;
//				ans = 0;
//				dfs(i, j);
//				ma[id] = ans;
//			}
//		}
//	}
//	int a = 0, b = 0;
//	while (k--)
//	{
//		cin >> a >> b;
//		cout << ma[res[a - 1][b - 1]] << endl;
//	}
//
//	return 0;
//}
//
