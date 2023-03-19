//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#define HEIGHT(node) ((node == NULL) ? 0 : (((avlnode*)(node))->height))
//#define MAX(a,b) (((a) > (b)) ? (a) : (b))
//typedef struct node
//{
//	int element;
//	struct node* left;
//	struct node* right;
//	int height;  //ÿ����㶼��Ҫ���Լ��ĸ߶�
//
//}avlnode, *avltree;  //avlnode����һ����� avltree����һ�����ĸ����
//
//avltree left_left_rotation(avltree tree);
//avltree right_right_rotation(avltree tree);
//avltree left_right_rotation(avltree tree);
//avltree right_left_rotation(avltree tree);
//avltree avltree_insert(int key, avltree tree);
//void pre_order_avltree(avltree tree);
//void in_order_avltree(avltree tree);
//avlnode* min_numnode(avltree tree);
//avltree remove_avltree(avltree tree, int key);
//avlnode* creat_node(int key, avlnode* left, avlnode* right);
//avlnode* search_node(avltree tree, int key);
//
//int main()
//{
//	avltree tree = NULL;
//	int a[] = { 50,30,20,70,25,40,60,10,28,41,39,90,43 };
//	for (int i = 0; i < 13; i++)
//	{
//		tree = avltree_insert(a[i], tree);
//	}
//	pre_order_avltree(tree);
//	printf("\n");
//	in_order_avltree(tree);
//	printf("\n");
//	tree = remove_avltree(tree, 50);
//	pre_order_avltree(tree);
//	printf("\n");
//	in_order_avltree(tree);
//	printf("\n");
//	return 0;
//}
//
//void in_order_avltree(avltree tree)
//{
//	if (tree)
//	{
//		in_order_avltree(tree->left);
//		printf("%d ", tree->element);
//		in_order_avltree(tree->right);
//	}
//}
//
//void pre_order_avltree(avltree tree)
//{
//	if (tree)
//	{
//		printf("%d ", tree->element);
//		pre_order_avltree(tree->left);
//		pre_order_avltree(tree->right);
//	}
//}
//
//avlnode* creat_node(int key, avlnode* left, avlnode* right)
//{
//	avlnode* node = (avlnode*)malloc(sizeof(avlnode));
//	if (node == NULL)
//	{
//		return NULL;
//	}
//	else
//	{
//		node->element = key;
//		node->left = left;
//		node->right = right;
//		node->height = 0;
//		return node;
//	}
//}
//
//avltree left_left_rotation(avltree tree)  //����
//{
//	avlnode* k2 = tree->left;
//	tree->left = k2->right;
//	k2->right = tree;
//	//��ת���Ժ����µ����߶�
//	tree->height = MAX(HEIGHT(tree->left), HEIGHT(tree->right)) + 1;
//	k2->height = MAX(HEIGHT(k2->left), HEIGHT(k2->right)) + 1;
//	return k2;
//}
//
//avltree right_right_rotation(avltree tree)  //����
//{
//	avlnode* k3 = tree->right;
//	tree->right = k3->left;
//	k3->left = tree;
//	//��ת���Ժ����µ����߶�
//	tree->height = MAX(HEIGHT(tree->left), HEIGHT(tree->right)) + 1;
//	k3->height = MAX(HEIGHT(k3->left), HEIGHT(k3->right)) + 1;
//	return k3;
//}
//
//avltree left_right_rotation(avltree tree)
//{
//	tree->left = right_right_rotation(tree->left);
//	tree = left_left_rotation(tree);
//	return tree;
//}
//
//avltree right_left_rotation(avltree tree)
//{
//	tree->right = left_left_rotation(tree->right);
//	tree = right_right_rotation(tree);
//	return tree;
//}
//
///*
//ƽ�������������ڶ��������� ��Ҫ���ڲ����Ҫ��֤ƽ��
//*/
//avltree avltree_insert(int key, avltree tree)
//{
//	if (tree == NULL)
//	{
//		avlnode* node = creat_node(key, NULL, NULL);
//		tree = node;
//	}
//	else if (key < tree->element)
//	{
//		//�ݹ�Ѱ�Ҳ������λ��
//		tree->left = avltree_insert(key, tree->left);
//		//�ж϶������Ƿ�ƽ�� ��Ϊ��������� �ʳ�����ֻ�������
//		if (HEIGHT(tree->left) - HEIGHT(tree->right) == 2)
//		{
//			//��ת
//			if (key < tree->left->element)
//			{
//				//��ߵ���� ����
//				tree = left_left_rotation(tree);
//			}
//			else
//			{
//				//��ߵ��ұ� ������������
//				tree = left_right_rotation(tree);
//			}
//		}
//	}
//	else if (key > tree->element)
//	{
//		//�ݹ�Ѱ�Ҳ������λ��
//		tree->right = avltree_insert(key, tree->right);
//		//�ж϶������Ƿ�ƽ�� ��Ϊ�����Ҳ��� �ʳ�����ֻ�����ұ�
//		if (HEIGHT(tree->right) - HEIGHT(tree->left) == 2)
//		{
//			//��ת
//			if (key > tree->right->element)
//			{
//				//�ұߵ��ұ� ����
//				tree = right_right_rotation(tree);
//			}
//			else
//			{
//				//�ұߵ���� ������������
//				tree = right_left_rotation(tree);
//			}
//		}
//	}
//	else
//	{
//		//�����������ͬ��ֵ
//		printf("�����ظ�Ԫ��%d\n", key);
//	}
//	//�Խ����и���
//	tree->height = MAX(HEIGHT(tree->left), HEIGHT(tree->right)) + 1;
//	return tree;
//}
//
//avlnode* search_node(avltree tree, int key)
//{
//	if (tree == NULL || tree->element == key)
//	{
//		return tree;
//	}
//	else if (key < tree->element)
//	{
//		search_node(tree->left, key);
//	}
//	else
//	{
//		search_node(tree->right, key);
//	}
//}
//
//avlnode* min_numnode(avltree tree)
//{
//	while (tree->left != NULL)
//	{
//		tree = tree->left;
//	}
//	return tree;
//}
//
//avltree remove_avltree(avltree tree, int key)
//{
//	//�Ȳ���Ԫ��
//	avlnode* node = search_node(tree, key);
//	if (tree == NULL || node == NULL)
//	{
//		return tree;
//	}
//	if (key < tree->element)
//	{
//		//�ݹ���ɾ�����
//		tree->left = remove_avltree(tree->left, key);
//		if (HEIGHT(tree->right) - HEIGHT(tree->left) == 2)
//		{
//			if (key < tree->right->element)
//			{
//				tree = right_left_rotation(tree);
//			}
//			else
//			{
//				tree = right_right_rotation(tree);
//			}
//		}
//	}
//	else if (key > tree->element)
//	{
//		//�ݹ���ɾ�����
//		tree->right = remove_avltree(tree->right, key);
//		if (HEIGHT(tree->left) - HEIGHT(tree->right) == 2)
//		{
//			if (key > tree->right->element)
//			{
//			tree = left_right_rotation(tree);
//			}
//			else
//			{
//				tree = left_left_rotation(tree);
//			}
//		}
//	}
//	else  //�ҵ���ɾ����� ��Ҫ����ɾ��
//	{
//		if (tree->right && tree->left)
//		{
//			avlnode* temp_node = min_numnode(tree->right);
//			tree->element = temp_node->element;
//			remove_avltree(tree->right, temp_node->element);
//		}
//		else  //���ӻ����� ����к���ֱ�ӰѺ�����������
//		{
//			tree = tree->left ? tree->left : tree->right;
//		}
//	}
//	if (tree)
//	{
//		tree->height = tree->height = MAX(HEIGHT(tree->left), HEIGHT(tree->right)) + 1;
//	}
//	return tree;
//}