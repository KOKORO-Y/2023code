//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#define maxn 20
//typedef struct Child  //�����
//{
//	int element;
//	int parent;
//}Node;
//
//Node* node[maxn];
//int size = 0;  //��ǰԪ�ظ���
//
//void Init(Node* node[], int key)
//{
//	node[size] = (Node*)malloc(sizeof(Node));
//	node[size]->element = key;
//	node[size]->parent = -114;
//	size++;
//}
//
//int find(Node* node[], int parent)  //���Һ������ظ�����±�
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (node[i]->element == parent)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//void tree_insert(Node* node[], int key, int parent)  //��������
//{
//	if (size == maxn)
//	{
//
//	}
//	else
//	{
//		int index = find(node, parent);
//		if (index == -1)
//		{
//			printf("�Ҳ��������%d\n", parent);
//		}
//		else
//		{
//			node[size] = (Node*)malloc(sizeof(Node));
//			node[size]->element = key;
//			node[size]->parent = parent;
//			size++;
//		}
//	}
//}
//
//void print_tree(Node* node[])
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("���ӽ��Ϊ%d ", node[i]->element);
//		printf("���׽��Ϊ%d\n", node[i]->parent);
//	}
//}
//
//int main()
//{
//	Init(node, 1);
//	tree_insert(node, 2, 1);
//	tree_insert(node, 3, 1);
//	tree_insert(node, 4, 2);
//	tree_insert(node, 5, 2);
//	tree_insert(node, 6, 3);
//	tree_insert(node, 7, 3);
//	print_tree(node);
//
//	return 0;
//}