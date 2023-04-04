//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	int next;
//}List[114];
//
//int main()
//{
//	int n = 0, m = 0;;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		List[i].data = i;
//		List[i].next = i + 1;
//	}
//	List[n].next = 1;
//	int now = 1, pre = n;
//	while (n--)
//	{
//		for (int i = 1; i < m; i++)
//		{
//			pre = now;
//			now = List[now].next;
//		}
//		printf("%d ", List[now].data);
//		List[pre].next = List[now].next;
//		now = List[pre].next;
//	}
//	return 0;
//}
//
