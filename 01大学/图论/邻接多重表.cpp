#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdlib>

//using namespace std;
//typedef struct EdgeNode
//{
//	int ivex, jvex;
//	int weight;
//	struct EdgeNode* v1, * v2;
//}ArcNode;
//
//typedef struct
//{
//	int data;
//	ArcNode* firstEdge;
//}VNode;
//
//typedef struct
//{
//	VNode Dvex[50];
//	int numV, numE;
//}ADGraph;
//
//int n, e;
//
//int find_index(ADGraph* G, int key, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (key == G->Dvex[i].data)
//		{
//			return i;
//		}
//	}
//}
//
//void Create_Graph(ADGraph* G)
//{
//	int vi, vj, w;
//	scanf("%d%d", &n, &e);
//	G->numE = e;
//	G->numV = n;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &G->Dvex[i].data);
//		G->Dvex[i].firstEdge = NULL;
//	}
//	for (int i = 0; i < e; i++)
//	{
//		scanf("%d%d%d", &vi, &vj, &w);
//		//²éÕÒÏÂ±ê
//		int x = find_index(G, vi, n);
//		int y = find_index(G, vj, n);
//		ArcNode* new_node = (ArcNode*)malloc(sizeof(ArcNode));
//		new_node->ivex = x;
//		new_node->jvex = y;
//		new_node->weight = w;
//		new_node->v1 = G->Dvex[x].firstEdge;
//		G->Dvex[x].firstEdge = new_node;
//		new_node->v2 = G->Dvex[y].firstEdge;
//		G->Dvex[y].firstEdge = new_node;
//	}
//}
//
//int main()
//{
//	ADGraph* G = (ADGraph*)malloc(sizeof(ADGraph));
//	Create_Graph(G);
//
//	return 0;
//}
