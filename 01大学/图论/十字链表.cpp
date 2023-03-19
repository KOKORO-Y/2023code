//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stdlib.h>
//
//typedef struct ArcBox
//{
//	int tailvec, headvex;  //弧头，弧尾的位置
//	ArcBox* hlink, * tlink;
//	int weight;
//}ArcBox;
//
//typedef struct VexNode
//{
//	int data;
//	ArcBox* firstout, * firstin;  //出度指针与入度指针
//}VecBox;
//
//typedef struct
//{
//	VecBox xlist[20];
//	int numE, numV;
//}OLgraph;
//
//int n, e;
//
//int find_index(OLgraph* G, int key, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (key == G->xlist[i].data)
//		{
//			return i;
//		}
//	}
//}
//
//void Create_Grahp(OLgraph* G)
//{
//	int vi, vj, w;
//	scanf("%d%d", &n, &e);
//	G->numV = n;
//	G->numE = e;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &G->xlist[i].data);
//		G->xlist[i].firstin = NULL;
//		G->xlist[i].firstout = NULL;
//	}
//	for (int i = 0; i < e; i++)
//	{
//		scanf("%d%d%d", &vi, &vj, &w);
//		//查找下标
//		int x = find_index(G, vi, n);
//		int y = find_index(G, vj, n);
//		ArcBox* p = (ArcBox*)malloc(sizeof(ArcBox));
//		p->tailvec = x;
//		p->headvex = y;
//		p->weight = w;
//		p->hlink = G->xlist[y].firstin;
//		p->tlink = G->xlist[x].firstout;
//		G->xlist[y].firstin = p;
//		G->xlist[x].firstout = p;
//	}
//}
