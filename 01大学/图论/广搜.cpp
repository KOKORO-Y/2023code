//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <queue>
//using namespace std;
//
//const int N = 100;
//typedef struct
//{
//	int Vertices[N];  //顶点集合
//	int Edge[N][N];  //边集合
//	int numV;  //顶点个数
//	int numE;  //边的个数
//}AdjMatrix;
//
//int vis[N] = { 0 };
//
//void BFS(AdjMatrix* G)
//{
//	queue<int> que;
//	for (int i = 1; i <= G->numV; i++)
//	{
//		vis[i] = 0;
//	}
//	que.push(G->Vertices[1]);
//	vis[G->Vertices[1]] = 1;
//	while (!que.empty())
//	{
//		int index = que.front();
//		cout << index << ' ';
//		que.pop();
//		for (int i = 1; i <= G->numV; i++)
//		{
//			if (G->Edge[index][i] && !vis[i])
//			{
//				que.push(i);
//				vis[i] = 1;
//			}
//		}
//	}
//}
//
//int main()
//{
//	AdjMatrix G;
//	cin >> G.numV >> G.numE;
//	for (int i = 0; i <= G.numV; i++)
//	{
//		for (int j = 0; j <= G.numV; j++)
//		{
//			G.Edge[i][j] = -1;
//		}
//	}
//	for (int i = 1; i <= G.numV; i++)
//	{
//		cin >> G.Vertices[i];
//	}
//	for (int i = 1; i <= G.numE; i++)
//	{
//		int x, y, w;
//		cin >> x >> y >> w;
//		G.Edge[x][y] = w;
//		G.Edge[y][x] = w;
//	}
//	BFS(&G);
//	return 0;
//}
//
