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
////线索化根据添加线索的位置不同 先序 中序 后序 线索化
//void inOrderThreadTree(Node* node)
//{
//	if (node == NULL)
//	{
//		return;
//	}
//	inOrderThreadTree(node->left);
//	if (node->left == NULL)  //前驱
//	{
//		node->left = pre;
//		node->left_state = 1;
//	}
//	if (pre != NULL && pre->right == NULL)  //后继
//	{
//		pre->right = node;
//		pre->right_state = 1;
//	}
//	//前驱跟着走 在函数调用之前跟着
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
//	if (node->left == NULL)  //前驱
//	{
//		node->left = pre;
//		node->left_state = 1;
//	}
//	if (pre != NULL && pre->right == NULL)  //后继
//	{
//		pre->right = node;
//		pre->right_state = 1;
//	}
//	//前驱跟着走 在函数调用之前跟着
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
//	if (node->left == NULL)  //前驱
//	{
//		node->left = pre;
//		node->left_state = 1;
//	}
//	if (pre != NULL && pre->right == NULL)  //后继
//	{
//		pre->right = node;
//		pre->right_state = 1;
//	}
//	//前驱跟着走 在函数调用之前跟着
//	pre = node;
//}