//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
////并查集 处理不相交集合的合并与查找
////1.无论数据是什么 我对这些数据进行编号 用数组下标代表编号 数组的值指向代表
////秩 按秩合并
///*
//int n 有几个结点
//*/
//int fa[20] = { 0 };
//int deep[20] = { 0 };
//void Init(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		fa[i] = i;
//		deep[i] = 1;
//	}
//}
//
////路径压缩 查询过程中把每个结点的父结点都设置为根结点（代表）
//int find(int x)
//{
//	if (fa[x] == x)
//	{
//		return x;
//	}
//	else
//	{
//		fa[x] = find(fa[x]);
//		return fa[x];
//	}
//}
//
//void merge(int x, int y)
//{
//	int u = find(x);
//	int v = find(y);
//	fa[u] = v;
//	////按秩
//	//if (deep[u] <= deep[v])
//	//{
//	//	fa[u] = v;
//	//}
//	//else
//	//{
//	//	fa[v] = u;
//	//}
//	////如果深度相同 肯定加 有新的根节点要加深度
//	//if (deep[u] == deep[v] && u != v)
//	//{
//	//	deep[v]++;
//	//}
//}