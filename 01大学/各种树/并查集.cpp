//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
////���鼯 �����ཻ���ϵĺϲ������
////1.����������ʲô �Ҷ���Щ���ݽ��б�� �������±������ �����ֵָ�����
////�� ���Ⱥϲ�
///*
//int n �м������
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
////·��ѹ�� ��ѯ�����а�ÿ�����ĸ���㶼����Ϊ����㣨����
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
//	////����
//	//if (deep[u] <= deep[v])
//	//{
//	//	fa[u] = v;
//	//}
//	//else
//	//{
//	//	fa[v] = u;
//	//}
//	////��������ͬ �϶��� ���µĸ��ڵ�Ҫ�����
//	//if (deep[u] == deep[v] && u != v)
//	//{
//	//	deep[v]++;
//	//}
//}