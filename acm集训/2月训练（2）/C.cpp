//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <cstdlib>
//using namespace std;
//
//struct node
//{
//	int index;
//	int x;
//	int weight;
//}Node[200001];
//
//int cmp1(struct node Node1, struct node Node2)
//{
//	if (Node1.weight == Node2.weight)
//	{
//		return Node1.x < Node2.x;
//	}
//	else
//	{
//		return Node1.weight < Node2.weight;
//	}
//}
//
//int cmp2(struct node Node1, struct node Node2)
//{
//	return Node1.x < Node2.x;
//}
//
//void solve()
//{
//	int n = 0, m = 0, sum = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		Node[i].index = i;
//		cin >> Node[i].x >> Node[i].weight;
//	}
//	sort(Node + 1, Node + 1 + m, cmp1);
//	sort(Node + 1, Node + 1 + 2 * n, cmp2);
//	for (int i = 1; i <= 2 * n; i++)
//	{
//		sum += Node[i].weight;
//	}
//	cout << sum << endl;
//	for (int i = 1; i <= n; i++)
//	{
//		cout << Node[i].index << ' ' << Node[2 * n - i + 1].index << endl;
//	}
//
//}
//
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		solve();
//	}
//	return 0;
//}
//
