//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#define maxn 20
//typedef struct Child  //树结点
//{
//	int element;
//	int parent;
//}Node;
//
//Node* node[maxn];
//int size = 0;  //当前元素个数
//
//void Init(Node* node[], int key)
//{
//	node[size] = (Node*)malloc(sizeof(Node));
//	node[size]->element = key;
//	node[size]->parent = -114;
//	size++;
//}
//
//int find(Node* node[], int parent)  //查找函数返回父结点下标
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
//void tree_insert(Node* node[], int key, int parent)  //添加树结点
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
//			printf("找不到父结点%d\n", parent);
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
//		printf("孩子结点为%d ", node[i]->element);
//		printf("父亲结点为%d\n", node[i]->parent);
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