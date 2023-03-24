//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#define MAX_SIZE 10
//using namespace std;
//int N;
//int son[MAX_SIZE];
//struct TreeNode
//{
//	char data;
//	int left;
//	int right;
//}T1[MAX_SIZE], T2[MAX_SIZE];
//
//int buildTree(TreeNode T[])
//{
//	int root = -1, i = 0;
//	char cl, cr;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		son[i] = 0;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		cin >> T[i].data >> cl >> cr;
//		if (cl == '-')
//		{
//			T[i].left = -1;
//		}
//		else
//		{
//			T[i].left = cl - '0';
//			son[T[i].left] = 1;
//		}
//		if (cr == '-')
//		{
//			T[i].right = -1;
//		}
//		else
//		{
//			T[i].right = cr - '0';
//			son[T[i].right] = 1;
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		if (!son[i])
//		{
//			root = i;
//			break;
//		}
//	}
//	return root;
//}
//
//int check(int r1, int r2)
//{
//	if (r1 == -1 && r2 == -1)
//	{
//		return 1;
//	}
//	if (r1 == -1 && r2 != -1 || r1 != -1 && r2 == -1)
//	{
//		return 0;
//	}
//	if (T1[r1].data != T2[r2].data)
//	{
//		return 0;
//	}
//	return (check(T1[r1].right, T2[r2].right) && check(T1[r1].left, T2[r2].left) || check(T1[r1].right, T2[r2].left) && check(T1[r1].left, T2[r2].right));
//}
//
//int main()
//{
//	int r1 = 0, r2 = 0;
//	r1 = buildTree(T1);
//	r2 = buildTree(T2);
//	if (check(r1, r2))
//	{
//		cout << "Yes\n";
//	}
//	else
//	{
//		cout << "No\n";
//	}
//	return 0;
//}
//
