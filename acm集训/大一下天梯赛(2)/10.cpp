//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//const int N = 1e5 + 10;
//vector<int> G[N];
//int level[N];
//int t = 0;
//
//void bfs(int x)
//{
//	queue<int> que;
//	que.push(x);
//	while (!que.empty())
//	{
//		int temp = que.front();
//		que.pop();
//		for (int i = 0; i < G[temp].size(); i++)
//		{
//			if (!level[G[temp][i]])
//			{
//				que.push(G[temp][i]);
//				level[G[temp][i]] = level[temp] + 1;
//			}
//		}
//	}
//	int max = -1;
//	for (int i = 0; i <= t; i++)
//	{
//		if (max < level[i])
//		{
//			max = level[i];
//		}
//	}
//	cout << max + 1 << endl;
//	int flag = 0;
//	for (int i = 0; i <= t; i++)
//	{
//		if (max == level[i])
//		{
//			if (flag++)
//			{
//				cout << ' ';
//			}
//			cout << i;
//		}
//	}
//}
//
//int main()
//{
//	cin >> t;
//	int x = 0, grand = 0;
//	for (int i = 1; i <= t; i++)
//	{
//		cin >> x;
//		if (x == -1)
//		{
//			grand = i;
//		}
//		else
//		{
//			G[x].push_back(i);
//		}
//	}
//	bfs(grand);
//
//	return 0;
//}
//
