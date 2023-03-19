//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//int maze[5][5];
//typedef pair<int, int> P;
//P father[5][5];
//int vis[5][5];
//int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
//
//void bfs()
//{
//	queue<P> que;
//	que.push(P(4, 4));
//	vis[4][4] = 1;
//	while (que.size())
//	{
//		P temp = que.front();
//		que.pop();
//		if (temp.first == 0 && temp.second == 0)
//		{
//			break;
//		}
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = temp.first + dx[i];
//			int ny = temp.second + dy[i];
//			if (nx >= 0 && ny >= 0 && nx < 5 && ny < 5 && vis[nx][ny] == 0 && maze[nx][ny] == 0)
//			{
//				que.push(P(nx, ny));
//				vis[nx][ny] = 1;
//				father[nx][ny].first = temp.first;
//				father[nx][ny].second = temp.second;
//			}
//		}
//	}
//}
//
//void print()
//{
//	int x = 0, y = 0;
//	while (!(x == 4 && y == 4))
//	{
//		cout << '(' << x << ", " << y << ')' << endl;
//		int tempx = x, tempy = y;
//		x = father[tempx][tempy].first;
//		y = father[tempx][tempy].second;
//	}
//	cout << "(4, 4)" << endl;
//}
//
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cin >> maze[i][j];
//		}
//	}
//	memset(vis, 0, sizeof(vis));
//	bfs();
//	print();
//
//	return 0;
//}
//
