//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//int n, k, t, ans = 0;
//bool vis[9] = { 0 };
//char chess[9][9];
//
//void dfs(int cnt, int row)
//{
//	if (cnt == k)
//	{
//		ans++;
//		return;
//	}
//	if (row >= n)
//	{
//		return;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (chess[row][i] == '#' && !vis[i])
//		{
//			vis[i] = 1;
//			dfs(cnt + 1, row + 1);
//			vis[i] = 0;
//		}
//	}
//	dfs(cnt, row + 1);
//}
//
//int main()
//{
//	while (cin >> n >> k && n != -1 && k != -1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			cin >> chess[i];
//		}
//		memset(vis, 0, sizeof(vis));
//		dfs(0, 0);
//		cout << ans << endl;
//		ans = 0;
//	}
//
//	return 0;
//}
//
