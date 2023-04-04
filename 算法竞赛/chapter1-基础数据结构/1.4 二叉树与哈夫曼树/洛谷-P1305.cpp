//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//struct Node
//{
//	char data;
//	int left, right;
//}Tree[114];
//int head = 0;
//int vis[114] = { 0 };
//void creatTree(string a)
//{
//	Tree[a[0] - 'a'].data = a[0];
//	if (a[1] != '*')
//	{
//		vis[a[1] - 'a'] = 1;
//		Tree[a[0] - 'a'].left = a[1] - 'a';
//	}
//	else
//	{
//		Tree[a[0] - 'a'].left = -1;
//	}
//	if (a[2] != '*')
//	{
//		vis[a[2] - 'a'] = 1;
//		Tree[a[0] - 'a'].right = a[2] - 'a';
//	}
//	else
//	{
//		Tree[a[0] - 'a'].right = -1;
//	}
//}
//
//void printf_Tree(int node)
//{
//	printf("%c", Tree[node].data);
//	if (Tree[node].left != -1)
//	{
//		printf_Tree(Tree[node].left);
//	}
//	if (Tree[node].right != -1)
//	{
//		printf_Tree(Tree[node].right);
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	for (int i = 0; i <= 26; i++)
//	{
//		vis[i] = 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		string a;
//		cin >> a;
//		creatTree(a);
//	}
//	for (int i = 0; i <= 25; i++)
//	{
//		if (!vis[i])
//		{
//			head = i;
//			break;
//		}
//	}
//	printf_Tree(head);
//	return 0;
//}
//
