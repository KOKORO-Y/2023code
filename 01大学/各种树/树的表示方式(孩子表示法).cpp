//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Child  //树结点
//{
//	int element;
//	Child* next;
//}Node;
//
//Node* tree_array[20];
//int size = 0;
//void Init(Node* tree[], int key)  //初始化
//{
//	tree[size] = (Node*)malloc(sizeof(Node));
//	tree[size]->element = key;
//	tree[size]->next = NULL;
//	size++;
//}
//
//int find(Node* tree[], int parent)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (tree[i]->element == parent)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//void build_tree(Node* tree[], int parent, int key)
//{
//	int index = find(tree, parent);
//	if (index == -1)
//	{
//		printf("找不到父结点%d\n", parent);
//	}
//	else
//	{
//		tree[size] = (Node*)malloc(sizeof(Node));
//		tree[size]->element = key;
//		tree[size]->next = NULL;
//		size++;
//
//		Node* new_node = (Node*)malloc(sizeof(Node));
//		new_node->next = tree[index]->next;
//		new_node->element = key;
//		tree[index]->next = new_node;
//	}
//}
//
//void print_tree(Node* tree[])
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("父结点为");
//		printf("%d ", tree[i]->element);
//		Node* temp = tree[i]->next;
//		while (temp != NULL)
//		{
//			printf("孩子结点为");
//			printf("%d ", temp->element);
//			temp = temp->next;
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	Init(tree_array, 1);
//	build_tree(tree_array, 1, 2);
//	build_tree(tree_array, 1, 3);
//	build_tree(tree_array, 2, 4);
//	build_tree(tree_array, 2, 5);
//	build_tree(tree_array, 3, 6);
//	build_tree(tree_array, 3, 7);
//	print_tree(tree_array);
//
//	return 0;
//}