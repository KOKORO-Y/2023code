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
//	int Vertices[N];  //���㼯��
//	int Edge[N][N];  //�߼���
//	int numV;  //�������
//	int numE;  //�ߵĸ���
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
//		//���붥����Ϣ
//		scanf("%d", &G->Vertices[i]);
//	}
//	for (int i = 0; i < G->numE; i++)
//	{
//		//����ߵ���Ϣ �ڽӵ������ ����Ǵ�Ȩ��Ҫ����Ȩֵ
//		scanf("%d%d%d", &vi, &vj, &w);
//		//��Ҫ�ڲ��� �ҵ���Ӧ�±�
//		int x = find_index(G, vi, n);
//		int y = find_index(G, vj, n);
//		G->Edge[x][y] = w;
//		//���������ͼ��Ҫ��
//		G->Edge[y][x] = w;
//	}
//}
//
//void printf_G(AdjMatrix* G, int n, int e)
//{
//	printf("����:");
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