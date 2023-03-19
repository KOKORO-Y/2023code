//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstdlib>
//
//typedef struct EdgeNode  //�߱���
//{
//	int adjvex;  //���ڽӽ��
//	EdgeNode* next;
//	int weight;  //Ȩֵ
//}EdgeNode;
//
//typedef struct VertexNode
//{
//	int data;  //�������
//	EdgeNode* firstedge;
//}VertexNode, Adjlist[100];
//
//typedef struct GraphList
//{
//	Adjlist adj;
//	int numV, numE;
//}GraphList;
//
//int n, e;
//
//int find_index(GraphList* G, int key, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (key == G->adj[i].data)
//		{
//			return i;
//		}
//	}
//}
//
//void CreateGraph(GraphList* G)
//{
//	int vi, vj, w;
//	scanf("%d%d", &n, &e);
//	G->numV = n;
//	G->numE = e;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &G->adj[i].data);
//		getchar();
//		G->adj[i].firstedge = NULL;
//	}
//	//�����߱�
//	for (int i = 0; i < e; i++)
//	{
//		scanf("%d%d%d", &vi, &vj, &w);
//		//���±�
//		int x = find_index(G, vi, n);
//		int y = find_index(G, vj, n);
//		EdgeNode* e = (EdgeNode*)malloc(sizeof(EdgeNode));
//		e->adjvex = y;
//		e->weight = w;
//		e->next = G->adj[x].firstedge;
//		G->adj[x].firstedge = e;
//		//���������ͼ
//		EdgeNode* f = (EdgeNode*)malloc(sizeof(EdgeNode));
//		f->adjvex = x;
//		f->weight = w;
//		f->next = G->adj[y].firstedge;
//		G->adj[y].firstedge = f;
//	}
//}
//
//void printf_G(GraphList* G)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d->", G->adj[i].data);
//		EdgeNode* temp = G->adj[i].firstedge;
//		while (temp != NULL)
//		{
//			printf("index:%d weight:%d ", temp->adjvex, temp->weight);
//			temp = temp->next;
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	GraphList* G = (GraphList*)malloc(sizeof(GraphList));
//	CreateGraph(G);
//	printf_G(G);
//
//	return 0;
//}