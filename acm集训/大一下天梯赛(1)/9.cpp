//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <set>
//#include <algorithm>
//using namespace std;
//struct a
//{
//	int num;
//	char name[10];
//	set<int> b;
//}n[114];
//bool cmp(struct a x, struct a y)
//{
//	if (x.b.size() == y.b.size())
//	{
//		return x.num < y.num;
//	}
//	else
//	{
//		return x.b.size() > y.b.size();
//	}
//}
//int main()
//{
//	int t = 0;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		cin >> n[i].name;
//		cin >> n[i].num;
//		for (int j = 0; j < n[i].num; j++)
//		{
//			int x = 0;
//			cin >> x;
//			n[i].b.insert(x);
//		}
//	}
//	sort(n, n + t, cmp);
//	if (t == 1)
//	{
//		printf("%s ", n[0].name);
//		printf("- ");
//		printf("-");
//	}
//	else if (t == 2)
//	{
//		printf("%s ", n[0].name);
//		printf("%s ", n[1].name);
//		printf("-");
//	}
//	else if (t >= 3)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			if (i < 2)
//			{
//				printf("%s ", n[i].name);
//			}
//			else if (i == 2)
//			{
//				printf("%s", n[i].name);
//			}
//		}
//	}
//	return 0;
//}
//
