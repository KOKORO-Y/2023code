//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstdlib>
//#define Maxweight 1e6;
//
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
//int n = 0, e = 0;
//
//int find_index(AdjMatrix* G, int key, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (key == G->Vertices[i])
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//void CreateGraph(AdjMatrix* G)
//{
//	int vi, vj, w;
//	scanf("%d%d", &n, &e);
//	G->numV = n;
//	G->numE = e;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j)
//			{
//				G->Edge[i][j] = 0;
//			}
//			else
//			{
//				G->Edge[i][j] = -1;
//			}
//		}
//	}
//	for (int i = 0; i < G->numV; i++)
//	{
//		//输入顶点信息
//		scanf("%d", &G->Vertices[i]);
//	}
//	for (int i = 0; i < G->numE; i++)
//	{
//		//输入边的信息 邻接点的两端 如果是带权还要输入权值
//		scanf("%d%d%d", &vi, &vj, &w);
//		//还要在查找 找到对应下标
//		int x = find_index(G, vi, n);
//		int y = find_index(G, vj, n);
//		G->Edge[x][y] = w;
//		//如果是无向图还要再
//		G->Edge[y][x] = w;
//	}
//}
//
//void printf_G(AdjMatrix* G, int n, int e)
//{
//	printf("边有:");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", G->Vertices[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", G->Edge[i][j]);
//			if (j == n - 1)
//			{
//				printf("\n");
//			}
//		}
//	}
//}
//
//int main()
//{
//	AdjMatrix* G = (AdjMatrix*)malloc(sizeof(AdjMatrix));
//	CreateGraph(G);
//	printf_G(G, n, e);
//
//	return 0;
//}