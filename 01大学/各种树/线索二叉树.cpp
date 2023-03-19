//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct ThreadTree
//{
//	int data;
//	struct ThreadTree* left, * right;
//	int left_state;
//	int right_state;
//}Node;
//
//Node* pre = NULL;
//void inOrderThreadTree(Node* node);
//void preOrderThreadTree(Node* node);
//void postOrderThreadTree(Node* node);
//
//
//
////�������������������λ�ò�ͬ ���� ���� ���� ������
//void inOrderThreadTree(Node* node)
//{
//	if (node == NULL)
//	{
//		return;
//	}
//	inOrderThreadTree(node->left);
//	if (node->left == NULL)  //ǰ��
//	{
//		node->left = pre;
//		node->left_state = 1;
//	}
//	if (pre != NULL && pre->right == NULL)  //���
//	{
//		pre->right = node;
//		pre->right_state = 1;
//	}
//	//ǰ�������� �ں�������֮ǰ����
//	pre = node;
//	inOrderThreadTree(node->right);
//}
//
//void preOrderThreadTree(Node* node)
//{
//	if (node == NULL)
//	{
//		return;
//	}
//	if (node->left == NULL)  //ǰ��
//	{
//		node->left = pre;
//		node->left_state = 1;
//	}
//	if (pre != NULL && pre->right == NULL)  //���
//	{
//		pre->right = node;
//		pre->right_state = 1;
//	}
//	//ǰ�������� �ں�������֮ǰ����
//	pre = node;
//	if (node->left_state == 0)
//	{
//		inOrderThreadTree(node->left);
//	}
//	if (node->right_state == 0)
//	{
//		inOrderThreadTree(node->right);
//	}
//}
//
//void postOrderThreadTree(Node* node)
//{
//	if (node == NULL)
//	{
//		return;
//	}
//	inOrderThreadTree(node->left);
//	inOrderThreadTree(node->right);
//	if (node->left == NULL)  //ǰ��
//	{
//		node->left = pre;
//		node->left_state = 1;
//	}
//	if (pre != NULL && pre->right == NULL)  //���
//	{
//		pre->right = node;
//		pre->right_state = 1;
//	}
//	//ǰ�������� �ں�������֮ǰ����
//	pre = node;
//}