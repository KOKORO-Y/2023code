//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//#include <map>
//using namespace std;
//typedef struct ChildBro
//{
//	int data;
//	ChildBro* Child;
//	ChildBro* Bro;
//}tree;
//
//tree* root;
//
//void Init(int key)
//{
//	root = (ChildBro*)malloc(sizeof(ChildBro));
//	root->data = key;
//	root->Child = NULL;
//	root->Bro = NULL;
//}
//
//void get_node(tree* node, int key, tree** tempnode)
//{
//	if (node->data == key)
//	{
//		*tempnode = node;
//	}
//	if (node->Bro != NULL)
//	{
//		get_node(node->Bro, key, tempnode);
//	}
//	if (node->Child !=NULL)
//	{
//		get_node(node->Child, key, tempnode);
//	}
//}
//
//void insert(ChildBro* tree, int key, int parent)
//{
//	ChildBro* index = NULL;
//	get_node(root, parent, &index);
//	if (index == NULL)
//	{
//		printf("找不到父结点%d\n", parent);
//	}
//	else
//	{
//		if (index->Child == NULL)
//		{
//			ChildBro* new_node = (ChildBro*)malloc(sizeof(ChildBro));
//			new_node->data = key;
//			new_node->Child = NULL;
//			new_node->Bro = NULL;
//			index->Child = new_node;
//		}
//		else
//		{
//			index = index->Child;
//			ChildBro* new_node = (ChildBro*)malloc(sizeof(ChildBro));
//			new_node->data = key;
//			new_node->Child = NULL;
//			new_node->Bro = index->Bro;
//			index->Bro = new_node;
//		}
//	}
//}
//
//void printf_tree(ChildBro* tree)
//{
//	printf("%d ", tree->data);
//	if (tree->Child != NULL)
//	{
//		printf_tree(tree->Child);
//	}
//	if (tree->Bro != NULL)
//	{
//		printf_tree(tree->Bro);
//	}
//}
//
//int main()
//{
//	Init(1);
//	insert(root, 2, 1);
//	insert(root, 3, 1);
//	insert(root, 4, 2);
//	insert(root, 5, 2);
//	insert(root, 6, 3);
//	insert(root, 7, 3);
//	printf_tree(root);
//	printf("\n");
//	queue<int> que;
//	que.push(root->data);
//	while (!que.empty())
//	{
//		ChildBro* temp;
//		get_node(root, que.front(), &temp);
//		printf("%d ", que.front());
//		que.pop();
//		if (temp->Child != NULL)
//		{
//			que.push(temp->Child->data);
//		}
//		if (temp->Bro != NULL)
//		{
//			que.push(temp->Bro->data);
//		}
//	}
//
//
//	return 0;
//}
