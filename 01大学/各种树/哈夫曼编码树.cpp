//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef char* HuffmanCode;
//
//typedef struct huffman
//{
//int weight;  //权值
//int parent;
//int left;
//int right;
//int element;  //真实的数据
//}Node, * HuffmanTree;
//
////void select(int n, HuffmanTree* tree, int* s1, int* s2);
////void createhuffmantree(int weight[], int n, HuffmanTree* tree);
////void createHuffmanCode(int n, HuffmanTree* tree, HuffmanCode* huffmanCode);
//
//
//void select(int n, HuffmanTree* tree, int* s1, int* s2)
//{
//	int min = -1;
//	for (int i = 1; i <= n; i++)
//	{
//		//找没父亲的结点
//		if ((*tree)[i].parent == 0)
//		{
//			min = i;
//			break;
//		}
//	}
//	//再遍历全部结点找最小的结点
//	for (int i = 1; i <= n; i++)
//	{
//		if ((*tree)[i].parent == 0 && (*tree)[i].weight < (*tree)[min].weight)
//		{
//			min = i;
//		}
//	}
//	*s1 = min;
//	for (int i = 1; i <= n; i++)
//	{
//		//找没父亲的结点
//		if ((*tree)[i].parent == 0 && i != (*s1))
//		{
//			min = i;
//			break;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if ((*tree)[i].parent == 0 && (*tree)[i].weight < (*tree)[min].weight && i != (*s1))
//		{
//			min = i;
//		}
//	}
//	*s2 = min;
//}
//
//void createhuffmantree(int weight[], int n, HuffmanTree* tree)
//{
//	//用数组的方式构建哈夫曼树
//	//数组有多长 只有度为0或2 
//	int m = 2 * n - 1;
//	*tree = (HuffmanTree)malloc((m + 1) * sizeof(Node));
//	//存放叶子结点
//	for (int i = 1; i <= n; i++)
//	{
//		(*tree)[i].weight = weight[i];
//		(*tree)[i].left = 0;
//		(*tree)[i].right = 0;
//		(*tree)[i].parent = 0;
//		(*tree)[i].element = 0;
//	}
//	for (int i = n + 1; i <= m; i++)
//	{
//		(*tree)[i].weight = 0;
//		(*tree)[i].left = 0;
//		(*tree)[i].right = 0;
//		(*tree)[i].parent = 0;
//		(*tree)[i].element = 0;
//	}
//	//构建哈夫曼树
//	for (int i = n + 1; i <= m; i++)
//	{
//		//先找两个最小权值的叶子
//		int s1 = 0, s2 = 0;
//		select(i - 1, tree, &s1, &s2);
//		//组成新的二叉树
//		(*tree)[s1].parent = i;
//		(*tree)[s2].parent = i;
//		(*tree)[i].weight = (*tree)[s1].weight + (*tree)[s2].weight;
//		(*tree)[i].left = s1;
//		(*tree)[i].right = s2;
//	}
//}
//
////哈夫曼树构建完成 从叶子到根 求编码
//void createHuffmanCode(int n, HuffmanTree* tree, HuffmanCode* huffmanCode)
//{
//	//分配n个编码的头指针
//	huffmanCode = (HuffmanCode*)malloc((n + 1) * sizeof(char*));
//	//编码起始空间从后面开始
//	int start = n - 1;
//	//开始编码
//	char* cd = (char*)malloc(n * sizeof(char));
//	cd[n - 1] = '\0';
//	for (int i = 1; i <= n; i++)
//	{
//		start = n - 1;
//		//从叶子结点到根节点
//		for (int c = i, p = ((*tree)[i].parent); p != 0; c = p, p = (*tree)[p].parent)
//		{
//			if ((*tree)[p].left == c)
//			{
//				cd[--start] = '0';
//			}
//			if ((*tree)[p].right == c)
//			{
//				cd[--start] = '1';
//			}
//		}
//		//为第i个编码分配空间
//		huffmanCode[i] = (char*)malloc((n - start) * sizeof(char));
//		strcpy(huffmanCode[i], &cd[start]);
//
//	}
//	free(cd);
//	for (int i = 1; i <= n; i++)
//	{
//		printf("当前权值为 %3d 的编码是 %s\n", (*tree)[i].weight, huffmanCode[i]);
//	}
//}
//
//int main()
//{
//	HuffmanTree HT;
//	HuffmanCode HC;
//	int n;
//	int wei;
//	scanf("%d", &n);
//	int* w = (int*)malloc((n + 1) * sizeof(int));
//	for (int i = 1; i <= n; i++)
//	{
//		printf("%d: ", i);
//		fflush(stdin);
//		scanf("%d", &wei);
//		w[i] = wei;
//	}
//	createhuffmantree(w, n, &HT);
//	createHuffmanCode(n, &HT, &HC);
//
//
//	return 0;
//}