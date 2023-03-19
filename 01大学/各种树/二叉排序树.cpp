//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstdlib>
// 
//typedef struct sortTree
//{
//	int data;
//	struct sortTree* left, * right;
//}Node;
//
//Node* root = (Node*)malloc(sizeof(Node));  //���ڵ�
//void Init(Node* tree, int key)
//{
//	tree->data = key;
//	tree->left = NULL;
//	tree->right = NULL;
//}
//
//void insert(Node* tree, int key)
//{
//	Node* temp = tree;
//	Node* prev = NULL;
//
//	while (temp != NULL)
//	{
//		if (key > temp->data)
//		{
//			prev = temp;
//			temp = temp->right;
//		}
//		else if (key < temp->data)
//		{
//			prev = temp;
//			temp = temp->left;
//		}
//		else
//		{
//			printf("�ظ�������%d\n", key);
//			return;
//		}
//	}
//	if (key > prev->data)
//	{
//		prev->right = (Node*)malloc(sizeof(Node));
//		prev->right->data = key;
//		prev->right->left = NULL;
//		prev->right->right = NULL;
//	}
//	else if (key < prev->data)
//	{
//		prev->left = (Node*)malloc(sizeof(Node));
//		prev->left->data = key;
//		prev->left->left = NULL;
//		prev->left->right = NULL;
//	}
//}
//
//Node* prev_search(Node* node, int key, Node* root)
//{
//	Node* temp = root;
//	if (root == NULL || node == root)
//	{
//		return node;
//	}
//	else
//	{
//		if (root->left == node && root->left != NULL)
//		{
//			return root;
//		}
//		else if (root->right == node && root->right != NULL)
//		{
//			return root;
//		}
//		else if (key > root->data)
//		{
//			return prev_search(node, key, root->right);
//		}
//		else if (key < root->data)
//		{
//			return prev_search(node, key, root->left);
//		}
//	}
//}
//
//void delete_node(Node* node, int key)
//{
//	if (node == NULL)
//	{
//		printf("�Ҳ�����ɾ��������%d\n", key);
//		return;
//	}
//	else
//	{
//		if (node->data == key)
//		{
//			Node* prev = prev_search(node, key, root);
//			Node* temp;
//			if (node->right == NULL)
//			{
//				temp = node;
//				node = node->left;
//				if (temp == root)
//				{
//					temp->left = NULL;
//					root = node;
//					free(temp);
//				}
//				else if (prev->left == temp && prev->left != NULL)
//				{
//					Node* free_node = temp;
//					free_node->left = NULL;
//					prev->left = node;
//					free(free_node);
//					free_node = NULL;
//				}
//				else if (prev->right == temp && prev->right != NULL)
//				{
//					Node* free_node = temp;
//					free_node->left = NULL;
//					prev->right = node;
//					free(free_node);
//					free_node = NULL;
//				}
//			}
//			else if (node->left == NULL)
//			{
//				temp = node;
//				node = node->right;
//				if (temp == root)
//				{
//					temp->right = NULL;
//					root = node;
//					free(temp);
//				}
//				else if (prev->left == temp && prev->left != NULL)
//				{
//					Node* free_node = temp;
//					free_node->right = NULL;
//					prev->left = node;
//					free(free_node);
//					free_node = NULL;
//				}
//				else if (prev->right == temp && prev->right != NULL)
//				{
//					Node* free_node = temp;
//					free_node->right = NULL;
//					prev->right = node;
//					free(free_node);
//					free_node = NULL;
//				}
//			}
//			else  //������������Ϊ��
//			{
//				temp = node;  //�滻����ǰһ�����
//				Node* replace = node;
//				replace = replace->right;  //����������Сֵ
//				while (replace->left != NULL)
//				{
//					temp = replace;
//					replace = replace->left;
//				}
//				node->data = replace->data;
//				if (temp == node)
//				{
//					temp->right = replace->right;
//					free(replace);
//				}
//				else
//				{
//					temp->left = replace->right;
//					free(replace);
//				}
//
//			}
//		}
//		else if (key > node->data)
//		{
//			delete_node(node->right, key);  //�ȵ�ǰ���� ���ҵݹ�Ѱ��
//		}
//		else
//		{
//			delete_node(node->left, key);  //�ȵ�ǰ���С ����ݹ�Ѱ��
//		}
//	}
//}
//void show(Node* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	if (root->left != NULL)
//	{
//		show(root->left);
//	}
//	printf("%d ", root->data);
//	if (root->right != NULL)
//	{
//		show(root->right);
//	}
//}
//
//int main()
//{
//	Init(root, 4);
//	insert(root, 5);
//	insert(root, 1);
//	insert(root, 2);
//	insert(root, 6);
//	insert(root, 8);
//	insert(root, 7);
//	show(root);
//	printf("\n");
//	delete_node(root, 4);
//	show(root);
//	printf("\n");
//	delete_node(root, 1);
//	show(root);
//	printf("\n");
//	delete_node(root, 8);
//	show(root);
//	printf("\n");
//	delete_node(root, 8);
//	show(root);
//	return 0;
//}
// 
// 
// 
// 
// 
// 
////#include <iostream> //��Ƶ����ϰ��
////#include <cstdlib>
////
////typedef struct sortTree
////{
////	int element;
////	sortTree* left, * right;
////}Node;
////
////Node* root;
////void printf_tree(Node* root);
////void Init(int key);
////void insert(int key);
////Node* findpre_node(Node* root, Node* node, int key);
////int delete_node(Node* node, int key);
////
////int main()
////{
////	Init(1919810);
////	insert(1);
////	insert(2);
////	insert(4);
////	insert(7);
////	insert(9);
////	printf_tree(root);
////	printf("\n");
////	delete_node(root, 1919810);
////	delete_node(root, 1);
////	printf_tree(root);
////	insert(2);
////
////	return 0;
////}
////
////void Init(int key)
////{
////	root = (sortTree*)malloc(sizeof(sortTree));
////	root->element = key;
////	root->left = NULL;
////	root->right = NULL;
////}
////
////void insert(int key)
////{
////	Node* temp1 = root;
////	Node* temp2 = NULL; //ָ���������
////	while (temp1 != NULL)
////	{
////		temp2 = temp1;
////		if (key > temp1->element)
////		{
////			temp1 = temp1->right;
////		}
////		else
////		{
////			temp1 = temp1->left;
////		}
////	}
////	if (key > temp2->element)
////	{
////		Node* new_node = (sortTree*)malloc(sizeof(sortTree));
////		temp2->right = new_node;
////		new_node->element = key;
////		new_node->left = NULL;
////		new_node->right = NULL;
////
////	}
////	else if (key < temp2->element)
////	{
////		Node* new_node = (sortTree*)malloc(sizeof(sortTree));
////		temp2->left = new_node;
////		new_node->element = key;
////		new_node->left = NULL;
////		new_node->right = NULL;
////	}
////	else
////	{
////		printf("�����ظ�����%d\n", key);
////		return;
////	}
////}
/////*
////root �����
////node �յ���
////key ����
////*/
////Node* findpre_node(Node* root, Node* node, int key)
////{
////	if (root == NULL || root == node)
////	{
////		return node;
////	}
////	else
////	{
////		if (root->left->element == key && root->left != NULL)
////		{
////			return root;
////		}
////		else if (root->right->element == key && root->right != NULL)
////		{
////			return root;
////		}
////		else if (key < root->element)
////		{
////			return findpre_node(root->left, node, key);
////		}
////		else
////		{
////			return findpre_node(root->right, node, key);
////		}
////	}
////}
////
////int delete_node(Node* node, int key)
////{
////	if (node == NULL)
////	{
////		return -1;
////	}
////	else
////	{
////		if (node->element == key)
////		{
////			//Ҫ���ҵ�����ǰһ��������ɾ��
////			Node* pretemp = findpre_node(root, node, key);
////			Node* temp2;  //��ɾ�����
////			/*
////			���������Ϊ�� ֻ��Ҫ�������ӽ��
////			�����Ҷ�� ֱ��ɾ��
////			*/
////
////			if (node->right == NULL)
////			{
////				temp2 = node;
////				node = node->left;
////				if (temp2 == root)
////				{
////					temp2->left = NULL;
////					free(temp2);
////					root = node;
////				}
////				else if (pretemp->left != NULL && pretemp->left->element == temp2->element)
////				{
////					Node* free_node = temp2;
////					pretemp->left = node;
////					free(free_node);
////					free_node = NULL;
////				}
////				else
////				{
////					Node* free_node = temp2;
////					pretemp->right = node;
////					free(free_node);
////					free_node = NULL;
////				}
////			}
////			else if (node->left == NULL)
////			{
////				temp2 = node;
////				node = node->right;
////				if (temp2 == root)
////				{
////					temp2->right = NULL;
////					free(temp2);
////					root = node;
////				}
////				else if (pretemp->left != NULL && pretemp->left->element == temp2->element)
////				{
////					Node* free_node = temp2;
////					pretemp->left = node;
////					free(free_node);
////					free_node = NULL;
////				}
////				else
////				{
////					Node* free_node = temp2;
////					pretemp->right = node;
////					free(free_node);
////					free_node = NULL;
////				}
////			}
////			else  //������������Ϊ��
////			{
////				temp2 = node;
////				Node* s = node;  //�����������
////				s = s->left;
////				while (s->right != NULL)
////				{
////					temp2 = s; //�滻����ǰһ�����
////					s = s->right;
////				}
////				node->element = s->element;
////				if (temp2 != node)
////				{
////					temp2->right = s->left;
////					free(s);
////				}
////				else
////				{
////					temp2->left = s->left;
////					free(s);
////				}
////			}
////
////		}
////		else if (key > node->element)
////		{
////			delete_node(root->right, key);
////		}
////		else if (key < node->element)
////		{
////			delete_node(root->left, key);
////		}
////	}
////}
////
////void printf_tree(Node* root)
////{
////	if (root == NULL)
////	{
////		return;
////	}
////	else
////	{
////		if (root->left != NULL)
////		{
////			printf_tree(root->left);
////		}
////		printf("%d ", root->element);
////		if (root->right != NULL)
////		{
////			printf_tree(root->right);
////		}
////	}
////}
//
